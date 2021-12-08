// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from artscript_interfaces:srv/ServoGroup.idl
// generated code does not contain a copyright notice
#include "artscript_interfaces/srv/detail/servo_group__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "artscript_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "artscript_interfaces/srv/detail/servo_group__struct.h"
#include "artscript_interfaces/srv/detail/servo_group__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // command_list
#include "rosidl_runtime_c/string_functions.h"  // command_list

// forward declare type support functions


using _ServoGroup_Request__ros_msg_type = artscript_interfaces__srv__ServoGroup_Request;

static bool _ServoGroup_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ServoGroup_Request__ros_msg_type * ros_message = static_cast<const _ServoGroup_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: command_list
  {
    size_t size = ros_message->command_list.size;
    auto array_ptr = ros_message->command_list.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
      if (str->capacity == 0 || str->capacity <= str->size) {
        fprintf(stderr, "string capacity not greater than size\n");
        return false;
      }
      if (str->data[str->size] != '\0') {
        fprintf(stderr, "string not null-terminated\n");
        return false;
      }
      cdr << str->data;
    }
  }

  // Field name: servo_speed
  {
    cdr << ros_message->servo_speed;
  }

  return true;
}

static bool _ServoGroup_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ServoGroup_Request__ros_msg_type * ros_message = static_cast<_ServoGroup_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: command_list
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->command_list.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->command_list);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->command_list, size)) {
      return "failed to create array for field 'command_list'";
    }
    auto array_ptr = ros_message->command_list.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'command_list'\n");
        return false;
      }
    }
  }

  // Field name: servo_speed
  {
    cdr >> ros_message->servo_speed;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_artscript_interfaces
size_t get_serialized_size_artscript_interfaces__srv__ServoGroup_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ServoGroup_Request__ros_msg_type * ros_message = static_cast<const _ServoGroup_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name command_list
  {
    size_t array_size = ros_message->command_list.size;
    auto array_ptr = ros_message->command_list.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name servo_speed
  {
    size_t item_size = sizeof(ros_message->servo_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ServoGroup_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_artscript_interfaces__srv__ServoGroup_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_artscript_interfaces
size_t max_serialized_size_artscript_interfaces__srv__ServoGroup_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: command_list
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: servo_speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _ServoGroup_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_artscript_interfaces__srv__ServoGroup_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ServoGroup_Request = {
  "artscript_interfaces::srv",
  "ServoGroup_Request",
  _ServoGroup_Request__cdr_serialize,
  _ServoGroup_Request__cdr_deserialize,
  _ServoGroup_Request__get_serialized_size,
  _ServoGroup_Request__max_serialized_size
};

static rosidl_message_type_support_t _ServoGroup_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ServoGroup_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, artscript_interfaces, srv, ServoGroup_Request)() {
  return &_ServoGroup_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "artscript_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "artscript_interfaces/srv/detail/servo_group__struct.h"
// already included above
// #include "artscript_interfaces/srv/detail/servo_group__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _ServoGroup_Response__ros_msg_type = artscript_interfaces__srv__ServoGroup_Response;

static bool _ServoGroup_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ServoGroup_Response__ros_msg_type * ros_message = static_cast<const _ServoGroup_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: move_status
  {
    cdr << (ros_message->move_status ? true : false);
  }

  return true;
}

static bool _ServoGroup_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ServoGroup_Response__ros_msg_type * ros_message = static_cast<_ServoGroup_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: move_status
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->move_status = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_artscript_interfaces
size_t get_serialized_size_artscript_interfaces__srv__ServoGroup_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ServoGroup_Response__ros_msg_type * ros_message = static_cast<const _ServoGroup_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name move_status
  {
    size_t item_size = sizeof(ros_message->move_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ServoGroup_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_artscript_interfaces__srv__ServoGroup_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_artscript_interfaces
size_t max_serialized_size_artscript_interfaces__srv__ServoGroup_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: move_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _ServoGroup_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_artscript_interfaces__srv__ServoGroup_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ServoGroup_Response = {
  "artscript_interfaces::srv",
  "ServoGroup_Response",
  _ServoGroup_Response__cdr_serialize,
  _ServoGroup_Response__cdr_deserialize,
  _ServoGroup_Response__get_serialized_size,
  _ServoGroup_Response__max_serialized_size
};

static rosidl_message_type_support_t _ServoGroup_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ServoGroup_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, artscript_interfaces, srv, ServoGroup_Response)() {
  return &_ServoGroup_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "artscript_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "artscript_interfaces/srv/servo_group.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t ServoGroup__callbacks = {
  "artscript_interfaces::srv",
  "ServoGroup",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, artscript_interfaces, srv, ServoGroup_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, artscript_interfaces, srv, ServoGroup_Response)(),
};

static rosidl_service_type_support_t ServoGroup__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &ServoGroup__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, artscript_interfaces, srv, ServoGroup)() {
  return &ServoGroup__handle;
}

#if defined(__cplusplus)
}
#endif
