// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from artscript_interfaces:msg/Imu.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "artscript_interfaces/msg/detail/imu__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace artscript_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Imu_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) artscript_interfaces::msg::Imu(_init);
}

void Imu_fini_function(void * message_memory)
{
  auto typed_message = static_cast<artscript_interfaces::msg::Imu *>(message_memory);
  typed_message->~Imu();
}

size_t size_function__Imu__acceleration(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Imu__acceleration(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Imu__acceleration(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 3> *>(untyped_member);
  return &member[index];
}

size_t size_function__Imu__angular(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Imu__angular(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Imu__angular(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 3> *>(untyped_member);
  return &member[index];
}

size_t size_function__Imu__angle(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Imu__angle(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Imu__angle(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 3> *>(untyped_member);
  return &member[index];
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Imu_message_member_array[3] = {
  {
    "acceleration",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(artscript_interfaces::msg::Imu, acceleration),  // bytes offset in struct
    nullptr,  // default value
    size_function__Imu__acceleration,  // size() function pointer
    get_const_function__Imu__acceleration,  // get_const(index) function pointer
    get_function__Imu__acceleration,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "angular",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(artscript_interfaces::msg::Imu, angular),  // bytes offset in struct
    nullptr,  // default value
    size_function__Imu__angular,  // size() function pointer
    get_const_function__Imu__angular,  // get_const(index) function pointer
    get_function__Imu__angular,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "angle",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(artscript_interfaces::msg::Imu, angle),  // bytes offset in struct
    nullptr,  // default value
    size_function__Imu__angle,  // size() function pointer
    get_const_function__Imu__angle,  // get_const(index) function pointer
    get_function__Imu__angle,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Imu_message_members = {
  "artscript_interfaces::msg",  // message namespace
  "Imu",  // message name
  3,  // number of fields
  sizeof(artscript_interfaces::msg::Imu),
  Imu_message_member_array,  // message members
  Imu_init_function,  // function to initialize message memory (memory has to be allocated)
  Imu_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Imu_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Imu_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace artscript_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<artscript_interfaces::msg::Imu>()
{
  return &::artscript_interfaces::msg::rosidl_typesupport_introspection_cpp::Imu_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, artscript_interfaces, msg, Imu)() {
  return &::artscript_interfaces::msg::rosidl_typesupport_introspection_cpp::Imu_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
