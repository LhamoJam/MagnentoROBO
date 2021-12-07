// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from artscript_interfaces:msg/InfraredStrain.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "artscript_interfaces/msg/detail/infrared_strain__rosidl_typesupport_introspection_c.h"
#include "artscript_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "artscript_interfaces/msg/detail/infrared_strain__functions.h"
#include "artscript_interfaces/msg/detail/infrared_strain__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void InfraredStrain__rosidl_typesupport_introspection_c__InfraredStrain_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  artscript_interfaces__msg__InfraredStrain__init(message_memory);
}

void InfraredStrain__rosidl_typesupport_introspection_c__InfraredStrain_fini_function(void * message_memory)
{
  artscript_interfaces__msg__InfraredStrain__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember InfraredStrain__rosidl_typesupport_introspection_c__InfraredStrain_message_member_array[2] = {
  {
    "infrared",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(artscript_interfaces__msg__InfraredStrain, infrared),  // bytes offset in struct
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
    offsetof(artscript_interfaces__msg__InfraredStrain, strain),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers InfraredStrain__rosidl_typesupport_introspection_c__InfraredStrain_message_members = {
  "artscript_interfaces__msg",  // message namespace
  "InfraredStrain",  // message name
  2,  // number of fields
  sizeof(artscript_interfaces__msg__InfraredStrain),
  InfraredStrain__rosidl_typesupport_introspection_c__InfraredStrain_message_member_array,  // message members
  InfraredStrain__rosidl_typesupport_introspection_c__InfraredStrain_init_function,  // function to initialize message memory (memory has to be allocated)
  InfraredStrain__rosidl_typesupport_introspection_c__InfraredStrain_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t InfraredStrain__rosidl_typesupport_introspection_c__InfraredStrain_message_type_support_handle = {
  0,
  &InfraredStrain__rosidl_typesupport_introspection_c__InfraredStrain_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_artscript_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, artscript_interfaces, msg, InfraredStrain)() {
  if (!InfraredStrain__rosidl_typesupport_introspection_c__InfraredStrain_message_type_support_handle.typesupport_identifier) {
    InfraredStrain__rosidl_typesupport_introspection_c__InfraredStrain_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &InfraredStrain__rosidl_typesupport_introspection_c__InfraredStrain_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
