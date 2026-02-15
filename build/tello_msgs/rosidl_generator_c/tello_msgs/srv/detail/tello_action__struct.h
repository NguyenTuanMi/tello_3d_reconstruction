// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tello_msgs:srv/TelloAction.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "tello_msgs/srv/tello_action.h"


#ifndef TELLO_MSGS__SRV__DETAIL__TELLO_ACTION__STRUCT_H_
#define TELLO_MSGS__SRV__DETAIL__TELLO_ACTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'cmd'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/TelloAction in the package tello_msgs.
typedef struct tello_msgs__srv__TelloAction_Request
{
  rosidl_runtime_c__String cmd;
} tello_msgs__srv__TelloAction_Request;

// Struct for a sequence of tello_msgs__srv__TelloAction_Request.
typedef struct tello_msgs__srv__TelloAction_Request__Sequence
{
  tello_msgs__srv__TelloAction_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tello_msgs__srv__TelloAction_Request__Sequence;

// Constants defined in the message

/// Constant 'OK'.
/**
  * Command sent
 */
enum
{
  tello_msgs__srv__TelloAction_Response__OK = 1
};

/// Constant 'ERROR_NOT_CONNECTED'.
/**
  * Can't communicate with drone
 */
enum
{
  tello_msgs__srv__TelloAction_Response__ERROR_NOT_CONNECTED = 2
};

/// Constant 'ERROR_BUSY'.
/**
  * There's already an active command
 */
enum
{
  tello_msgs__srv__TelloAction_Response__ERROR_BUSY = 3
};

/// Struct defined in srv/TelloAction in the package tello_msgs.
typedef struct tello_msgs__srv__TelloAction_Response
{
  uint8_t rc;
} tello_msgs__srv__TelloAction_Response;

// Struct for a sequence of tello_msgs__srv__TelloAction_Response.
typedef struct tello_msgs__srv__TelloAction_Response__Sequence
{
  tello_msgs__srv__TelloAction_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tello_msgs__srv__TelloAction_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  tello_msgs__srv__TelloAction_Event__request__MAX_SIZE = 1
};
// response
enum
{
  tello_msgs__srv__TelloAction_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/TelloAction in the package tello_msgs.
typedef struct tello_msgs__srv__TelloAction_Event
{
  service_msgs__msg__ServiceEventInfo info;
  tello_msgs__srv__TelloAction_Request__Sequence request;
  tello_msgs__srv__TelloAction_Response__Sequence response;
} tello_msgs__srv__TelloAction_Event;

// Struct for a sequence of tello_msgs__srv__TelloAction_Event.
typedef struct tello_msgs__srv__TelloAction_Event__Sequence
{
  tello_msgs__srv__TelloAction_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tello_msgs__srv__TelloAction_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TELLO_MSGS__SRV__DETAIL__TELLO_ACTION__STRUCT_H_
