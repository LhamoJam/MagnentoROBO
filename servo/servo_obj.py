#!/usr/bin/python3
import time
import serial

print("UART Demonstration Program")
print("NVIDIA Jetson Nano Developer Kit")

G0000 = "{G0000#000P1500T1000!#001P1500T1000!#002P1500T1000!#003P1500T1000!#004P1500T1000!#005P1500T1000!#006P1500T1000!#007P1500T1000!#008P1500T1000!#009P1500T1000!#010P1500T1000!#011P1500T1000!#012P1500T1000!#013P1500T1000!#014P1500T1000!#015P1500T1000!#016P1500T1000!#017P1500T1000!#018P1500T1000!#019P1500T1000!#020P1500T1000!#021P1500T1000!#022P1500T1000!#023P1500T1000!#024P1500T1000!#025P1500T1000!#026P1500T1000!#027P1500T1000!#028P1500T1000!#029P1500T1000!#030P1500T1000!#031P1500T1000!}"
G0001 = "{G0001#000P1600T3000!#001P1600T3000!#002P1500T3000!#003P1500T1000!#004P1600T3000!#005P1600T3000!#006P1500T3000!#007P1500T1000!#008P1600T3000!#009P1600T3000!#010P1500T3000!#011P1500T1000!#012P1500T1000!#013P1500T3000!#014P1400T3000!#015P1400T3000!#016P1500T1000!#017P1500T3000!#018P1400T3000!#019P1400T3000!#020P1500T1000!#021P1500T3000!#022P1400T3000!#023P1400T3000!#024P1500T1000!#025P1500T1000!#026P1500T1000!#027P1500T1000!#028P1500T1000!#029P1500T1000!#030P1500T1000!#031P1500T1000!}"
G0002 = "{G0002#000P2150T3000!#001P2500T3000!#002P1500T3000!#003P1500T1000!#004P2150T3000!#005P2500T3000!#006P1500T3000!#007P1500T1000!#008P2150T3000!#009P2500T3000!#010P1500T3000!#011P1500T1000!#012P1500T1000!#013P1500T3000!#014P0500T3000!#015P0850T3000!#016P1500T1000!#017P1500T3000!#018P0500T3000!#019P0850T3000!#020P1500T1000!#021P1500T3000!#022P0500T3000!#023P0850T3000!#024P1500T1000!#025P1500T1000!#026P1500T1000!#027P1500T1000!#028P1500T1000!#029P1500T1000!#030P1500T1000!#031P1500T1000!}"
G0003 = "{G0003#000P1500T0500!#001P1740T0500!#002P1300T0500!#003P1500T1000!#004P1400T0500!#005P1400T0500!#006P1500T0500!#007P1500T1000!#008P1740T0500!#009P1900T0500!#010P1020T0500!#011P1500T1000!#012P1500T1000!#013P1500T0500!#014P1600T0500!#015P1600T0500!#016P1500T1000!#017P1980T0500!#018P1220T0500!#019P1420T0500!#020P1500T1000!#021P1500T0500!#022P1600T0500!#023P1600T0500!#024P1500T1000!#025P1500T1000!#026P1500T1000!#027P1500T1000!#028P1500T1000!#029P1500T1000!#030P1500T1000!#031P1500T1000!}"
G0004 = "{G0004#000P1540T0500!#001P1580T0500!#002P1300T0500!#003P1500T1000!#004P1780T0500!#005P1780T0500!#006P1740T0500!#007P1500T1000!#008P1620T0500!#009P1460T0500!#010P1020T0500!#011P1500T1000!#012P1500T1000!#013P1260T0500!#014P1260T0500!#015P1220T0500!#016P1500T1000!#017P1980T0500!#018P1420T0500!#019P1460T0500!#020P1500T1000!#021P1220T0500!#022P1180T0500!#023P1300T0500!#024P1500T1000!#025P1500T1000!#026P1500T1000!#027P1500T1000!#028P1500T1000!#029P1500T1000!#030P1500T1000!#031P1500T1000!}"
G0005 = "{G0005#000P1400T0500!#001P1400T0500!#002P1780T0500!#003P1500T1000!#004P1400T0500!#005P1600T0500!#006P1180T0500!#007P1500T1000!#008P1400T0500!#009P1400T0500!#010P1660T0500!#011P1500T1000!#012P1500T1000!#013P1980T0500!#014P1400T0500!#015P1600T0500!#016P1500T1000!#017P1260T0500!#018P1600T0500!#019P1600T0500!#020P1500T1000!#021P1700T0500!#022P1400T0500!#023P1600T0500!#024P1500T1000!#025P1500T1000!#026P1500T1000!#027P1500T1000!#028P1500T1000!#029P1500T1000!#030P1500T1000!#031P1500T1000!}"
G0006 = "{G0006#000P1400T0500!#001P1600T0500!#002P1500T0500!#003P1500T1000!#004P1400T0500!#005P1400T0500!#006P1180T0500!#007P1500T1000!#008P1600T0500!#009P1600T0500!#010P1500T0500!#011P1500T1000!#012P1500T1000!#013P1980T0500!#014P1600T0500!#015P1600T0500!#016P1500T1000!#017P1500T0500!#018P1400T0500!#019P1400T0500!#020P1500T1000!#021P1700T0500!#022P1420T0500!#023P1600T0500!#024P1500T1000!#025P1500T1000!#026P1500T1000!#027P1500T1000!#028P1500T1000!#029P1500T1000!#030P1500T1000!#031P1500T1000!}"
G0007 = "{G0007#000P1400T0500!#001P1600T0500!#002P1500T0500!#003P1500T1000!#004P1400T0500!#005P1700T0500!#006P1000T0500!#007P1500T1000!#008P1600T0500!#009P1600T0500!#010P1500T0500!#011P1500T1000!#012P1500T1000!#013P1000T0500!#014P1100T0500!#015P1600T0500!#016P1500T1000!#017P1500T0500!#018P1400T0500!#019P1400T0500!#020P1500T1000!#021P1000T0500!#022P1100T0500!#023P1600T0500!#024P1500T1000!#025P1500T1000!#026P1500T1000!#027P1500T1000!#028P1500T1000!#029P1500T1000!#030P1500T1000!#031P1500T1000!}"
G0008 = "{G0008#000P1400T0500!#001P1700T0500!#002P1500T0500!#003P1500T1000!#004P1400T0500!#005P1400T0500!#006P1000T0500!#007P1500T1000!#008P1600T0500!#009P1700T0500!#010P1500T0500!#011P1500T1000!#012P1500T1000!#013P1000T0500!#014P1400T0500!#015P1600T0500!#016P1500T1000!#017P1500T0500!#018P1100T0500!#019P1400T0500!#020P1500T1000!#021P1000T0500!#022P1400T0500!#023P1600T0500!#024P1500T1000!#025P1500T1000!#026P1500T1000!#027P1500T1000!#028P1500T1000!#029P1500T1000!#030P1500T1000!#031P1500T1000!}"
G0009 = "{G0009#000P1400T0500!#001P1700T0500!#002P1000T0500!#003P1500T1000!#004P1400T0500!#005P1400T0500!#006P1500T0500!#007P1500T1000!#008P1600T0500!#009P1700T0500!#010P1000T0500!#011P1500T1000!#012P1500T1000!#013P1500T0500!#014P1400T0500!#015P1600T0500!#016P1500T1000!#017P1000T0500!#018P1100T0500!#019P1400T0500!#020P1500T1000!#021P1500T0500!#022P1400T0500!#023P1600T0500!#024P1500T1000!#025P1500T1000!#026P1500T1000!#027P1500T1000!#028P1500T1000!#029P1500T1000!#030P1500T1000!#031P1500T1000!}"
G0010 = "{G0010#000P1400T0500!#001P1400T0500!#002P1000T0500!#003P1500T1000!#004P1400T0500!#005P1600T0500!#006P1500T0500!#007P1500T1000!#008P1600T0500!#009P1400T0500!#010P1000T0500!#011P1500T1000!#012P1500T1000!#013P1500T0500!#014P1400T0500!#015P1600T0500!#016P1500T1000!#017P1000T0500!#018P1600T0500!#019P1400T0500!#020P1500T1000!#021P1500T0500!#022P1400T0500!#023P1600T0500!#024P1500T1000!#025P1500T1000!#026P1500T1000!#027P1500T1000!#028P1500T1000!#029P1500T1000!#030P1500T1000!#031P1500T1000!}"
G0011 = "{G0011#000P1500T0500!#001P1700T0500!#002P1900T0500!#003P1500T1000!#004P1500T0500!#005P1500T0500!#006P1500T0500!#007P1500T1000!#008P1500T0500!#009P1700T0500!#010P1900T0500!#011P1500T1000!#012P1500T1000!#013P1500T0500!#014P1500T0500!#015P1500T0500!#016P1500T1000!#017P1900T0500!#018P1300T0500!#019P1500T0500!#020P1500T1000!#021P1500T0500!#022P1500T0500!#023P1500T0500!#024P1500T1000!#025P1500T1000!#026P1500T1000!#027P1500T1000!#028P1500T1000!#029P1500T1000!#030P1500T1000!#031P1500T1000!}"
G0012 = "{G0012#000P1500T0500!#001P1400T0500!#002P1900T0500!#003P1500T1000!#004P1500T0500!#005P1700T0500!#006P1500T0500!#007P1500T1000!#008P1500T0500!#009P1400T0500!#010P1900T0500!#011P1500T1000!#012P1500T1000!#013P1500T0500!#014P1400T0500!#015P1500T0500!#016P1500T1000!#017P1900T0500!#018P1700T0500!#019P1500T0500!#020P1500T1000!#021P1500T0500!#022P1400T0500!#023P1500T0500!#024P1500T1000!#025P1500T1000!#026P1500T1000!#027P1500T1000!#028P1500T1000!#029P1500T1000!#030P1500T1000!#031P1500T1000!}"
G0013 = "{G0013#000P1500T0500!#001P1400T0500!#002P1500T0500!#003P1500T1000!#004P1500T0500!#005P1700T0500!#006P1900T0500!#007P1500T1000!#008P1500T0500!#009P1400T0500!#010P1500T0500!#011P1500T1000!#012P1500T1000!#013P1900T0500!#014P1400T0500!#015P1500T0500!#016P1500T1000!#017P1500T0500!#018P1700T0500!#019P1500T0500!#020P1500T1000!#021P1900T0500!#022P1400T0500!#023P1500T0500!#024P1500T1000!#025P1500T1000!#026P1500T1000!#027P1500T1000!#028P1500T1000!#029P1500T1000!#030P1500T1000!#031P1500T1000!}"
G0014 = "{G0014#000P1500T0500!#001P1700T0500!#002P1500T0500!#003P1500T1000!#004P1500T0500!#005P1400T0500!#006P1900T0500!#007P1500T1000!#008P1500T0500!#009P1700T0500!#010P1500T0500!#011P1500T1000!#012P1500T1000!#013P1900T0500!#014P1700T0500!#015P1500T0500!#016P1500T1000!#017P1500T0500!#018P1400T0500!#019P1500T0500!#020P1500T1000!#021P1900T0500!#022P1700T0500!#023P1500T0500!#024P1500T1000!#025P1500T1000!#026P1500T1000!#027P1500T1000!#028P1500T1000!#029P1500T1000!#030P1500T1000!#031P1500T1000!}"

SIGLE_SERVO_TEST = ["{#000P1500T0500!#001P1000T0500!}"]
ROBO_ON = [G0001]
ROBO_OFF = [G0002]
FORWARD = [G0003, G0004, G0005, G0006]
LEFT = [G0007, G0008, G0009, G0010]
RIGHT = [G0011, G0012, G0013, G0014]


def Command_func(command_list):
    for i in command_list:
        serial_port.write(i.encode())
        time.sleep(0.6)


serial_port = serial.Serial(
    port="/dev/ttyTHS2",
    baudrate=115200,
    bytesize=serial.EIGHTBITS,
    parity=serial.PARITY_NONE,
    stopbits=serial.STOPBITS_ONE,
)
# Wait a second to let the port initialize
time.sleep(1)

try:
    # Send a simple header
    serial_port.write("UART Demonstration Program\r\n".encode())
    serial_port.write("NVIDIA Jetson Nano Developer Kit\r\n".encode())
    #    Command_func(FORWARD)
    Command_func(SIGLE_SERVO_TEST)
except KeyboardInterrupt:
    print("Exiting Program")
except Exception as exception_error:
    print("Error occurred. Exiting Program")
    print("Error: " + str(exception_error))
finally:
    serial_port.close()
    pass