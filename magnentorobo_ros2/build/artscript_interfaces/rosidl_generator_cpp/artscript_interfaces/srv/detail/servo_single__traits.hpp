// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from artscript_interfaces:srv/ServoSingle.idl
// generated code does not contain a copyright notice

#ifndef ARTSCRIPT_INTERFACES__SRV__DETAIL__SERVO_SINGLE__TRAITS_HPP_
#define ARTSCRIPT_INTERFACES__SRV__DETAIL__SERVO_SINGLE__TRAITS_HPP_

#include "artscript_interfaces/srv/detail/servo_single__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<artscript_interfaces::srv::ServoSingle_Request>()
{
  return "artscript_interfaces::srv::ServoSingle_Request";
}

template<>
inline const char * name<artscript_interfaces::srv::ServoSingle_Request>()
{
  return "artscript_interfaces/srv/ServoSingle_Request";
}

template<>
struct has_fixed_size<artscript_interfaces::srv::ServoSingle_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<artscript_interfaces::srv::ServoSingle_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<artscript_interfaces::srv::ServoSingle_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<artscript_interfaces::srv::ServoSingle_Response>()
{
  return "artscript_interfaces::srv::ServoSingle_Response";
}

template<>
inline const char * name<artscript_interfaces::srv::ServoSingle_Response>()
{
  return "artscript_interfaces/srv/ServoSingle_Response";
}

template<>
struct has_fixed_size<artscript_interfaces::srv::ServoSingle_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<artscript_interfaces::srv::ServoSingle_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<artscript_interfaces::srv::ServoSingle_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<artscript_interfaces::srv::ServoSingle>()
{
  return "artscript_interfaces::srv::ServoSingle";
}

template<>
inline const char * name<artscript_interfaces::srv::ServoSingle>()
{
  return "artscript_interfaces/srv/ServoSingle";
}

template<>
struct has_fixed_size<artscript_interfaces::srv::ServoSingle>
  : std::integral_constant<
    bool,
    has_fixed_size<artscript_interfaces::srv::ServoSingle_Request>::value &&
    has_fixed_size<artscript_interfaces::srv::ServoSingle_Response>::value
  >
{
};

template<>
struct has_bounded_size<artscript_interfaces::srv::ServoSingle>
  : std::integral_constant<
    bool,
    has_bounded_size<artscript_interfaces::srv::ServoSingle_Request>::value &&
    has_bounded_size<artscript_interfaces::srv::ServoSingle_Response>::value
  >
{
};

template<>
struct is_service<artscript_interfaces::srv::ServoSingle>
  : std::true_type
{
};

template<>
struct is_service_request<artscript_interfaces::srv::ServoSingle_Request>
  : std::true_type
{
};

template<>
struct is_service_response<artscript_interfaces::srv::ServoSingle_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ARTSCRIPT_INTERFACES__SRV__DETAIL__SERVO_SINGLE__TRAITS_HPP_
