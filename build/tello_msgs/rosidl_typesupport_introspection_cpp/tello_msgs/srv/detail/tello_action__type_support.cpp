// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from tello_msgs:srv/TelloAction.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "tello_msgs/srv/detail/tello_action__functions.h"
#include "tello_msgs/srv/detail/tello_action__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace tello_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void TelloAction_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) tello_msgs::srv::TelloAction_Request(_init);
}

void TelloAction_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<tello_msgs::srv::TelloAction_Request *>(message_memory);
  typed_message->~TelloAction_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TelloAction_Request_message_member_array[1] = {
  {
    "cmd",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tello_msgs::srv::TelloAction_Request, cmd),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TelloAction_Request_message_members = {
  "tello_msgs::srv",  // message namespace
  "TelloAction_Request",  // message name
  1,  // number of fields
  sizeof(tello_msgs::srv::TelloAction_Request),
  false,  // has_any_key_member_
  TelloAction_Request_message_member_array,  // message members
  TelloAction_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  TelloAction_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TelloAction_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TelloAction_Request_message_members,
  get_message_typesupport_handle_function,
  &tello_msgs__srv__TelloAction_Request__get_type_hash,
  &tello_msgs__srv__TelloAction_Request__get_type_description,
  &tello_msgs__srv__TelloAction_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace tello_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<tello_msgs::srv::TelloAction_Request>()
{
  return &::tello_msgs::srv::rosidl_typesupport_introspection_cpp::TelloAction_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tello_msgs, srv, TelloAction_Request)() {
  return &::tello_msgs::srv::rosidl_typesupport_introspection_cpp::TelloAction_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "tello_msgs/srv/detail/tello_action__functions.h"
// already included above
// #include "tello_msgs/srv/detail/tello_action__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace tello_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void TelloAction_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) tello_msgs::srv::TelloAction_Response(_init);
}

void TelloAction_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<tello_msgs::srv::TelloAction_Response *>(message_memory);
  typed_message->~TelloAction_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TelloAction_Response_message_member_array[1] = {
  {
    "rc",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tello_msgs::srv::TelloAction_Response, rc),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TelloAction_Response_message_members = {
  "tello_msgs::srv",  // message namespace
  "TelloAction_Response",  // message name
  1,  // number of fields
  sizeof(tello_msgs::srv::TelloAction_Response),
  false,  // has_any_key_member_
  TelloAction_Response_message_member_array,  // message members
  TelloAction_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  TelloAction_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TelloAction_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TelloAction_Response_message_members,
  get_message_typesupport_handle_function,
  &tello_msgs__srv__TelloAction_Response__get_type_hash,
  &tello_msgs__srv__TelloAction_Response__get_type_description,
  &tello_msgs__srv__TelloAction_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace tello_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<tello_msgs::srv::TelloAction_Response>()
{
  return &::tello_msgs::srv::rosidl_typesupport_introspection_cpp::TelloAction_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tello_msgs, srv, TelloAction_Response)() {
  return &::tello_msgs::srv::rosidl_typesupport_introspection_cpp::TelloAction_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "tello_msgs/srv/detail/tello_action__functions.h"
// already included above
// #include "tello_msgs/srv/detail/tello_action__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace tello_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void TelloAction_Event_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) tello_msgs::srv::TelloAction_Event(_init);
}

void TelloAction_Event_fini_function(void * message_memory)
{
  auto typed_message = static_cast<tello_msgs::srv::TelloAction_Event *>(message_memory);
  typed_message->~TelloAction_Event();
}

size_t size_function__TelloAction_Event__request(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<tello_msgs::srv::TelloAction_Request> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TelloAction_Event__request(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<tello_msgs::srv::TelloAction_Request> *>(untyped_member);
  return &member[index];
}

void * get_function__TelloAction_Event__request(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<tello_msgs::srv::TelloAction_Request> *>(untyped_member);
  return &member[index];
}

void fetch_function__TelloAction_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const tello_msgs::srv::TelloAction_Request *>(
    get_const_function__TelloAction_Event__request(untyped_member, index));
  auto & value = *reinterpret_cast<tello_msgs::srv::TelloAction_Request *>(untyped_value);
  value = item;
}

void assign_function__TelloAction_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<tello_msgs::srv::TelloAction_Request *>(
    get_function__TelloAction_Event__request(untyped_member, index));
  const auto & value = *reinterpret_cast<const tello_msgs::srv::TelloAction_Request *>(untyped_value);
  item = value;
}

void resize_function__TelloAction_Event__request(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<tello_msgs::srv::TelloAction_Request> *>(untyped_member);
  member->resize(size);
}

size_t size_function__TelloAction_Event__response(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<tello_msgs::srv::TelloAction_Response> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TelloAction_Event__response(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<tello_msgs::srv::TelloAction_Response> *>(untyped_member);
  return &member[index];
}

void * get_function__TelloAction_Event__response(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<tello_msgs::srv::TelloAction_Response> *>(untyped_member);
  return &member[index];
}

void fetch_function__TelloAction_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const tello_msgs::srv::TelloAction_Response *>(
    get_const_function__TelloAction_Event__response(untyped_member, index));
  auto & value = *reinterpret_cast<tello_msgs::srv::TelloAction_Response *>(untyped_value);
  value = item;
}

void assign_function__TelloAction_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<tello_msgs::srv::TelloAction_Response *>(
    get_function__TelloAction_Event__response(untyped_member, index));
  const auto & value = *reinterpret_cast<const tello_msgs::srv::TelloAction_Response *>(untyped_value);
  item = value;
}

void resize_function__TelloAction_Event__response(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<tello_msgs::srv::TelloAction_Response> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TelloAction_Event_message_member_array[3] = {
  {
    "info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<service_msgs::msg::ServiceEventInfo>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tello_msgs::srv::TelloAction_Event, info),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "request",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<tello_msgs::srv::TelloAction_Request>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(tello_msgs::srv::TelloAction_Event, request),  // bytes offset in struct
    nullptr,  // default value
    size_function__TelloAction_Event__request,  // size() function pointer
    get_const_function__TelloAction_Event__request,  // get_const(index) function pointer
    get_function__TelloAction_Event__request,  // get(index) function pointer
    fetch_function__TelloAction_Event__request,  // fetch(index, &value) function pointer
    assign_function__TelloAction_Event__request,  // assign(index, value) function pointer
    resize_function__TelloAction_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<tello_msgs::srv::TelloAction_Response>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(tello_msgs::srv::TelloAction_Event, response),  // bytes offset in struct
    nullptr,  // default value
    size_function__TelloAction_Event__response,  // size() function pointer
    get_const_function__TelloAction_Event__response,  // get_const(index) function pointer
    get_function__TelloAction_Event__response,  // get(index) function pointer
    fetch_function__TelloAction_Event__response,  // fetch(index, &value) function pointer
    assign_function__TelloAction_Event__response,  // assign(index, value) function pointer
    resize_function__TelloAction_Event__response  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TelloAction_Event_message_members = {
  "tello_msgs::srv",  // message namespace
  "TelloAction_Event",  // message name
  3,  // number of fields
  sizeof(tello_msgs::srv::TelloAction_Event),
  false,  // has_any_key_member_
  TelloAction_Event_message_member_array,  // message members
  TelloAction_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  TelloAction_Event_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TelloAction_Event_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TelloAction_Event_message_members,
  get_message_typesupport_handle_function,
  &tello_msgs__srv__TelloAction_Event__get_type_hash,
  &tello_msgs__srv__TelloAction_Event__get_type_description,
  &tello_msgs__srv__TelloAction_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace tello_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<tello_msgs::srv::TelloAction_Event>()
{
  return &::tello_msgs::srv::rosidl_typesupport_introspection_cpp::TelloAction_Event_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tello_msgs, srv, TelloAction_Event)() {
  return &::tello_msgs::srv::rosidl_typesupport_introspection_cpp::TelloAction_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "tello_msgs/srv/detail/tello_action__functions.h"
// already included above
// #include "tello_msgs/srv/detail/tello_action__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace tello_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers TelloAction_service_members = {
  "tello_msgs::srv",  // service namespace
  "TelloAction",  // service name
  // the following fields are initialized below on first access
  // see get_service_type_support_handle<tello_msgs::srv::TelloAction>()
  nullptr,  // request message
  nullptr,  // response message
  nullptr,  // event message
};

static const rosidl_service_type_support_t TelloAction_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TelloAction_service_members,
  get_service_typesupport_handle_function,
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<tello_msgs::srv::TelloAction_Request>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<tello_msgs::srv::TelloAction_Response>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<tello_msgs::srv::TelloAction_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<tello_msgs::srv::TelloAction>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<tello_msgs::srv::TelloAction>,
  &tello_msgs__srv__TelloAction__get_type_hash,
  &tello_msgs__srv__TelloAction__get_type_description,
  &tello_msgs__srv__TelloAction__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace tello_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<tello_msgs::srv::TelloAction>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::tello_msgs::srv::rosidl_typesupport_introspection_cpp::TelloAction_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure all of the service_members are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr ||
    service_members->event_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::tello_msgs::srv::TelloAction_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::tello_msgs::srv::TelloAction_Response
      >()->data
      );
    // initialize the event_members_ with the static function from the external library
    service_members->event_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::tello_msgs::srv::TelloAction_Event
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tello_msgs, srv, TelloAction)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<tello_msgs::srv::TelloAction>();
}

#ifdef __cplusplus
}
#endif
