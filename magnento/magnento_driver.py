import time
import serial


class Magnento:
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
        else:
            print("magenento list 必须是6个")
        print('------')

    def read_status(self):
        while True:
            result = self.ser.readline()
            print(result)


if __name__ == "__main__":
    magnento = Magnento("COM13", 9600)
    # read_thread = threading.Thread(target=magnento.read_status)
    # read_thread.setDaemon(True)
    # read_thread.start()
    while True:
        magnento.change_list([1, 1, 0, 0, 1, 1])
        time.sleep(3)
        magnento.change_list([0, 0, 1, 1, 0, 0])
        time.sleep(3)
