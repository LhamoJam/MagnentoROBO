// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from artscript_interfaces:msg/InfraredStrain.idl
// generated code does not contain a copyright notice

#ifndef ARTSCRIPT_INTERFACES__MSG__DETAIL__INFRARED_STRAIN__STRUCT_H_
#define ARTSCRIPT_INTERFACES__MSG__DETAIL__INFRARED_STRAIN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/InfraredStrain in the package artscript_interfaces.
typedef struct artscript_interfaces__msg__InfraredStrain
{
  int64_t infrared;
  int64_t strain;
} artscript_interfaces__msg__InfraredStrain;

// Struct for a sequence of artscript_interfaces__msg__InfraredStrain.
typedef struct artscript_interfaces__msg__InfraredStrain__Sequence
{
  artscript_interfaces__msg__InfraredStrain * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} artscript_interfaces__msg__InfraredStrain__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARTSCRIPT_INTERFACES__MSG__DETAIL__INFRARED_STRAIN__STRUCT_H_
