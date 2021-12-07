// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from artscript_interfaces:msg/InfraredStrain.idl
// generated code does not contain a copyright notice

#ifndef ARTSCRIPT_INTERFACES__MSG__DETAIL__INFRARED_STRAIN__TRAITS_HPP_
#define ARTSCRIPT_INTERFACES__MSG__DETAIL__INFRARED_STRAIN__TRAITS_HPP_

#include "artscript_interfaces/msg/detail/infrared_strain__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<artscript_interfaces::msg::InfraredStrain>()
{
  return "artscript_interfaces::msg::InfraredStrain";
}

template<>
inline const char * name<artscript_interfaces::msg::InfraredStrain>()
{
  return "artscript_interfaces/msg/InfraredStrain";
}

template<>
struct has_fixed_size<artscript_interfaces::msg::InfraredStrain>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<artscript_interfaces::msg::InfraredStrain>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<artscript_interfaces::msg::InfraredStrain>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ARTSCRIPT_INTERFACES__MSG__DETAIL__INFRARED_STRAIN__TRAITS_HPP_
