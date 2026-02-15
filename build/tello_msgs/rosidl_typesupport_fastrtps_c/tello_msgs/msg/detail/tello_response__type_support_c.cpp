// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from tello_msgs:msg/TelloResponse.idl
// generated code does not contain a copyright notice
#include "tello_msgs/msg/detail/tello_response__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "tello_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tello_msgs/msg/detail/tello_response__struct.h"
#include "tello_msgs/msg/detail/tello_response__functions.h"
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

#include "rosidl_runtime_c/string.h"  // str
#include "rosidl_runtime_c/string_functions.h"  // str

// forward declare type support functions


using _TelloResponse__ros_msg_type = tello_msgs__msg__TelloResponse;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tello_msgs
bool cdr_serialize_tello_msgs__msg__TelloResponse(
  const tello_msgs__msg__TelloResponse * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: rc
  {
    cdr << ros_message->rc;
  }

  // Field name: str
  {
    const rosidl_runtime_c__String * str = &ros_message->str;
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

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tello_msgs
bool cdr_deserialize_tello_msgs__msg__TelloResponse(
  eprosima::fastcdr::Cdr & cdr,
  tello_msgs__msg__TelloResponse * ros_message)
{
  // Field name: rc
  {
    cdr >> ros_message->rc;
  }

  // Field name: str
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->str.data) {
      rosidl_runtime_c__String__init(&ros_message->str);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->str,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'str'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tello_msgs
size_t get_serialized_size_tello_msgs__msg__TelloResponse(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TelloResponse__ros_msg_type * ros_message = static_cast<const _TelloResponse__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: rc
  {
    size_t item_size = sizeof(ros_message->rc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: str
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->str.size + 1);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tello_msgs
size_t max_serialized_size_tello_msgs__msg__TelloResponse(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: rc
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: str
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = tello_msgs__msg__TelloResponse;
    is_plain =
      (
      offsetof(DataType, str) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tello_msgs
bool cdr_serialize_key_tello_msgs__msg__TelloResponse(
  const tello_msgs__msg__TelloResponse * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: rc
  {
    cdr << ros_message->rc;
  }

  // Field name: str
  {
    const rosidl_runtime_c__String * str = &ros_message->str;
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

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tello_msgs
size_t get_serialized_size_key_tello_msgs__msg__TelloResponse(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TelloResponse__ros_msg_type * ros_message = static_cast<const _TelloResponse__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: rc
  {
    size_t item_size = sizeof(ros_message->rc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: str
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->str.size + 1);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tello_msgs
size_t max_serialized_size_key_tello_msgs__msg__TelloResponse(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: rc
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: str
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = tello_msgs__msg__TelloResponse;
    is_plain =
      (
      offsetof(DataType, str) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _TelloResponse__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const tello_msgs__msg__TelloResponse * ros_message = static_cast<const tello_msgs__msg__TelloResponse *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_tello_msgs__msg__TelloResponse(ros_message, cdr);
}

static bool _TelloResponse__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  tello_msgs__msg__TelloResponse * ros_message = static_cast<tello_msgs__msg__TelloResponse *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_tello_msgs__msg__TelloResponse(cdr, ros_message);
}

static uint32_t _TelloResponse__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tello_msgs__msg__TelloResponse(
      untyped_ros_message, 0));
}

static size_t _TelloResponse__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_tello_msgs__msg__TelloResponse(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_TelloResponse = {
  "tello_msgs::msg",
  "TelloResponse",
  _TelloResponse__cdr_serialize,
  _TelloResponse__cdr_deserialize,
  _TelloResponse__get_serialized_size,
  _TelloResponse__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _TelloResponse__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TelloResponse,
  get_message_typesupport_handle_function,
  &tello_msgs__msg__TelloResponse__get_type_hash,
  &tello_msgs__msg__TelloResponse__get_type_description,
  &tello_msgs__msg__TelloResponse__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tello_msgs, msg, TelloResponse)() {
  return &_TelloResponse__type_support;
}

#if defined(__cplusplus)
}
#endif
