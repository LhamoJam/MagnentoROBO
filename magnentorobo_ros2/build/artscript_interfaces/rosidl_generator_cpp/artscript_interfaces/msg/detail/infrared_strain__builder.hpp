// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from artscript_interfaces:msg/InfraredStrain.idl
// generated code does not contain a copyright notice

#ifndef ARTSCRIPT_INTERFACES__MSG__DETAIL__INFRARED_STRAIN__BUILDER_HPP_
#define ARTSCRIPT_INTERFACES__MSG__DETAIL__INFRARED_STRAIN__BUILDER_HPP_

#include "artscript_interfaces/msg/detail/infrared_strain__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace artscript_interfaces
{

namespace msg
{

namespace builder
{

class Init_InfraredStrain_strain
{
public:
  explicit Init_InfraredStrain_strain(::artscript_interfaces::msg::InfraredStrain & msg)
  : msg_(msg)
  {}
  ::artscript_interfaces::msg::InfraredStrain strain(::artscript_interfaces::msg::InfraredStrain::_strain_type arg)
  {
    msg_.strain = std::move(arg);
    return std::move(msg_);
  }

private:
  ::artscript_interfaces::msg::InfraredStrain msg_;
};

class Init_InfraredStrain_infrared
{
public:
  Init_InfraredStrain_infrared()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_InfraredStrain_strain infrared(::artscript_interfaces::msg::InfraredStrain::_infrared_type arg)
  {
    msg_.infrared = std::move(arg);
    return Init_InfraredStrain_strain(msg_);
  }

private:
  ::artscript_interfaces::msg::InfraredStrain msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::artscript_interfaces::msg::InfraredStrain>()
{
  return artscript_interfaces::msg::builder::Init_InfraredStrain_infrared();
}

}  // namespace artscript_interfaces

#endif  // ARTSCRIPT_INTERFACES__MSG__DETAIL__INFRARED_STRAIN__BUILDER_HPP_
