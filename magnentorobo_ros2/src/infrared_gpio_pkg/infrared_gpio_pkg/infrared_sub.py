#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from std_msgs.msg import String

class ARTScriptNode(Node):
    def __init__(self):
        super().__init__("infrared_sub")
        self.get_logger().info("Listener start ...")
        self.sub_ = self.create_subscription(String,"infrared_gpio_topic",self.recv_callback,10)

    def recv_callback(self,novel):
        self.get_logger().info(' %s' % novel.data)


def main(args=None):
    rclpy.init(args=args)
    node = ARTScriptNode()
    rclpy.spin(node)
    rclpy.shutdown()
