// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from artscript_interfaces:msg/Infraredstrain.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "artscript_interfaces/msg/detail/infraredstrain__rosidl_typesupport_introspection_c.h"
#include "artscript_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "artscript_interfaces/msg/detail/infraredstrain__functions.h"
#include "artscript_interfaces/msg/detail/infraredstrain__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Infraredstrain__rosidl_typesupport_introspection_c__Infraredstrain_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  artscript_interfaces__msg__Infraredstrain__init(message_memory);
}

void Infraredstrain__rosidl_typesupport_introspection_c__Infraredstrain_fini_function(void * message_memory)
{
  artscript_interfaces__msg__Infraredstrain__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Infraredstrain__rosidl_typesupport_introspection_c__Infraredstrain_message_member_array[2] = {
  {
    "infrared",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(artscript_interfaces__msg__Infraredstrain, infrared),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "strain",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(artscript_interfaces__msg__Infraredstrain, strain),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Infraredstrain__rosidl_typesupport_introspection_c__Infraredstrain_message_members = {
  "artscript_interfaces__msg",  // message namespace
  "Infraredstrain",  // message name
  2,  // number of fields
  sizeof(artscript_interfaces__msg__Infraredstrain),
  Infraredstrain__rosidl_typesupport_introspection_c__Infraredstrain_message_member_array,  // message members
  Infraredstrain__rosidl_typesupport_introspection_c__Infraredstrain_init_function,  // function to initialize message memory (memory has to be allocated)
  Infraredstrain__rosidl_typesupport_introspection_c__Infraredstrain_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Infraredstrain__rosidl_typesupport_introspection_c__Infraredstrain_message_type_support_handle = {
  0,
  &Infraredstrain__rosidl_typesupport_introspection_c__Infraredstrain_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_artscript_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, artscript_interfaces, msg, Infraredstrain)() {
  if (!Infraredstrain__rosidl_typesupport_introspection_c__Infraredstrain_message_type_support_handle.typesupport_identifier) {
    Infraredstrain__rosidl_typesupport_introspection_c__Infraredstrain_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Infraredstrain__rosidl_typesupport_introspection_c__Infraredstrain_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
