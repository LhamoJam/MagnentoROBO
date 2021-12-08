// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from artscript_interfaces:srv/ServoSingle.idl
// generated code does not contain a copyright notice
#include "artscript_interfaces/srv/detail/servo_single__rosidl_typesupport_fastrtps_cpp.hpp"
#include "artscript_interfaces/srv/detail/servo_single__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace artscript_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_artscript_interfaces
cdr_serialize(
  const artscript_interfaces::srv::ServoSingle_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: servo_id
  cdr << ros_message.servo_id;
  // Member: servo_angle
  cdr << ros_message.servo_angle;
  // Member: servo_speed
  cdr << ros_message.servo_speed;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_artscript_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  artscript_interfaces::srv::ServoSingle_Request & ros_message)
{
  // Member: servo_id
  cdr >> ros_message.servo_id;

  // Member: servo_angle
  cdr >> ros_message.servo_angle;

  // Member: servo_speed
  cdr >> ros_message.servo_speed;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_artscript_interfaces
get_serialized_size(
  const artscript_interfaces::srv::ServoSingle_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: servo_id
  {
    size_t item_size = sizeof(ros_message.servo_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: servo_angle
  {
    size_t item_size = sizeof(ros_message.servo_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: servo_speed
  {
    size_t item_size = sizeof(ros_message.servo_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_artscript_interfaces
max_serialized_size_ServoSingle_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: servo_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: servo_angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: servo_speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _ServoSingle_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const artscript_interfaces::srv::ServoSingle_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ServoSingle_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<artscript_interfaces::srv::ServoSingle_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ServoSingle_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const artscript_interfaces::srv::ServoSingle_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ServoSingle_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ServoSingle_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _ServoSingle_Request__callbacks = {
  "artscript_interfaces::srv",
  "ServoSingle_Request",
  _ServoSingle_Request__cdr_serialize,
  _ServoSingle_Request__cdr_deserialize,
  _ServoSingle_Request__get_serialized_size,
  _ServoSingle_Request__max_serialized_size
};

static rosidl_message_type_support_t _ServoSingle_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ServoSingle_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace artscript_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_artscript_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<artscript_interfaces::srv::ServoSingle_Request>()
{
  return &artscript_interfaces::srv::typesupport_fastrtps_cpp::_ServoSingle_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, artscript_interfaces, srv, ServoSingle_Request)() {
  return &artscript_interfaces::srv::typesupport_fastrtps_cpp::_ServoSingle_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace artscript_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_artscript_interfaces
cdr_serialize(
  const artscript_interfaces::srv::ServoSingle_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: move_status
  cdr << (ros_message.move_status ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_artscript_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  artscript_interfaces::srv::ServoSingle_Response & ros_message)
{
  // Member: move_status
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.move_status = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_artscript_interfaces
get_serialized_size(
  const artscript_interfaces::srv::ServoSingle_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: move_status
  {
    size_t item_size = sizeof(ros_message.move_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_artscript_interfaces
max_serialized_size_ServoSingle_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: move_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _ServoSingle_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const artscript_interfaces::srv::ServoSingle_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ServoSingle_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<artscript_interfaces::srv::ServoSingle_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ServoSingle_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const artscript_interfaces::srv::ServoSingle_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ServoSingle_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ServoSingle_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _ServoSingle_Response__callbacks = {
  "artscript_interfaces::srv",
  "ServoSingle_Response",
  _ServoSingle_Response__cdr_serialize,
  _ServoSingle_Response__cdr_deserialize,
  _ServoSingle_Response__get_serialized_size,
  _ServoSingle_Response__max_serialized_size
};

static rosidl_message_type_support_t _ServoSingle_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ServoSingle_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace artscript_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_artscript_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<artscript_interfaces::srv::ServoSingle_Response>()
{
  return &artscript_interfaces::srv::typesupport_fastrtps_cpp::_ServoSingle_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, artscript_interfaces, srv, ServoSingle_Response)() {
  return &artscript_interfaces::srv::typesupport_fastrtps_cpp::_ServoSingle_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace artscript_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _ServoSingle__callbacks = {
  "artscript_interfaces::srv",
  "ServoSingle",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, artscript_interfaces, srv, ServoSingle_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, artscript_interfaces, srv, ServoSingle_Response)(),
};

static rosidl_service_type_support_t _ServoSingle__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ServoSingle__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace artscript_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_artscript_interfaces
const rosidl_service_type_support_t *
get_service_type_support_handle<artscript_interfaces::srv::ServoSingle>()
{
  return &artscript_interfaces::srv::typesupport_fastrtps_cpp::_ServoSingle__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, artscript_interfaces, srv, ServoSingle)() {
  return &artscript_interfaces::srv::typesupport_fastrtps_cpp::_ServoSingle__handle;
}

#ifdef __cplusplus
}
#endif
