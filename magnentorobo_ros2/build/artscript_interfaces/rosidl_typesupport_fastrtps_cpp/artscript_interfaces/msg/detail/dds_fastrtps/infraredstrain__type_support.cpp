// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from artscript_interfaces:msg/Infraredstrain.idl
// generated code does not contain a copyright notice
#include "artscript_interfaces/msg/detail/infraredstrain__rosidl_typesupport_fastrtps_cpp.hpp"
#include "artscript_interfaces/msg/detail/infraredstrain__struct.hpp"

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

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_artscript_interfaces
cdr_serialize(
  const artscript_interfaces::msg::Infraredstrain & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: infrared
  cdr << ros_message.infrared;
  // Member: strain
  cdr << ros_message.strain;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_artscript_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  artscript_interfaces::msg::Infraredstrain & ros_message)
{
  // Member: infrared
  cdr >> ros_message.infrared;

  // Member: strain
  cdr >> ros_message.strain;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_artscript_interfaces
get_serialized_size(
  const artscript_interfaces::msg::Infraredstrain & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: infrared
  {
    size_t item_size = sizeof(ros_message.infrared);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: strain
  {
    size_t item_size = sizeof(ros_message.strain);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_artscript_interfaces
max_serialized_size_Infraredstrain(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: infrared
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: strain
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _Infraredstrain__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const artscript_interfaces::msg::Infraredstrain *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Infraredstrain__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<artscript_interfaces::msg::Infraredstrain *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Infraredstrain__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const artscript_interfaces::msg::Infraredstrain *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Infraredstrain__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Infraredstrain(full_bounded, 0);
}

static message_type_support_callbacks_t _Infraredstrain__callbacks = {
  "artscript_interfaces::msg",
  "Infraredstrain",
  _Infraredstrain__cdr_serialize,
  _Infraredstrain__cdr_deserialize,
  _Infraredstrain__get_serialized_size,
  _Infraredstrain__max_serialized_size
};

static rosidl_message_type_support_t _Infraredstrain__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Infraredstrain__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace artscript_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_artscript_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<artscript_interfaces::msg::Infraredstrain>()
{
  return &artscript_interfaces::msg::typesupport_fastrtps_cpp::_Infraredstrain__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, artscript_interfaces, msg, Infraredstrain)() {
  return &artscript_interfaces::msg::typesupport_fastrtps_cpp::_Infraredstrain__handle;
}

#ifdef __cplusplus
}
#endif
