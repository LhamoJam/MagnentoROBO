// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from artscript_interfaces:msg/Imu.idl
// generated code does not contain a copyright notice

#ifndef ARTSCRIPT_INTERFACES__MSG__DETAIL__IMU__TRAITS_HPP_
#define ARTSCRIPT_INTERFACES__MSG__DETAIL__IMU__TRAITS_HPP_

#include "artscript_interfaces/msg/detail/imu__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<artscript_interfaces::msg::Imu>()
{
  return "artscript_interfaces::msg::Imu";
}

template<>
inline const char * name<artscript_interfaces::msg::Imu>()
{
  return "artscript_interfaces/msg/Imu";
}

template<>
struct has_fixed_size<artscript_interfaces::msg::Imu>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<artscript_interfaces::msg::Imu>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<artscript_interfaces::msg::Imu>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ARTSCRIPT_INTERFACES__MSG__DETAIL__IMU__TRAITS_HPP_