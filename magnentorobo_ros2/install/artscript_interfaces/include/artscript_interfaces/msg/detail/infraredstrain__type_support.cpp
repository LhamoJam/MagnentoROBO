// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from artscript_interfaces:msg/Infraredstrain.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "artscript_interfaces/msg/detail/infraredstrain__struct.hpp"
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

void Infraredstrain_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) artscript_interfaces::msg::Infraredstrain(_init);
}

void Infraredstrain_fini_function(void * message_memory)
{
  auto typed_message = static_cast<artscript_interfaces::msg::Infraredstrain *>(message_memory);
  typed_message->~Infraredstrain();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Infraredstrain_message_member_array[2] = {
  {
    "infrared",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(artscript_interfaces::msg::Infraredstrain, infrared),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "strain",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(artscript_interfaces::msg::Infraredstrain, strain),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Infraredstrain_message_members = {
  "artscript_interfaces::msg",  // message namespace
  "Infraredstrain",  // message name
  2,  // number of fields
  sizeof(artscript_interfaces::msg::Infraredstrain),
  Infraredstrain_message_member_array,  // message members
  Infraredstrain_init_function,  // function to initialize message memory (memory has to be allocated)
  Infraredstrain_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Infraredstrain_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Infraredstrain_message_members,
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
get_message_type_support_handle<artscript_interfaces::msg::Infraredstrain>()
{
  return &::artscript_interfaces::msg::rosidl_typesupport_introspection_cpp::Infraredstrain_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, artscript_interfaces, msg, Infraredstrain)() {
  return &::artscript_interfaces::msg::rosidl_typesupport_introspection_cpp::Infraredstrain_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
