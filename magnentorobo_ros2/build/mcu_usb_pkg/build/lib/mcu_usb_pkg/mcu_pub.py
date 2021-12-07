import rclpy
from rclpy.node import Node
from artscript_interfaces.msg import Infraredstrain
import time

import serial
class MCU():
    def __init__(self, port, baud) -> None:
        self.ser = serial.Serial(port, baud, timeout=0.5)
        # print('MCU online: ',self.ser.is_open)

    def DataRead(self):
        char = str(self.ser.readline(), "utf-8").strip('\r\n')
        if char != '':
            data = list(map(eval, char.split('&')))
            return data

class ARTScriptNode(Node):
    def __init__(self):
        super().__init__("mcu_pub") # name for node
        self.declare_parameter("mcu_pub_port",'/dev/ttyUSB1')
        self.declare_parameter("mcu_pub_baud",9600)
        self.port = self.get_parameter('mcu_pub_port').get_parameter_value().string_value
        self.baud = self.get_parameter('mcu_pub_baud').get_parameter_value().integer_value
        self.MCU = MCU(self.port,self.baud)
        self.get_logger().info("mcu_pub start...")
        self.write = self.create_publisher(Infraredstrain,"mcu_usb_topic", 10)
        timer_period = 0.1
        self.timer = self.create_timer(timer_period, self.timer_callback)  #启动一个定时装置，每 1 s,调用一次time_callback函数

        # 声明参数,参数名字，默认值
        self.declare_parameter("mcu_pub_period",0.1)

    def timer_callback(self):
        if self.MCU.ser.is_open:
            msg = Infraredstrain()
            MCU_data = self.MCU.DataRead()
            if MCU_data != None:
                MCU_data_list = list(map(int, MCU_data))
                msg.infrared = MCU_data_list[0]
                msg.strain = MCU_data_list[1]
                self.write.publish(msg)  #将小说内容发布出去
                self.get_logger().info("{}".format("Infrared:{} cm, Strain:{}".format(msg.infrared,msg.strain)))    #打印一下发布的数据，供我们看
            
            # 回调之后更新回调周期
            timer_period = self.get_parameter('mcu_pub_period').get_parameter_value().integer_value
            # 更新回调周期
            self.timer.timer_period_ns = timer_period * (1000*1000*1000)
        else:
            self.get_logger().info("{}".format("MCU serial connect wrong"))

def main(args=None):
    rclpy.init(args=args)
    node = ARTScriptNode()
    rclpy.spin(node)
    rclpy.shutdown()