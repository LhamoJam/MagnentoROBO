import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from std_msgs.msg import UInt32

class ARTScriptNode(Node):
    def __init__(self):
        super().__init__("strain_pub")
        self.get_logger().info("strain_pub start...")

        self.write = self.create_publisher(String,"strain_gpio_topic", 10)
        timer_period = 1
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.i = 0
    def timer_callback(self):
        msg = String()
        msg.data = '%s' % (self.i)
        self.write.publish(msg)  
        self.get_logger().info('%s' % msg.data) 
        self.i += 1

def main(args=None):
    rclpy.init(args=args)
    node = ARTScriptNode()
    rclpy.spin(node)
    rclpy.shutdown()