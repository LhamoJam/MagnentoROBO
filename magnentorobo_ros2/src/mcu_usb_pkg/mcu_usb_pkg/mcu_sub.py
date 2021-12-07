#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from artscript_interfaces.msg import Infraredstrain

class ARTScriptNode(Node):
    def __init__(self):
        super().__init__("mcu_sub")
        self.get_logger().info("mcu_sub start ...")
        self.sub_ = self.create_subscription(Infraredstrain,"mcu_usb_topic",self.recv_callback,10)

    def recv_callback(self,Infraredstrain):
        self.get_logger().info("{}".format("Infrared:{}cm, Strain{}".format(Infraredstrain.infrared,Infraredstrain.strain)))


def main(args=None):
    rclpy.init(args=args) # 初始化rclpy
    node = ARTScriptNode()  # 新建一个节点
    rclpy.spin(node) # 保持节点运行，检测是否收到退出指令（Ctrl+C）
    rclpy.shutdown() # rcl关闭
