// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tello_msgs:srv/TelloAction.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tello_msgs/srv/detail/tello_action__rosidl_typesupport_introspection_c.h"
#include "tello_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tello_msgs/srv/detail/tello_action__functions.h"
#include "tello_msgs/srv/detail/tello_action__struct.h"


// Include directives for member types
// Member `cmd`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void tello_msgs__srv__TelloAction_Request__rosidl_typesupport_introspection_c__TelloAction_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tello_msgs__srv__TelloAction_Request__init(message_memory);
}

void tello_msgs__srv__TelloAction_Request__rosidl_typesupport_introspection_c__TelloAction_Request_fini_function(void * message_memory)
{
  tello_msgs__srv__TelloAction_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember tello_msgs__srv__TelloAction_Request__rosidl_typesupport_introspection_c__TelloAction_Request_message_member_array[1] = {
  {
    "cmd",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tello_msgs__srv__TelloAction_Request, cmd),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tello_msgs__srv__TelloAction_Request__rosidl_typesupport_introspection_c__TelloAction_Request_message_members = {
  "tello_msgs__srv",  // message namespace
  "TelloAction_Request",  // message name
  1,  // number of fields
  sizeof(tello_msgs__srv__TelloAction_Request),
  false,  // has_any_key_member_
  tello_msgs__srv__TelloAction_Request__rosidl_typesupport_introspection_c__TelloAction_Request_message_member_array,  // message members
  tello_msgs__srv__TelloAction_Request__rosidl_typesupport_introspection_c__TelloAction_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  tello_msgs__srv__TelloAction_Request__rosidl_typesupport_introspection_c__TelloAction_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tello_msgs__srv__TelloAction_Request__rosidl_typesupport_introspection_c__TelloAction_Request_message_type_support_handle = {
  0,
  &tello_msgs__srv__TelloAction_Request__rosidl_typesupport_introspection_c__TelloAction_Request_message_members,
  get_message_typesupport_handle_function,
  &tello_msgs__srv__TelloAction_Request__get_type_hash,
  &tello_msgs__srv__TelloAction_Request__get_type_description,
  &tello_msgs__srv__TelloAction_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tello_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tello_msgs, srv, TelloAction_Request)() {
  if (!tello_msgs__srv__TelloAction_Request__rosidl_typesupport_introspection_c__TelloAction_Request_message_type_support_handle.typesupport_identifier) {
    tello_msgs__srv__TelloAction_Request__rosidl_typesupport_introspection_c__TelloAction_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tello_msgs__srv__TelloAction_Request__rosidl_typesupport_introspection_c__TelloAction_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "tello_msgs/srv/detail/tello_action__rosidl_typesupport_introspection_c.h"
// already included above
// #include "tello_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "tello_msgs/srv/detail/tello_action__functions.h"
// already included above
// #include "tello_msgs/srv/detail/tello_action__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void tello_msgs__srv__TelloAction_Response__rosidl_typesupport_introspection_c__TelloAction_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tello_msgs__srv__TelloAction_Response__init(message_memory);
}

void tello_msgs__srv__TelloAction_Response__rosidl_typesupport_introspection_c__TelloAction_Response_fini_function(void * message_memory)
{
  tello_msgs__srv__TelloAction_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember tello_msgs__srv__TelloAction_Response__rosidl_typesupport_introspection_c__TelloAction_Response_message_member_array[1] = {
  {
    "rc",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tello_msgs__srv__TelloAction_Response, rc),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tello_msgs__srv__TelloAction_Response__rosidl_typesupport_introspection_c__TelloAction_Response_message_members = {
  "tello_msgs__srv",  // message namespace
  "TelloAction_Response",  // message name
  1,  // number of fields
  sizeof(tello_msgs__srv__TelloAction_Response),
  false,  // has_any_key_member_
  tello_msgs__srv__TelloAction_Response__rosidl_typesupport_introspection_c__TelloAction_Response_message_member_array,  // message members
  tello_msgs__srv__TelloAction_Response__rosidl_typesupport_introspection_c__TelloAction_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  tello_msgs__srv__TelloAction_Response__rosidl_typesupport_introspection_c__TelloAction_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tello_msgs__srv__TelloAction_Response__rosidl_typesupport_introspection_c__TelloAction_Response_message_type_support_handle = {
  0,
  &tello_msgs__srv__TelloAction_Response__rosidl_typesupport_introspection_c__TelloAction_Response_message_members,
  get_message_typesupport_handle_function,
  &tello_msgs__srv__TelloAction_Response__get_type_hash,
  &tello_msgs__srv__TelloAction_Response__get_type_description,
  &tello_msgs__srv__TelloAction_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tello_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tello_msgs, srv, TelloAction_Response)() {
  if (!tello_msgs__srv__TelloAction_Response__rosidl_typesupport_introspection_c__TelloAction_Response_message_type_support_handle.typesupport_identifier) {
    tello_msgs__srv__TelloAction_Response__rosidl_typesupport_introspection_c__TelloAction_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tello_msgs__srv__TelloAction_Response__rosidl_typesupport_introspection_c__TelloAction_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "tello_msgs/srv/detail/tello_action__rosidl_typesupport_introspection_c.h"
// already included above
// #include "tello_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "tello_msgs/srv/detail/tello_action__functions.h"
// already included above
// #include "tello_msgs/srv/detail/tello_action__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "tello_msgs/srv/tello_action.h"
// Member `request`
// Member `response`
// already included above
// #include "tello_msgs/srv/detail/tello_action__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void tello_msgs__srv__TelloAction_Event__rosidl_typesupport_introspection_c__TelloAction_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tello_msgs__srv__TelloAction_Event__init(message_memory);
}

void tello_msgs__srv__TelloAction_Event__rosidl_typesupport_introspection_c__TelloAction_Event_fini_function(void * message_memory)
{
  tello_msgs__srv__TelloAction_Event__fini(message_memory);
}

size_t tello_msgs__srv__TelloAction_Event__rosidl_typesupport_introspection_c__size_function__TelloAction_Event__request(
  const void * untyped_member)
{
  const tello_msgs__srv__TelloAction_Request__Sequence * member =
    (const tello_msgs__srv__TelloAction_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * tello_msgs__srv__TelloAction_Event__rosidl_typesupport_introspection_c__get_const_function__TelloAction_Event__request(
  const void * untyped_member, size_t index)
{
  const tello_msgs__srv__TelloAction_Request__Sequence * member =
    (const tello_msgs__srv__TelloAction_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tello_msgs__srv__TelloAction_Event__rosidl_typesupport_introspection_c__get_function__TelloAction_Event__request(
  void * untyped_member, size_t index)
{
  tello_msgs__srv__TelloAction_Request__Sequence * member =
    (tello_msgs__srv__TelloAction_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void tello_msgs__srv__TelloAction_Event__rosidl_typesupport_introspection_c__fetch_function__TelloAction_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const tello_msgs__srv__TelloAction_Request * item =
    ((const tello_msgs__srv__TelloAction_Request *)
    tello_msgs__srv__TelloAction_Event__rosidl_typesupport_introspection_c__get_const_function__TelloAction_Event__request(untyped_member, index));
  tello_msgs__srv__TelloAction_Request * value =
    (tello_msgs__srv__TelloAction_Request *)(untyped_value);
  *value = *item;
}

void tello_msgs__srv__TelloAction_Event__rosidl_typesupport_introspection_c__assign_function__TelloAction_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  tello_msgs__srv__TelloAction_Request * item =
    ((tello_msgs__srv__TelloAction_Request *)
    tello_msgs__srv__TelloAction_Event__rosidl_typesupport_introspection_c__get_function__TelloAction_Event__request(untyped_member, index));
  const tello_msgs__srv__TelloAction_Request * value =
    (const tello_msgs__srv__TelloAction_Request *)(untyped_value);
  *item = *value;
}

bool tello_msgs__srv__TelloAction_Event__rosidl_typesupport_introspection_c__resize_function__TelloAction_Event__request(
  void * untyped_member, size_t size)
{
  tello_msgs__srv__TelloAction_Request__Sequence * member =
    (tello_msgs__srv__TelloAction_Request__Sequence *)(untyped_member);
  tello_msgs__srv__TelloAction_Request__Sequence__fini(member);
  return tello_msgs__srv__TelloAction_Request__Sequence__init(member, size);
}

size_t tello_msgs__srv__TelloAction_Event__rosidl_typesupport_introspection_c__size_function__TelloAction_Event__response(
  const void * untyped_member)
{
  const tello_msgs__srv__TelloAction_Response__Sequence * member =
    (const tello_msgs__srv__TelloAction_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * tello_msgs__srv__TelloAction_Event__rosidl_typesupport_introspection_c__get_const_function__TelloAction_Event__response(
  const void * untyped_member, size_t index)
{
  const tello_msgs__srv__TelloAction_Response__Sequence * member =
    (const tello_msgs__srv__TelloAction_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tello_msgs__srv__TelloAction_Event__rosidl_typesupport_introspection_c__get_function__TelloAction_Event__response(
  void * untyped_member, size_t index)
{
  tello_msgs__srv__TelloAction_Response__Sequence * member =
    (tello_msgs__srv__TelloAction_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void tello_msgs__srv__TelloAction_Event__rosidl_typesupport_introspection_c__fetch_function__TelloAction_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const tello_msgs__srv__TelloAction_Response * item =
    ((const tello_msgs__srv__TelloAction_Response *)
    tello_msgs__srv__TelloAction_Event__rosidl_typesupport_introspection_c__get_const_function__TelloAction_Event__response(untyped_member, index));
  tello_msgs__srv__TelloAction_Response * value =
    (tello_msgs__srv__TelloAction_Response *)(untyped_value);
  *value = *item;
}

void tello_msgs__srv__TelloAction_Event__rosidl_typesupport_introspection_c__assign_function__TelloAction_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  tello_msgs__srv__TelloAction_Response * item =
    ((tello_msgs__srv__TelloAction_Response *)
    tello_msgs__srv__TelloAction_Event__rosidl_typesupport_introspection_c__get_function__TelloAction_Event__response(untyped_member, index));
  const tello_msgs__srv__TelloAction_Response * value =
    (const tello_msgs__srv__TelloAction_Response *)(untyped_value);
  *item = *value;
}

bool tello_msgs__srv__TelloAction_Event__rosidl_typesupport_introspection_c__resize_function__TelloAction_Event__response(
  void * untyped_member, size_t size)
{
  tello_msgs__srv__TelloAction_Response__Sequence * member =
    (tello_msgs__srv__TelloAction_Response__Sequence *)(untyped_member);
  tello_msgs__srv__TelloAction_Response__Sequence__fini(member);
  return tello_msgs__srv__TelloAction_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember tello_msgs__srv__TelloAction_Event__rosidl_typesupport_introspection_c__TelloAction_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tello_msgs__srv__TelloAction_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(tello_msgs__srv__TelloAction_Event, request),  // bytes offset in struct
    NULL,  // default value
    tello_msgs__srv__TelloAction_Event__rosidl_typesupport_introspection_c__size_function__TelloAction_Event__request,  // size() function pointer
    tello_msgs__srv__TelloAction_Event__rosidl_typesupport_introspection_c__get_const_function__TelloAction_Event__request,  // get_const(index) function pointer
    tello_msgs__srv__TelloAction_Event__rosidl_typesupport_introspection_c__get_function__TelloAction_Event__request,  // get(index) function pointer
    tello_msgs__srv__TelloAction_Event__rosidl_typesupport_introspection_c__fetch_function__TelloAction_Event__request,  // fetch(index, &value) function pointer
    tello_msgs__srv__TelloAction_Event__rosidl_typesupport_introspection_c__assign_function__TelloAction_Event__request,  // assign(index, value) function pointer
    tello_msgs__srv__TelloAction_Event__rosidl_typesupport_introspection_c__resize_function__TelloAction_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(tello_msgs__srv__TelloAction_Event, response),  // bytes offset in struct
    NULL,  // default value
    tello_msgs__srv__TelloAction_Event__rosidl_typesupport_introspection_c__size_function__TelloAction_Event__response,  // size() function pointer
    tello_msgs__srv__TelloAction_Event__rosidl_typesupport_introspection_c__get_const_function__TelloAction_Event__response,  // get_const(index) function pointer
    tello_msgs__srv__TelloAction_Event__rosidl_typesupport_introspection_c__get_function__TelloAction_Event__response,  // get(index) function pointer
    tello_msgs__srv__TelloAction_Event__rosidl_typesupport_introspection_c__fetch_function__TelloAction_Event__response,  // fetch(index, &value) function pointer
    tello_msgs__srv__TelloAction_Event__rosidl_typesupport_introspection_c__assign_function__TelloAction_Event__response,  // assign(index, value) function pointer
    tello_msgs__srv__TelloAction_Event__rosidl_typesupport_introspection_c__resize_function__TelloAction_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tello_msgs__srv__TelloAction_Event__rosidl_typesupport_introspection_c__TelloAction_Event_message_members = {
  "tello_msgs__srv",  // message namespace
  "TelloAction_Event",  // message name
  3,  // number of fields
  sizeof(tello_msgs__srv__TelloAction_Event),
  false,  // has_any_key_member_
  tello_msgs__srv__TelloAction_Event__rosidl_typesupport_introspection_c__TelloAction_Event_message_member_array,  // message members
  tello_msgs__srv__TelloAction_Event__rosidl_typesupport_introspection_c__TelloAction_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  tello_msgs__srv__TelloAction_Event__rosidl_typesupport_introspection_c__TelloAction_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tello_msgs__srv__TelloAction_Event__rosidl_typesupport_introspection_c__TelloAction_Event_message_type_support_handle = {
  0,
  &tello_msgs__srv__TelloAction_Event__rosidl_typesupport_introspection_c__TelloAction_Event_message_members,
  get_message_typesupport_handle_function,
  &tello_msgs__srv__TelloAction_Event__get_type_hash,
  &tello_msgs__srv__TelloAction_Event__get_type_description,
  &tello_msgs__srv__TelloAction_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tello_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tello_msgs, srv, TelloAction_Event)() {
  tello_msgs__srv__TelloAction_Event__rosidl_typesupport_introspection_c__TelloAction_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  tello_msgs__srv__TelloAction_Event__rosidl_typesupport_introspection_c__TelloAction_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tello_msgs, srv, TelloAction_Request)();
  tello_msgs__srv__TelloAction_Event__rosidl_typesupport_introspection_c__TelloAction_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tello_msgs, srv, TelloAction_Response)();
  if (!tello_msgs__srv__TelloAction_Event__rosidl_typesupport_introspection_c__TelloAction_Event_message_type_support_handle.typesupport_identifier) {
    tello_msgs__srv__TelloAction_Event__rosidl_typesupport_introspection_c__TelloAction_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tello_msgs__srv__TelloAction_Event__rosidl_typesupport_introspection_c__TelloAction_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "tello_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "tello_msgs/srv/detail/tello_action__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers tello_msgs__srv__detail__tello_action__rosidl_typesupport_introspection_c__TelloAction_service_members = {
  "tello_msgs__srv",  // service namespace
  "TelloAction",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // tello_msgs__srv__detail__tello_action__rosidl_typesupport_introspection_c__TelloAction_Request_message_type_support_handle,
  NULL,  // response message
  // tello_msgs__srv__detail__tello_action__rosidl_typesupport_introspection_c__TelloAction_Response_message_type_support_handle
  NULL  // event_message
  // tello_msgs__srv__detail__tello_action__rosidl_typesupport_introspection_c__TelloAction_Response_message_type_support_handle
};


static rosidl_service_type_support_t tello_msgs__srv__detail__tello_action__rosidl_typesupport_introspection_c__TelloAction_service_type_support_handle = {
  0,
  &tello_msgs__srv__detail__tello_action__rosidl_typesupport_introspection_c__TelloAction_service_members,
  get_service_typesupport_handle_function,
  &tello_msgs__srv__TelloAction_Request__rosidl_typesupport_introspection_c__TelloAction_Request_message_type_support_handle,
  &tello_msgs__srv__TelloAction_Response__rosidl_typesupport_introspection_c__TelloAction_Response_message_type_support_handle,
  &tello_msgs__srv__TelloAction_Event__rosidl_typesupport_introspection_c__TelloAction_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    tello_msgs,
    srv,
    TelloAction
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    tello_msgs,
    srv,
    TelloAction
  ),
  &tello_msgs__srv__TelloAction__get_type_hash,
  &tello_msgs__srv__TelloAction__get_type_description,
  &tello_msgs__srv__TelloAction__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tello_msgs, srv, TelloAction_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tello_msgs, srv, TelloAction_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tello_msgs, srv, TelloAction_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tello_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tello_msgs, srv, TelloAction)(void) {
  if (!tello_msgs__srv__detail__tello_action__rosidl_typesupport_introspection_c__TelloAction_service_type_support_handle.typesupport_identifier) {
    tello_msgs__srv__detail__tello_action__rosidl_typesupport_introspection_c__TelloAction_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)tello_msgs__srv__detail__tello_action__rosidl_typesupport_introspection_c__TelloAction_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tello_msgs, srv, TelloAction_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tello_msgs, srv, TelloAction_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tello_msgs, srv, TelloAction_Event)()->data;
  }

  return &tello_msgs__srv__detail__tello_action__rosidl_typesupport_introspection_c__TelloAction_service_type_support_handle;
}
