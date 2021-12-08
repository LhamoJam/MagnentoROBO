// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from artscript_interfaces:srv/ServoGroup.idl
// generated code does not contain a copyright notice

#ifndef ARTSCRIPT_INTERFACES__SRV__DETAIL__SERVO_GROUP__TRAITS_HPP_
#define ARTSCRIPT_INTERFACES__SRV__DETAIL__SERVO_GROUP__TRAITS_HPP_

#include "artscript_interfaces/srv/detail/servo_group__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<artscript_interfaces::srv::ServoGroup_Request>()
{
  return "artscript_interfaces::srv::ServoGroup_Request";
}

template<>
inline const char * name<artscript_interfaces::srv::ServoGroup_Request>()
{
  return "artscript_interfaces/srv/ServoGroup_Request";
}

template<>
struct has_fixed_size<artscript_interfaces::srv::ServoGroup_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<artscript_interfaces::srv::ServoGroup_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<artscript_interfaces::srv::ServoGroup_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<artscript_interfaces::srv::ServoGroup_Response>()
{
  return "artscript_interfaces::srv::ServoGroup_Response";
}

template<>
inline const char * name<artscript_interfaces::srv::ServoGroup_Response>()
{
  return "artscript_interfaces/srv/ServoGroup_Response";
}

template<>
struct has_fixed_size<artscript_interfaces::srv::ServoGroup_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<artscript_interfaces::srv::ServoGroup_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<artscript_interfaces::srv::ServoGroup_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<artscript_interfaces::srv::ServoGroup>()
{
  return "artscript_interfaces::srv::ServoGroup";
}

template<>
inline const char * name<artscript_interfaces::srv::ServoGroup>()
{
  return "artscript_interfaces/srv/ServoGroup";
}

template<>
struct has_fixed_size<artscript_interfaces::srv::ServoGroup>
  : std::integral_constant<
    bool,
    has_fixed_size<artscript_interfaces::srv::ServoGroup_Request>::value &&
    has_fixed_size<artscript_interfaces::srv::ServoGroup_Response>::value
  >
{
};

template<>
struct has_bounded_size<artscript_interfaces::srv::ServoGroup>
  : std::integral_constant<
    bool,
    has_bounded_size<artscript_interfaces::srv::ServoGroup_Request>::value &&
    has_bounded_size<artscript_interfaces::srv::ServoGroup_Response>::value
  >
{
};

template<>
struct is_service<artscript_interfaces::srv::ServoGroup>
  : std::true_type
{
};

template<>
struct is_service_request<artscript_interfaces::srv::ServoGroup_Request>
  : std::true_type
{
};

template<>
struct is_service_response<artscript_interfaces::srv::ServoGroup_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ARTSCRIPT_INTERFACES__SRV__DETAIL__SERVO_GROUP__TRAITS_HPP_
