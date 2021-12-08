// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from artscript_interfaces:srv/ServoGroup.idl
// generated code does not contain a copyright notice

#ifndef ARTSCRIPT_INTERFACES__SRV__DETAIL__SERVO_GROUP__STRUCT_H_
#define ARTSCRIPT_INTERFACES__SRV__DETAIL__SERVO_GROUP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'command_list'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/ServoGroup in the package artscript_interfaces.
typedef struct artscript_interfaces__srv__ServoGroup_Request
{
  rosidl_runtime_c__String__Sequence command_list;
  int32_t servo_speed;
} artscript_interfaces__srv__ServoGroup_Request;

// Struct for a sequence of artscript_interfaces__srv__ServoGroup_Request.
typedef struct artscript_interfaces__srv__ServoGroup_Request__Sequence
{
  artscript_interfaces__srv__ServoGroup_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} artscript_interfaces__srv__ServoGroup_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/ServoGroup in the package artscript_interfaces.
typedef struct artscript_interfaces__srv__ServoGroup_Response
{
  bool move_status;
} artscript_interfaces__srv__ServoGroup_Response;

// Struct for a sequence of artscript_interfaces__srv__ServoGroup_Response.
typedef struct artscript_interfaces__srv__ServoGroup_Response__Sequence
{
  artscript_interfaces__srv__ServoGroup_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} artscript_interfaces__srv__ServoGroup_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARTSCRIPT_INTERFACES__SRV__DETAIL__SERVO_GROUP__STRUCT_H_
