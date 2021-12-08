// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from artscript_interfaces:srv/ServoGroup.idl
// generated code does not contain a copyright notice
#include "artscript_interfaces/srv/detail/servo_group__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `command_list`
#include "rosidl_runtime_c/string_functions.h"

bool
artscript_interfaces__srv__ServoGroup_Request__init(artscript_interfaces__srv__ServoGroup_Request * msg)
{
  if (!msg) {
    return false;
  }
  // command_list
  if (!rosidl_runtime_c__String__Sequence__init(&msg->command_list, 0)) {
    artscript_interfaces__srv__ServoGroup_Request__fini(msg);
    return false;
  }
  // servo_speed
  return true;
}

void
artscript_interfaces__srv__ServoGroup_Request__fini(artscript_interfaces__srv__ServoGroup_Request * msg)
{
  if (!msg) {
    return;
  }
  // command_list
  rosidl_runtime_c__String__Sequence__fini(&msg->command_list);
  // servo_speed
}

artscript_interfaces__srv__ServoGroup_Request *
artscript_interfaces__srv__ServoGroup_Request__create()
{
  artscript_interfaces__srv__ServoGroup_Request * msg = (artscript_interfaces__srv__ServoGroup_Request *)malloc(sizeof(artscript_interfaces__srv__ServoGroup_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(artscript_interfaces__srv__ServoGroup_Request));
  bool success = artscript_interfaces__srv__ServoGroup_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
artscript_interfaces__srv__ServoGroup_Request__destroy(artscript_interfaces__srv__ServoGroup_Request * msg)
{
  if (msg) {
    artscript_interfaces__srv__ServoGroup_Request__fini(msg);
  }
  free(msg);
}


bool
artscript_interfaces__srv__ServoGroup_Request__Sequence__init(artscript_interfaces__srv__ServoGroup_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  artscript_interfaces__srv__ServoGroup_Request * data = NULL;
  if (size) {
    data = (artscript_interfaces__srv__ServoGroup_Request *)calloc(size, sizeof(artscript_interfaces__srv__ServoGroup_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = artscript_interfaces__srv__ServoGroup_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        artscript_interfaces__srv__ServoGroup_Request__fini(&data[i - 1]);
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
artscript_interfaces__srv__ServoGroup_Request__Sequence__fini(artscript_interfaces__srv__ServoGroup_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      artscript_interfaces__srv__ServoGroup_Request__fini(&array->data[i]);
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

artscript_interfaces__srv__ServoGroup_Request__Sequence *
artscript_interfaces__srv__ServoGroup_Request__Sequence__create(size_t size)
{
  artscript_interfaces__srv__ServoGroup_Request__Sequence * array = (artscript_interfaces__srv__ServoGroup_Request__Sequence *)malloc(sizeof(artscript_interfaces__srv__ServoGroup_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = artscript_interfaces__srv__ServoGroup_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
artscript_interfaces__srv__ServoGroup_Request__Sequence__destroy(artscript_interfaces__srv__ServoGroup_Request__Sequence * array)
{
  if (array) {
    artscript_interfaces__srv__ServoGroup_Request__Sequence__fini(array);
  }
  free(array);
}


bool
artscript_interfaces__srv__ServoGroup_Response__init(artscript_interfaces__srv__ServoGroup_Response * msg)
{
  if (!msg) {
    return false;
  }
  // move_status
  return true;
}

void
artscript_interfaces__srv__ServoGroup_Response__fini(artscript_interfaces__srv__ServoGroup_Response * msg)
{
  if (!msg) {
    return;
  }
  // move_status
}

artscript_interfaces__srv__ServoGroup_Response *
artscript_interfaces__srv__ServoGroup_Response__create()
{
  artscript_interfaces__srv__ServoGroup_Response * msg = (artscript_interfaces__srv__ServoGroup_Response *)malloc(sizeof(artscript_interfaces__srv__ServoGroup_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(artscript_interfaces__srv__ServoGroup_Response));
  bool success = artscript_interfaces__srv__ServoGroup_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
artscript_interfaces__srv__ServoGroup_Response__destroy(artscript_interfaces__srv__ServoGroup_Response * msg)
{
  if (msg) {
    artscript_interfaces__srv__ServoGroup_Response__fini(msg);
  }
  free(msg);
}


bool
artscript_interfaces__srv__ServoGroup_Response__Sequence__init(artscript_interfaces__srv__ServoGroup_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  artscript_interfaces__srv__ServoGroup_Response * data = NULL;
  if (size) {
    data = (artscript_interfaces__srv__ServoGroup_Response *)calloc(size, sizeof(artscript_interfaces__srv__ServoGroup_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = artscript_interfaces__srv__ServoGroup_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        artscript_interfaces__srv__ServoGroup_Response__fini(&data[i - 1]);
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
artscript_interfaces__srv__ServoGroup_Response__Sequence__fini(artscript_interfaces__srv__ServoGroup_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      artscript_interfaces__srv__ServoGroup_Response__fini(&array->data[i]);
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

artscript_interfaces__srv__ServoGroup_Response__Sequence *
artscript_interfaces__srv__ServoGroup_Response__Sequence__create(size_t size)
{
  artscript_interfaces__srv__ServoGroup_Response__Sequence * array = (artscript_interfaces__srv__ServoGroup_Response__Sequence *)malloc(sizeof(artscript_interfaces__srv__ServoGroup_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = artscript_interfaces__srv__ServoGroup_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
artscript_interfaces__srv__ServoGroup_Response__Sequence__destroy(artscript_interfaces__srv__ServoGroup_Response__Sequence * array)
{
  if (array) {
    artscript_interfaces__srv__ServoGroup_Response__Sequence__fini(array);
  }
  free(array);
}
