# MagnentoROBO
ROS2系统电磁铁六足机器人
BY: ARTScript 微信: artscript
**转载和参考请注明出处ARTScript谢谢**
# 安装
## ROS2 install
+ Client: JetsonTX2 ros-dashing
+ Server: ros2任何版本都行,按照你的系统来

## OPENCV install

## *[重要] 搭建虚拟局域网VPN *
远程使用ROS2必须搭建!!!
+ 搭建自己喜欢的虚拟专用网络

### 配置ROS remote环境
```shell
#export CYCLONEDDS_URI=file:///home/$USER/cyclonedds.xml
#export RMW_IMPLEMENTATION=rmw_cyclonedds_cpp
```

### cyclonedds
修改cuclonedds.xml
```xml
<NetworkInterfaceAddress>你的远程网络</NetworkInterfaceAddress>
```
# 配置ROS2包
## artscript_interfaces
定义了机器人的消息格式\服务
+ `Imu.msg`定义了Imu的数据话题格式
+ `Infraredstrain.msg`定义了红外距离和薄膜里的话题格式
+ `Magnento.srv`定义了电磁铁的服务类型
+ `ServoGroup.srv`定义了舵机动作组的服务类型
+ `ServoSingle.srv`定义了单个舵机的服务类型
## servo_pwm_pkg
机器人全身舵机的控制,有动作组的模式和但舵机的模式

## camera_usb_pkg
使用opencv实现的camera话题

## imu_usb_pkg
采集和处理imu数据的话题

## mcu_usb_pkg
采集红外距离传感器和薄膜压力传感器的话题


# 运行
1. 将`magnentorobo_ros2`源码下载到JetsonTX2,运行
   ```shell
   rosdep install -i --from-path src --rosdistro dashing -y
   ```
2. 进入`magnentorobo_ros2` 运行:
   1. `colcon build`
   2. `source install/setup.bash`
3. 运行节点:
   运行`artscript_main`下的launch文件