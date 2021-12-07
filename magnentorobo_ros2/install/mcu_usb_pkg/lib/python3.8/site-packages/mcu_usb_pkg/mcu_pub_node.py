import rclpy
from rclpy.node import Node
from artscript_interfaces import InfraredStrain

import serial
class MCU():
    def __init__(self, port, baud) -> None:
        # ser = serial.Serial('com7',115200, timeout=0.5)
        self.ser = serial.Serial(port, baud, timeout=0.5)
        print('MCU online: ',self.ser.is_open)

    def DataRead(self):
        char = str(self.ser.readline(), "utf-8").strip('\r\n')
        if char != '':
            data = list(map(eval, char.split('&')))
            return data

class ARTScriptNode(Node):
    def __init__(self):
        super().__init__("mcu_pub") # name for node
        self.IMU = MCU('/dev/ttyUSB1',9600)
        self.get_logger().info("mcu_pub start...")
        self.write = self.create_publisher(InfraredStrain,"mcu_usb_topic", 10)
        timer_period = 0.1
        self.timer = self.create_timer(timer_period, self.timer_callback)  #启动一个定时装置，每 1 s,调用一次time_callback函数

    def timer_callback(self):
        msg = InfraredStrain()
        imu_data = self.IMU.DueData()
        if imu_data != None:
            imu_data_list = list(map(int, imu_data))
            msg.infrared = imu_data_list[0]
            msg.strain = imu_data_list[1]
            self.write.publish(msg)  #将小说内容发布出去
            self.get_logger().info("{}".format("Infrared:{} cm, Strain:{}".format(msg.infrared,msg.strain)))    #打印一下发布的数据，供我们看

def main(args=None):
    rclpy.init(args=args)
    node = ARTScriptNode()
    rclpy.spin(node)
    rclpy.shutdown()