#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from std_msgs.msg import String

class ARTScriptNode(Node):
    def __init__(self):
        super().__init__("imu_sub")
        self.get_logger().info("Listener start ...")
        self.sub_ = self.create_subscription(String,"imu_usb_topic",self.recv_callback,10)

    def recv_callback(self,novel):
        self.get_logger().info('imu_sub: %s' % novel.data)


def main(args=None):
    rclpy.init(args=args) # 初始化rclpy
    node = ARTScriptNode()  # 新建一个节点
    rclpy.spin(node) # 保持节点运行，检测是否收到退出指令（Ctrl+C）
    rclpy.shutdown() # rcl关闭
