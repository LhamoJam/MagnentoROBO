# Infrared
+ https://www.geeetech.com/wiki/index.php/SHARP_IR_Ranger_Sensor_GP2D12_for_Arduino
+ [Google](https://www.google.com/search?q=gp2d12+arduino+nano&sxsrf=AOaemvIusIEDX-7QVd4CKb0_k-b8QxGcTg%3A1638886723161&ei=Q22vYYSyCdehseMP0M-p6As&ved=0ahUKEwjE39fn8NH0AhXXUGwGHdBnCr0Q4dUDCA8&uact=5&oq=gp2d12+arduino+nano&gs_lcp=Cgdnd3Mtd2l6EAM6CQgAELADEAcQHjoICAAQsAMQywE6BwgAELADEB46CQgAELADEAgQHjoECAAQHjoGCAAQBRAeOgUIIRCgAToHCCEQChCgAUoECEEYAVDdBVi8DWDTEWgBcAB4AIAB_AGIAZgJkgEDMi01mAEAoAEByAEFwAEB&sclient=gws-wiz)

GP2D12项目
在这个小项目中，我们将使用 Sharp GP2D12 传感器和 Arduino Uno 来测量传感器和物体之间的距离。例如，您可以使用它来跟随墙壁。通过使用伺服器，您可以通过将传感器指向左侧和右侧（以及两者之间的任何内容）来提供宽广的“视野”。这可用于让机器人“看到”它的周围环境并计算要遵循的路径。

<image src="https://swanrobotics.com/wp-content/uploads/2015/03/GP2D12-300x207.jpg">

GP2D12


Sharp GP2D12 是机器人制造商常用的传感器。传感器发出一束光并使用三角测量法来测量距离。GP2D12 的检测范围在 10 厘米（4 英寸）和 80 厘米（32 英寸）之间。光束在 80 cm 距离处为 6 cm 宽，因此在使用此传感器时请记住这一点。

红外线反射
<image src="https://swanrobotics.com/wp-content/uploads/2015/03/IRreflection.png">
在上图中，您可以看到，如果有任何东西挡住了光束，传感器将接收到光的反射。GP2D12 与 Arduino 的使用很简单。我们必须通电并将输出连接到 Arduino 的模拟端口。

GP2D12项目
<image src="https://swanrobotics.com/wp-content/uploads/2015/03/GP2D12Project.jpg">
<image src="https://hacksterio.s3.amazonaws.com/uploads/image_file/file/97000/sharp_ir_arduino_0.jpg">
要计算从模拟端口到以 cm 为单位的距离的值，需要一个公式。我在 Acroname 网站上找到了详尽的解释：http ://www.acroname.com/robotics/info/articles/irlinear/irlinear.html