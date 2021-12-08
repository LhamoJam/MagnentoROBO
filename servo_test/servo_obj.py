import serial


class Hexpod():
    def __init__(self, port, baud) -> None:
        # ser = serial.Serial('com7',115200, timeout=0.5)
        self.ser = serial.Serial(port, baud, timeout=0.5)
        print('MCU online: ',self.ser.is_open)

    def DataRead(self):
        char = str(self.ser.readline(), "utf-8").strip('\r\n')
        if char != '':
            data = list(map(eval, char.split('&')))
            return data


if __name__ == '__main__':
    mcu = MCU("COM5", 9600)
    while (1):
        print(mcu.DataRead())
