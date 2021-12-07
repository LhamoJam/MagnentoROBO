// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from artscript_interfaces:msg/Imu.idl
// generated code does not contain a copyright notice

#ifndef ARTSCRIPT_INTERFACES__MSG__DETAIL__IMU__STRUCT_H_
#define ARTSCRIPT_INTERFACES__MSG__DETAIL__IMU__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Imu in the package artscript_interfaces.
typedef struct artscript_interfaces__msg__Imu
{
  double acceleration[3];
  double angular[3];
  double angle[3];
} artscript_interfaces__msg__Imu;

// Struct for a sequence of artscript_interfaces__msg__Imu.
typedef struct artscript_interfaces__msg__Imu__Sequence
{
  artscript_interfaces__msg__Imu * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} artscript_interfaces__msg__Imu__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARTSCRIPT_INTERFACES__MSG__DETAIL__IMU__STRUCT_H_
