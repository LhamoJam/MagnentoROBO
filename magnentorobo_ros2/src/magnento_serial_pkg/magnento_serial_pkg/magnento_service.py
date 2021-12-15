import rclpy
from rclpy.node import Node
from artscript_interfaces.srv import Magnento
import time
import serial

class MagnentoDriver():
    def __init__(self, port, baud) -> None:
        self.ser = serial.Serial(
            port,
            baud,
            bytesize=serial.EIGHTBITS,
            parity=serial.PARITY_NONE,
            stopbits=serial.STOPBITS_ONE,
            timeout=0.5,
        )
        print("Magenento online: ", self.ser.is_open)

    def make_protocol(self, legid, status):
        if status:
            open_protocol = "00 f{:} ff".format(legid)
            return open_protocol
        else:
            close_protocol = "00 0{:} ff".format(legid)
            return close_protocol

    def change_magnento(self, proto):
        try:
            self.ser.write(bytes.fromhex(proto))
        except Exception:
            self.ser.close()
            print("Mageneto close")

    def change_list(self, leglist):
        if len(leglist) == 6:
            for i in range(6):
                proto = self.make_protocol(i + 1, leglist[i])
                print(proto)
                self.change_magnento(proto)
            return True
        else:
            print("magenento list 必须是6个")
            return False
        print('------')

    def read_status(self):
        while True:
            result = self.ser.readline()
            print(result)


class ARTScriptNode(Node):
    def __init__(self):
        super().__init__("magnento_service")  # name for node
        self.declare_parameter("magnento_port",'/dev/ttyUSB0')
        self.declare_parameter("magnento_baud",9600)
        self.port = self.get_parameter('magnento_port').get_parameter_value().string_value
        self.baud = self.get_parameter('magnento_baud').get_parameter_value().integer_value
        self.magnento_driver = MagnentoDriver(self.port,self.baud)
        self.get_logger().info("MagnentoDriver start...")

        self.magnento_server = self.create_service(
            Magnento, "magnento_service", self.magnento_service_callback)

    def magnento_service_callback(self, request, response):

        command_list = request.magnento_list

        result = self.magnento_driver.change_list(command_list)
        if result:
            response.status = True
            return response
        else:
            response.status = False
            return response


def main(args=None):
    rclpy.init(args=args)
    node = ARTScriptNode()
    rclpy.spin(node)
    rclpy.shutdown()
