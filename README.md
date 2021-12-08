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


### cyclonedds


# 配置ROS2包
## artscript_interfaces

## servo_pwm_pkg

## camera_usb_pkg

## imu_usb_pkg

## strain_gpio_pkg

## infrared_gpio_pkg

```shell
rosdep install -i --from-path src --rosdistro foxy -y
```
1. 将`magnentorobo_ros2`源码下载到JetsonTX2

# 运行
2. 进入`magnentorobo_ros2` 运行:
   1. `colcon build`
   2. `source install/setup.bash`
3. 运行节点:
```shell

```
4. 查看运行状况