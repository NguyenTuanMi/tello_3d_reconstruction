// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from tello_msgs:msg/TelloResponse.idl
// generated code does not contain a copyright notice

#include "tello_msgs/msg/detail/tello_response__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_tello_msgs
const rosidl_type_hash_t *
tello_msgs__msg__TelloResponse__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf7, 0x35, 0x10, 0xd2, 0x3b, 0xb4, 0xfe, 0xe9,
      0x95, 0xc7, 0x5b, 0x49, 0xe8, 0xa8, 0xc9, 0xd1,
      0x51, 0xf1, 0xfe, 0x50, 0xdc, 0xea, 0xb8, 0x83,
      0xad, 0x68, 0x19, 0xf1, 0x9d, 0x43, 0x23, 0xcb,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char tello_msgs__msg__TelloResponse__TYPE_NAME[] = "tello_msgs/msg/TelloResponse";

// Define type names, field names, and default values
static char tello_msgs__msg__TelloResponse__FIELD_NAME__rc[] = "rc";
static char tello_msgs__msg__TelloResponse__FIELD_NAME__str[] = "str";

static rosidl_runtime_c__type_description__Field tello_msgs__msg__TelloResponse__FIELDS[] = {
  {
    {tello_msgs__msg__TelloResponse__FIELD_NAME__rc, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {tello_msgs__msg__TelloResponse__FIELD_NAME__str, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
tello_msgs__msg__TelloResponse__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {tello_msgs__msg__TelloResponse__TYPE_NAME, 28, 28},
      {tello_msgs__msg__TelloResponse__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Final response code:\n"
  "uint8 OK=1        # Response was anything except 'error'\n"
  "uint8 ERROR=2     # Response was 'error'\n"
  "uint8 TIMEOUT=3   # No response\n"
  "uint8 rc\n"
  "\n"
  "# Full text of the response:\n"
  "string str";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
tello_msgs__msg__TelloResponse__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {tello_msgs__msg__TelloResponse__TYPE_NAME, 28, 28},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 203, 203},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
tello_msgs__msg__TelloResponse__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *tello_msgs__msg__TelloResponse__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
