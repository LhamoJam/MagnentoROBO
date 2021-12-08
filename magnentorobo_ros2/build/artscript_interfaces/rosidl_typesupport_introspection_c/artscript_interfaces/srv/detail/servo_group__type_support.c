// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from artscript_interfaces:srv/ServoGroup.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "artscript_interfaces/srv/detail/servo_group__rosidl_typesupport_introspection_c.h"
#include "artscript_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "artscript_interfaces/srv/detail/servo_group__functions.h"
#include "artscript_interfaces/srv/detail/servo_group__struct.h"


// Include directives for member types
// Member `command_list`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ServoGroup_Request__rosidl_typesupport_introspection_c__ServoGroup_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  artscript_interfaces__srv__ServoGroup_Request__init(message_memory);
}

void ServoGroup_Request__rosidl_typesupport_introspection_c__ServoGroup_Request_fini_function(void * message_memory)
{
  artscript_interfaces__srv__ServoGroup_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ServoGroup_Request__rosidl_typesupport_introspection_c__ServoGroup_Request_message_member_array[2] = {
  {
    "command_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(artscript_interfaces__srv__ServoGroup_Request, command_list),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "servo_speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(artscript_interfaces__srv__ServoGroup_Request, servo_speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ServoGroup_Request__rosidl_typesupport_introspection_c__ServoGroup_Request_message_members = {
  "artscript_interfaces__srv",  // message namespace
  "ServoGroup_Request",  // message name
  2,  // number of fields
  sizeof(artscript_interfaces__srv__ServoGroup_Request),
  ServoGroup_Request__rosidl_typesupport_introspection_c__ServoGroup_Request_message_member_array,  // message members
  ServoGroup_Request__rosidl_typesupport_introspection_c__ServoGroup_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ServoGroup_Request__rosidl_typesupport_introspection_c__ServoGroup_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ServoGroup_Request__rosidl_typesupport_introspection_c__ServoGroup_Request_message_type_support_handle = {
  0,
  &ServoGroup_Request__rosidl_typesupport_introspection_c__ServoGroup_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_artscript_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, artscript_interfaces, srv, ServoGroup_Request)() {
  if (!ServoGroup_Request__rosidl_typesupport_introspection_c__ServoGroup_Request_message_type_support_handle.typesupport_identifier) {
    ServoGroup_Request__rosidl_typesupport_introspection_c__ServoGroup_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ServoGroup_Request__rosidl_typesupport_introspection_c__ServoGroup_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "artscript_interfaces/srv/detail/servo_group__rosidl_typesupport_introspection_c.h"
// already included above
// #include "artscript_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "artscript_interfaces/srv/detail/servo_group__functions.h"
// already included above
// #include "artscript_interfaces/srv/detail/servo_group__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ServoGroup_Response__rosidl_typesupport_introspection_c__ServoGroup_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  artscript_interfaces__srv__ServoGroup_Response__init(message_memory);
}

void ServoGroup_Response__rosidl_typesupport_introspection_c__ServoGroup_Response_fini_function(void * message_memory)
{
  artscript_interfaces__srv__ServoGroup_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ServoGroup_Response__rosidl_typesupport_introspection_c__ServoGroup_Response_message_member_array[1] = {
  {
    "move_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(artscript_interfaces__srv__ServoGroup_Response, move_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ServoGroup_Response__rosidl_typesupport_introspection_c__ServoGroup_Response_message_members = {
  "artscript_interfaces__srv",  // message namespace
  "ServoGroup_Response",  // message name
  1,  // number of fields
  sizeof(artscript_interfaces__srv__ServoGroup_Response),
  ServoGroup_Response__rosidl_typesupport_introspection_c__ServoGroup_Response_message_member_array,  // message members
  ServoGroup_Response__rosidl_typesupport_introspection_c__ServoGroup_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ServoGroup_Response__rosidl_typesupport_introspection_c__ServoGroup_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ServoGroup_Response__rosidl_typesupport_introspection_c__ServoGroup_Response_message_type_support_handle = {
  0,
  &ServoGroup_Response__rosidl_typesupport_introspection_c__ServoGroup_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_artscript_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, artscript_interfaces, srv, ServoGroup_Response)() {
  if (!ServoGroup_Response__rosidl_typesupport_introspection_c__ServoGroup_Response_message_type_support_handle.typesupport_identifier) {
    ServoGroup_Response__rosidl_typesupport_introspection_c__ServoGroup_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ServoGroup_Response__rosidl_typesupport_introspection_c__ServoGroup_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "artscript_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "artscript_interfaces/srv/detail/servo_group__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers artscript_interfaces__srv__detail__servo_group__rosidl_typesupport_introspection_c__ServoGroup_service_members = {
  "artscript_interfaces__srv",  // service namespace
  "ServoGroup",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // artscript_interfaces__srv__detail__servo_group__rosidl_typesupport_introspection_c__ServoGroup_Request_message_type_support_handle,
  NULL  // response message
  // artscript_interfaces__srv__detail__servo_group__rosidl_typesupport_introspection_c__ServoGroup_Response_message_type_support_handle
};

static rosidl_service_type_support_t artscript_interfaces__srv__detail__servo_group__rosidl_typesupport_introspection_c__ServoGroup_service_type_support_handle = {
  0,
  &artscript_interfaces__srv__detail__servo_group__rosidl_typesupport_introspection_c__ServoGroup_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, artscript_interfaces, srv, ServoGroup_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, artscript_interfaces, srv, ServoGroup_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_artscript_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, artscript_interfaces, srv, ServoGroup)() {
  if (!artscript_interfaces__srv__detail__servo_group__rosidl_typesupport_introspection_c__ServoGroup_service_type_support_handle.typesupport_identifier) {
    artscript_interfaces__srv__detail__servo_group__rosidl_typesupport_introspection_c__ServoGroup_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)artscript_interfaces__srv__detail__servo_group__rosidl_typesupport_introspection_c__ServoGroup_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, artscript_interfaces, srv, ServoGroup_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, artscript_interfaces, srv, ServoGroup_Response)()->data;
  }

  return &artscript_interfaces__srv__detail__servo_group__rosidl_typesupport_introspection_c__ServoGroup_service_type_support_handle;
}
