// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from artscript_interfaces:srv/ServoSingle.idl
// generated code does not contain a copyright notice

#ifndef ARTSCRIPT_INTERFACES__SRV__DETAIL__SERVO_SINGLE__BUILDER_HPP_
#define ARTSCRIPT_INTERFACES__SRV__DETAIL__SERVO_SINGLE__BUILDER_HPP_

#include "artscript_interfaces/srv/detail/servo_single__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace artscript_interfaces
{

namespace srv
{

namespace builder
{

class Init_ServoSingle_Request_servo_speed
{
public:
  explicit Init_ServoSingle_Request_servo_speed(::artscript_interfaces::srv::ServoSingle_Request & msg)
  : msg_(msg)
  {}
  ::artscript_interfaces::srv::ServoSingle_Request servo_speed(::artscript_interfaces::srv::ServoSingle_Request::_servo_speed_type arg)
  {
    msg_.servo_speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::artscript_interfaces::srv::ServoSingle_Request msg_;
};

class Init_ServoSingle_Request_servo_angle
{
public:
  explicit Init_ServoSingle_Request_servo_angle(::artscript_interfaces::srv::ServoSingle_Request & msg)
  : msg_(msg)
  {}
  Init_ServoSingle_Request_servo_speed servo_angle(::artscript_interfaces::srv::ServoSingle_Request::_servo_angle_type arg)
  {
    msg_.servo_angle = std::move(arg);
    return Init_ServoSingle_Request_servo_speed(msg_);
  }

private:
  ::artscript_interfaces::srv::ServoSingle_Request msg_;
};

class Init_ServoSingle_Request_servo_id
{
public:
  Init_ServoSingle_Request_servo_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ServoSingle_Request_servo_angle servo_id(::artscript_interfaces::srv::ServoSingle_Request::_servo_id_type arg)
  {
    msg_.servo_id = std::move(arg);
    return Init_ServoSingle_Request_servo_angle(msg_);
  }

private:
  ::artscript_interfaces::srv::ServoSingle_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::artscript_interfaces::srv::ServoSingle_Request>()
{
  return artscript_interfaces::srv::builder::Init_ServoSingle_Request_servo_id();
}

}  // namespace artscript_interfaces


namespace artscript_interfaces
{

namespace srv
{

namespace builder
{

class Init_ServoSingle_Response_move_status
{
public:
  Init_ServoSingle_Response_move_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::artscript_interfaces::srv::ServoSingle_Response move_status(::artscript_interfaces::srv::ServoSingle_Response::_move_status_type arg)
  {
    msg_.move_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::artscript_interfaces::srv::ServoSingle_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::artscript_interfaces::srv::ServoSingle_Response>()
{
  return artscript_interfaces::srv::builder::Init_ServoSingle_Response_move_status();
}

}  // namespace artscript_interfaces

#endif  // ARTSCRIPT_INTERFACES__SRV__DETAIL__SERVO_SINGLE__BUILDER_HPP_
