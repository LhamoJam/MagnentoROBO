import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from std_msgs.msg import UInt32

class ARTScriptNode(Node):
    def __init__(self):
        super().__init__("imu_pub") # name for node
        self.get_logger().info("imu_pub start...")

        self.write = self.create_publisher(String,"imu_usb_topic", 10)
        timer_period = 1
        self.timer = self.create_timer(timer_period, self.timer_callback)  #启动一个定时装置，每 1 s,调用一次time_callback函数
        self.i = 0
    def timer_callback(self):
        msg = String()
        msg.data = 'imu_usb %s' % (self.i)
        self.write.publish(msg)  #将小说内容发布出去
        self.get_logger().info('imu_pub: %s' % msg.data)    #打印一下发布的数据，供我们看
        self.i += 1

def main(args=None):
    rclpy.init(args=args)
    node = ARTScriptNode()
    rclpy.spin(node)
    rclpy.shutdown()