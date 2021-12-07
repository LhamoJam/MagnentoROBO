// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from artscript_interfaces:msg/Infraredstrain.idl
// generated code does not contain a copyright notice

#ifndef ARTSCRIPT_INTERFACES__MSG__DETAIL__INFRAREDSTRAIN__BUILDER_HPP_
#define ARTSCRIPT_INTERFACES__MSG__DETAIL__INFRAREDSTRAIN__BUILDER_HPP_

#include "artscript_interfaces/msg/detail/infraredstrain__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace artscript_interfaces
{

namespace msg
{

namespace builder
{

class Init_Infraredstrain_strain
{
public:
  explicit Init_Infraredstrain_strain(::artscript_interfaces::msg::Infraredstrain & msg)
  : msg_(msg)
  {}
  ::artscript_interfaces::msg::Infraredstrain strain(::artscript_interfaces::msg::Infraredstrain::_strain_type arg)
  {
    msg_.strain = std::move(arg);
    return std::move(msg_);
  }

private:
  ::artscript_interfaces::msg::Infraredstrain msg_;
};

class Init_Infraredstrain_infrared
{
public:
  Init_Infraredstrain_infrared()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Infraredstrain_strain infrared(::artscript_interfaces::msg::Infraredstrain::_infrared_type arg)
  {
    msg_.infrared = std::move(arg);
    return Init_Infraredstrain_strain(msg_);
  }

private:
  ::artscript_interfaces::msg::Infraredstrain msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::artscript_interfaces::msg::Infraredstrain>()
{
  return artscript_interfaces::msg::builder::Init_Infraredstrain_infrared();
}

}  // namespace artscript_interfaces

#endif  // ARTSCRIPT_INTERFACES__MSG__DETAIL__INFRAREDSTRAIN__BUILDER_HPP_
