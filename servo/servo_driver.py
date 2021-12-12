class servo_drive():
    def __init__(self) -> None:
        # self.demo = '#000P1500T0500!'
        self.servo_id = 0
        self.servo_angle = 1500
        self.servo_speed = 1500

    def make_protocol(self, servo_id, servo_angle, servo_speed):
        protocol = '#{:03d}P{:04d}T{:04d}!'.format(
            servo_id, servo_angle, servo_speed)
        return protocol


if __name__ == "__main__":
    print("{:04d}".format(1))
