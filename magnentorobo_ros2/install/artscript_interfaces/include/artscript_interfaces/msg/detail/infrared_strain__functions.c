// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from artscript_interfaces:msg/InfraredStrain.idl
// generated code does not contain a copyright notice
#include "artscript_interfaces/msg/detail/infrared_strain__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
artscript_interfaces__msg__InfraredStrain__init(artscript_interfaces__msg__InfraredStrain * msg)
{
  if (!msg) {
    return false;
  }
  // infrared
  // strain
  return true;
}

void
artscript_interfaces__msg__InfraredStrain__fini(artscript_interfaces__msg__InfraredStrain * msg)
{
  if (!msg) {
    return;
  }
  // infrared
  // strain
}

artscript_interfaces__msg__InfraredStrain *
artscript_interfaces__msg__InfraredStrain__create()
{
  artscript_interfaces__msg__InfraredStrain * msg = (artscript_interfaces__msg__InfraredStrain *)malloc(sizeof(artscript_interfaces__msg__InfraredStrain));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(artscript_interfaces__msg__InfraredStrain));
  bool success = artscript_interfaces__msg__InfraredStrain__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
artscript_interfaces__msg__InfraredStrain__destroy(artscript_interfaces__msg__InfraredStrain * msg)
{
  if (msg) {
    artscript_interfaces__msg__InfraredStrain__fini(msg);
  }
  free(msg);
}


bool
artscript_interfaces__msg__InfraredStrain__Sequence__init(artscript_interfaces__msg__InfraredStrain__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  artscript_interfaces__msg__InfraredStrain * data = NULL;
  if (size) {
    data = (artscript_interfaces__msg__InfraredStrain *)calloc(size, sizeof(artscript_interfaces__msg__InfraredStrain));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = artscript_interfaces__msg__InfraredStrain__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        artscript_interfaces__msg__InfraredStrain__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
artscript_interfaces__msg__InfraredStrain__Sequence__fini(artscript_interfaces__msg__InfraredStrain__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      artscript_interfaces__msg__InfraredStrain__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

artscript_interfaces__msg__InfraredStrain__Sequence *
artscript_interfaces__msg__InfraredStrain__Sequence__create(size_t size)
{
  artscript_interfaces__msg__InfraredStrain__Sequence * array = (artscript_interfaces__msg__InfraredStrain__Sequence *)malloc(sizeof(artscript_interfaces__msg__InfraredStrain__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = artscript_interfaces__msg__InfraredStrain__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
artscript_interfaces__msg__InfraredStrain__Sequence__destroy(artscript_interfaces__msg__InfraredStrain__Sequence * array)
{
  if (array) {
    artscript_interfaces__msg__InfraredStrain__Sequence__fini(array);
  }
  free(array);
}
