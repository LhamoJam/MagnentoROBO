// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from artscript_interfaces:msg/Infraredstrain.idl
// generated code does not contain a copyright notice

#ifndef ARTSCRIPT_INTERFACES__MSG__DETAIL__INFRAREDSTRAIN__STRUCT_H_
#define ARTSCRIPT_INTERFACES__MSG__DETAIL__INFRAREDSTRAIN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Infraredstrain in the package artscript_interfaces.
typedef struct artscript_interfaces__msg__Infraredstrain
{
  int64_t infrared;
  int64_t strain;
} artscript_interfaces__msg__Infraredstrain;

// Struct for a sequence of artscript_interfaces__msg__Infraredstrain.
typedef struct artscript_interfaces__msg__Infraredstrain__Sequence
{
  artscript_interfaces__msg__Infraredstrain * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} artscript_interfaces__msg__Infraredstrain__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARTSCRIPT_INTERFACES__MSG__DETAIL__INFRAREDSTRAIN__STRUCT_H_
