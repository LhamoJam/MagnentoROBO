// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from artscript_interfaces:msg/Imu.idl
// generated code does not contain a copyright notice

#ifndef ARTSCRIPT_INTERFACES__MSG__DETAIL__IMU__BUILDER_HPP_
#define ARTSCRIPT_INTERFACES__MSG__DETAIL__IMU__BUILDER_HPP_

#include "artscript_interfaces/msg/detail/imu__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace artscript_interfaces
{

namespace msg
{

namespace builder
{

class Init_Imu_angle
{
public:
  explicit Init_Imu_angle(::artscript_interfaces::msg::Imu & msg)
  : msg_(msg)
  {}
  ::artscript_interfaces::msg::Imu angle(::artscript_interfaces::msg::Imu::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::artscript_interfaces::msg::Imu msg_;
};

class Init_Imu_angular
{
public:
  explicit Init_Imu_angular(::artscript_interfaces::msg::Imu & msg)
  : msg_(msg)
  {}
  Init_Imu_angle angular(::artscript_interfaces::msg::Imu::_angular_type arg)
  {
    msg_.angular = std::move(arg);
    return Init_Imu_angle(msg_);
  }

private:
  ::artscript_interfaces::msg::Imu msg_;
};

class Init_Imu_acceleration
{
public:
  Init_Imu_acceleration()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Imu_angular acceleration(::artscript_interfaces::msg::Imu::_acceleration_type arg)
  {
    msg_.acceleration = std::move(arg);
    return Init_Imu_angular(msg_);
  }

private:
  ::artscript_interfaces::msg::Imu msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::artscript_interfaces::msg::Imu>()
{
  return artscript_interfaces::msg::builder::Init_Imu_acceleration();
}

}  // namespace artscript_interfaces

#endif  // ARTSCRIPT_INTERFACES__MSG__DETAIL__IMU__BUILDER_HPP_
