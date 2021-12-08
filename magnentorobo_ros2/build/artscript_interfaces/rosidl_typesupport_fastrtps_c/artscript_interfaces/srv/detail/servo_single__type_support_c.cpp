// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from artscript_interfaces:srv/ServoSingle.idl
// generated code does not contain a copyright notice
#include "artscript_interfaces/srv/detail/servo_single__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "artscript_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "artscript_interfaces/srv/detail/servo_single__struct.h"
#include "artscript_interfaces/srv/detail/servo_single__functions.h"
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


// forward declare type support functions


using _ServoSingle_Request__ros_msg_type = artscript_interfaces__srv__ServoSingle_Request;

static bool _ServoSingle_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ServoSingle_Request__ros_msg_type * ros_message = static_cast<const _ServoSingle_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: servo_id
  {
    cdr << ros_message->servo_id;
  }

  // Field name: servo_angle
  {
    cdr << ros_message->servo_angle;
  }

  // Field name: servo_speed
  {
    cdr << ros_message->servo_speed;
  }

  return true;
}

static bool _ServoSingle_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ServoSingle_Request__ros_msg_type * ros_message = static_cast<_ServoSingle_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: servo_id
  {
    cdr >> ros_message->servo_id;
  }

  // Field name: servo_angle
  {
    cdr >> ros_message->servo_angle;
  }

  // Field name: servo_speed
  {
    cdr >> ros_message->servo_speed;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_artscript_interfaces
size_t get_serialized_size_artscript_interfaces__srv__ServoSingle_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ServoSingle_Request__ros_msg_type * ros_message = static_cast<const _ServoSingle_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name servo_id
  {
    size_t item_size = sizeof(ros_message->servo_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name servo_angle
  {
    size_t item_size = sizeof(ros_message->servo_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name servo_speed
  {
    size_t item_size = sizeof(ros_message->servo_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ServoSingle_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_artscript_interfaces__srv__ServoSingle_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_artscript_interfaces
size_t max_serialized_size_artscript_interfaces__srv__ServoSingle_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: servo_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: servo_angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: servo_speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _ServoSingle_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_artscript_interfaces__srv__ServoSingle_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ServoSingle_Request = {
  "artscript_interfaces::srv",
  "ServoSingle_Request",
  _ServoSingle_Request__cdr_serialize,
  _ServoSingle_Request__cdr_deserialize,
  _ServoSingle_Request__get_serialized_size,
  _ServoSingle_Request__max_serialized_size
};

static rosidl_message_type_support_t _ServoSingle_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ServoSingle_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, artscript_interfaces, srv, ServoSingle_Request)() {
  return &_ServoSingle_Request__type_support;
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
// #include "artscript_interfaces/srv/detail/servo_single__struct.h"
// already included above
// #include "artscript_interfaces/srv/detail/servo_single__functions.h"
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


using _ServoSingle_Response__ros_msg_type = artscript_interfaces__srv__ServoSingle_Response;

static bool _ServoSingle_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ServoSingle_Response__ros_msg_type * ros_message = static_cast<const _ServoSingle_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: move_status
  {
    cdr << (ros_message->move_status ? true : false);
  }

  return true;
}

static bool _ServoSingle_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ServoSingle_Response__ros_msg_type * ros_message = static_cast<_ServoSingle_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: move_status
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->move_status = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_artscript_interfaces
size_t get_serialized_size_artscript_interfaces__srv__ServoSingle_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ServoSingle_Response__ros_msg_type * ros_message = static_cast<const _ServoSingle_Response__ros_msg_type *>(untyped_ros_message);
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

static uint32_t _ServoSingle_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_artscript_interfaces__srv__ServoSingle_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_artscript_interfaces
size_t max_serialized_size_artscript_interfaces__srv__ServoSingle_Response(
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

static size_t _ServoSingle_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_artscript_interfaces__srv__ServoSingle_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ServoSingle_Response = {
  "artscript_interfaces::srv",
  "ServoSingle_Response",
  _ServoSingle_Response__cdr_serialize,
  _ServoSingle_Response__cdr_deserialize,
  _ServoSingle_Response__get_serialized_size,
  _ServoSingle_Response__max_serialized_size
};

static rosidl_message_type_support_t _ServoSingle_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ServoSingle_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, artscript_interfaces, srv, ServoSingle_Response)() {
  return &_ServoSingle_Response__type_support;
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
#include "artscript_interfaces/srv/servo_single.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t ServoSingle__callbacks = {
  "artscript_interfaces::srv",
  "ServoSingle",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, artscript_interfaces, srv, ServoSingle_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, artscript_interfaces, srv, ServoSingle_Response)(),
};

static rosidl_service_type_support_t ServoSingle__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &ServoSingle__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, artscript_interfaces, srv, ServoSingle)() {
  return &ServoSingle__handle;
}

#if defined(__cplusplus)
}
#endif
