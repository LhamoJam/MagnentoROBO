// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from artscript_interfaces:srv/ServoSingle.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "artscript_interfaces/srv/detail/servo_single__rosidl_typesupport_introspection_c.h"
#include "artscript_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "artscript_interfaces/srv/detail/servo_single__functions.h"
#include "artscript_interfaces/srv/detail/servo_single__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ServoSingle_Request__rosidl_typesupport_introspection_c__ServoSingle_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  artscript_interfaces__srv__ServoSingle_Request__init(message_memory);
}

void ServoSingle_Request__rosidl_typesupport_introspection_c__ServoSingle_Request_fini_function(void * message_memory)
{
  artscript_interfaces__srv__ServoSingle_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ServoSingle_Request__rosidl_typesupport_introspection_c__ServoSingle_Request_message_member_array[3] = {
  {
    "servo_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(artscript_interfaces__srv__ServoSingle_Request, servo_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "servo_angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(artscript_interfaces__srv__ServoSingle_Request, servo_angle),  // bytes offset in struct
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
    offsetof(artscript_interfaces__srv__ServoSingle_Request, servo_speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ServoSingle_Request__rosidl_typesupport_introspection_c__ServoSingle_Request_message_members = {
  "artscript_interfaces__srv",  // message namespace
  "ServoSingle_Request",  // message name
  3,  // number of fields
  sizeof(artscript_interfaces__srv__ServoSingle_Request),
  ServoSingle_Request__rosidl_typesupport_introspection_c__ServoSingle_Request_message_member_array,  // message members
  ServoSingle_Request__rosidl_typesupport_introspection_c__ServoSingle_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ServoSingle_Request__rosidl_typesupport_introspection_c__ServoSingle_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ServoSingle_Request__rosidl_typesupport_introspection_c__ServoSingle_Request_message_type_support_handle = {
  0,
  &ServoSingle_Request__rosidl_typesupport_introspection_c__ServoSingle_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_artscript_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, artscript_interfaces, srv, ServoSingle_Request)() {
  if (!ServoSingle_Request__rosidl_typesupport_introspection_c__ServoSingle_Request_message_type_support_handle.typesupport_identifier) {
    ServoSingle_Request__rosidl_typesupport_introspection_c__ServoSingle_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ServoSingle_Request__rosidl_typesupport_introspection_c__ServoSingle_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "artscript_interfaces/srv/detail/servo_single__rosidl_typesupport_introspection_c.h"
// already included above
// #include "artscript_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "artscript_interfaces/srv/detail/servo_single__functions.h"
// already included above
// #include "artscript_interfaces/srv/detail/servo_single__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ServoSingle_Response__rosidl_typesupport_introspection_c__ServoSingle_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  artscript_interfaces__srv__ServoSingle_Response__init(message_memory);
}

void ServoSingle_Response__rosidl_typesupport_introspection_c__ServoSingle_Response_fini_function(void * message_memory)
{
  artscript_interfaces__srv__ServoSingle_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ServoSingle_Response__rosidl_typesupport_introspection_c__ServoSingle_Response_message_member_array[1] = {
  {
    "move_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(artscript_interfaces__srv__ServoSingle_Response, move_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ServoSingle_Response__rosidl_typesupport_introspection_c__ServoSingle_Response_message_members = {
  "artscript_interfaces__srv",  // message namespace
  "ServoSingle_Response",  // message name
  1,  // number of fields
  sizeof(artscript_interfaces__srv__ServoSingle_Response),
  ServoSingle_Response__rosidl_typesupport_introspection_c__ServoSingle_Response_message_member_array,  // message members
  ServoSingle_Response__rosidl_typesupport_introspection_c__ServoSingle_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ServoSingle_Response__rosidl_typesupport_introspection_c__ServoSingle_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ServoSingle_Response__rosidl_typesupport_introspection_c__ServoSingle_Response_message_type_support_handle = {
  0,
  &ServoSingle_Response__rosidl_typesupport_introspection_c__ServoSingle_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_artscript_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, artscript_interfaces, srv, ServoSingle_Response)() {
  if (!ServoSingle_Response__rosidl_typesupport_introspection_c__ServoSingle_Response_message_type_support_handle.typesupport_identifier) {
    ServoSingle_Response__rosidl_typesupport_introspection_c__ServoSingle_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ServoSingle_Response__rosidl_typesupport_introspection_c__ServoSingle_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "artscript_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "artscript_interfaces/srv/detail/servo_single__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers artscript_interfaces__srv__detail__servo_single__rosidl_typesupport_introspection_c__ServoSingle_service_members = {
  "artscript_interfaces__srv",  // service namespace
  "ServoSingle",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // artscript_interfaces__srv__detail__servo_single__rosidl_typesupport_introspection_c__ServoSingle_Request_message_type_support_handle,
  NULL  // response message
  // artscript_interfaces__srv__detail__servo_single__rosidl_typesupport_introspection_c__ServoSingle_Response_message_type_support_handle
};

static rosidl_service_type_support_t artscript_interfaces__srv__detail__servo_single__rosidl_typesupport_introspection_c__ServoSingle_service_type_support_handle = {
  0,
  &artscript_interfaces__srv__detail__servo_single__rosidl_typesupport_introspection_c__ServoSingle_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, artscript_interfaces, srv, ServoSingle_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, artscript_interfaces, srv, ServoSingle_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_artscript_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, artscript_interfaces, srv, ServoSingle)() {
  if (!artscript_interfaces__srv__detail__servo_single__rosidl_typesupport_introspection_c__ServoSingle_service_type_support_handle.typesupport_identifier) {
    artscript_interfaces__srv__detail__servo_single__rosidl_typesupport_introspection_c__ServoSingle_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)artscript_interfaces__srv__detail__servo_single__rosidl_typesupport_introspection_c__ServoSingle_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, artscript_interfaces, srv, ServoSingle_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, artscript_interfaces, srv, ServoSingle_Response)()->data;
  }

  return &artscript_interfaces__srv__detail__servo_single__rosidl_typesupport_introspection_c__ServoSingle_service_type_support_handle;
}
