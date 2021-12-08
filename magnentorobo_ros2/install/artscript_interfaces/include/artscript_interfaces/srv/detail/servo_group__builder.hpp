// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from artscript_interfaces:srv/ServoGroup.idl
// generated code does not contain a copyright notice

#ifndef ARTSCRIPT_INTERFACES__SRV__DETAIL__SERVO_GROUP__BUILDER_HPP_
#define ARTSCRIPT_INTERFACES__SRV__DETAIL__SERVO_GROUP__BUILDER_HPP_

#include "artscript_interfaces/srv/detail/servo_group__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace artscript_interfaces
{

namespace srv
{

namespace builder
{

class Init_ServoGroup_Request_servo_speed
{
public:
  explicit Init_ServoGroup_Request_servo_speed(::artscript_interfaces::srv::ServoGroup_Request & msg)
  : msg_(msg)
  {}
  ::artscript_interfaces::srv::ServoGroup_Request servo_speed(::artscript_interfaces::srv::ServoGroup_Request::_servo_speed_type arg)
  {
    msg_.servo_speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::artscript_interfaces::srv::ServoGroup_Request msg_;
};

class Init_ServoGroup_Request_command_list
{
public:
  Init_ServoGroup_Request_command_list()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ServoGroup_Request_servo_speed command_list(::artscript_interfaces::srv::ServoGroup_Request::_command_list_type arg)
  {
    msg_.command_list = std::move(arg);
    return Init_ServoGroup_Request_servo_speed(msg_);
  }

private:
  ::artscript_interfaces::srv::ServoGroup_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::artscript_interfaces::srv::ServoGroup_Request>()
{
  return artscript_interfaces::srv::builder::Init_ServoGroup_Request_command_list();
}

}  // namespace artscript_interfaces


namespace artscript_interfaces
{

namespace srv
{

namespace builder
{

class Init_ServoGroup_Response_move_status
{
public:
  Init_ServoGroup_Response_move_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::artscript_interfaces::srv::ServoGroup_Response move_status(::artscript_interfaces::srv::ServoGroup_Response::_move_status_type arg)
  {
    msg_.move_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::artscript_interfaces::srv::ServoGroup_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::artscript_interfaces::srv::ServoGroup_Response>()
{
  return artscript_interfaces::srv::builder::Init_ServoGroup_Response_move_status();
}

}  // namespace artscript_interfaces

#endif  // ARTSCRIPT_INTERFACES__SRV__DETAIL__SERVO_GROUP__BUILDER_HPP_
