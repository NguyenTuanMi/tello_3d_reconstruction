// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from tello_msgs:msg/FlightData.idl
// generated code does not contain a copyright notice

#include "tello_msgs/msg/detail/flight_data__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_tello_msgs
const rosidl_type_hash_t *
tello_msgs__msg__FlightData__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x30, 0xa1, 0x4c, 0xaa, 0x87, 0x3b, 0x6b, 0x5f,
      0xdc, 0xc3, 0x8a, 0xc5, 0x31, 0xde, 0xfe, 0xb6,
      0xee, 0x30, 0x7b, 0xc9, 0x4a, 0x1d, 0xcf, 0x1f,
      0x2d, 0x66, 0x42, 0x1b, 0xda, 0xe8, 0x00, 0x1c,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "std_msgs/msg/detail/header__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char tello_msgs__msg__FlightData__TYPE_NAME[] = "tello_msgs/msg/FlightData";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char tello_msgs__msg__FlightData__FIELD_NAME__header[] = "header";
static char tello_msgs__msg__FlightData__FIELD_NAME__raw[] = "raw";
static char tello_msgs__msg__FlightData__FIELD_NAME__sdk[] = "sdk";
static char tello_msgs__msg__FlightData__FIELD_NAME__pitch[] = "pitch";
static char tello_msgs__msg__FlightData__FIELD_NAME__roll[] = "roll";
static char tello_msgs__msg__FlightData__FIELD_NAME__yaw[] = "yaw";
static char tello_msgs__msg__FlightData__FIELD_NAME__vgx[] = "vgx";
static char tello_msgs__msg__FlightData__FIELD_NAME__vgy[] = "vgy";
static char tello_msgs__msg__FlightData__FIELD_NAME__vgz[] = "vgz";
static char tello_msgs__msg__FlightData__FIELD_NAME__templ[] = "templ";
static char tello_msgs__msg__FlightData__FIELD_NAME__temph[] = "temph";
static char tello_msgs__msg__FlightData__FIELD_NAME__tof[] = "tof";
static char tello_msgs__msg__FlightData__FIELD_NAME__h[] = "h";
static char tello_msgs__msg__FlightData__FIELD_NAME__bat[] = "bat";
static char tello_msgs__msg__FlightData__FIELD_NAME__baro[] = "baro";
static char tello_msgs__msg__FlightData__FIELD_NAME__time[] = "time";
static char tello_msgs__msg__FlightData__FIELD_NAME__agx[] = "agx";
static char tello_msgs__msg__FlightData__FIELD_NAME__agy[] = "agy";
static char tello_msgs__msg__FlightData__FIELD_NAME__agz[] = "agz";
static char tello_msgs__msg__FlightData__FIELD_NAME__mid[] = "mid";
static char tello_msgs__msg__FlightData__FIELD_NAME__x[] = "x";
static char tello_msgs__msg__FlightData__FIELD_NAME__y[] = "y";
static char tello_msgs__msg__FlightData__FIELD_NAME__z[] = "z";

static rosidl_runtime_c__type_description__Field tello_msgs__msg__FlightData__FIELDS[] = {
  {
    {tello_msgs__msg__FlightData__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {tello_msgs__msg__FlightData__FIELD_NAME__raw, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {tello_msgs__msg__FlightData__FIELD_NAME__sdk, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {tello_msgs__msg__FlightData__FIELD_NAME__pitch, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {tello_msgs__msg__FlightData__FIELD_NAME__roll, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {tello_msgs__msg__FlightData__FIELD_NAME__yaw, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {tello_msgs__msg__FlightData__FIELD_NAME__vgx, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {tello_msgs__msg__FlightData__FIELD_NAME__vgy, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {tello_msgs__msg__FlightData__FIELD_NAME__vgz, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {tello_msgs__msg__FlightData__FIELD_NAME__templ, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {tello_msgs__msg__FlightData__FIELD_NAME__temph, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {tello_msgs__msg__FlightData__FIELD_NAME__tof, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {tello_msgs__msg__FlightData__FIELD_NAME__h, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {tello_msgs__msg__FlightData__FIELD_NAME__bat, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {tello_msgs__msg__FlightData__FIELD_NAME__baro, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {tello_msgs__msg__FlightData__FIELD_NAME__time, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {tello_msgs__msg__FlightData__FIELD_NAME__agx, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {tello_msgs__msg__FlightData__FIELD_NAME__agy, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {tello_msgs__msg__FlightData__FIELD_NAME__agz, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {tello_msgs__msg__FlightData__FIELD_NAME__mid, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {tello_msgs__msg__FlightData__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {tello_msgs__msg__FlightData__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {tello_msgs__msg__FlightData__FIELD_NAME__z, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription tello_msgs__msg__FlightData__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
tello_msgs__msg__FlightData__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {tello_msgs__msg__FlightData__TYPE_NAME, 25, 25},
      {tello_msgs__msg__FlightData__FIELDS, 23, 23},
    },
    {tello_msgs__msg__FlightData__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "std_msgs/Header header\n"
  "\n"
  "#######\n"
  "# Raw string\n"
  "#######\n"
  "\n"
  "string raw\n"
  "\n"
  "#######\n"
  "# SDK version\n"
  "#######\n"
  "\n"
  "uint8 SDK_UNKNOWN=0\n"
  "uint8 SDK_1_3=1\n"
  "uint8 SDK_2_0=2\n"
  "uint8 sdk\n"
  "\n"
  "#######\n"
  "# SDK 1.3+ fields\n"
  "#######\n"
  "\n"
  "int32 pitch   # pitch in degrees\n"
  "int32 roll    # roll in degrees\n"
  "int32 yaw     # yaw in degrees relative to startup orientation\n"
  "\n"
  "int32 vgx     # x velocity in m/s, +forward\n"
  "int32 vgy     # y velocity in m/s, +right\n"
  "int32 vgz     # z velocity in m/s, +down\n"
  "\n"
  "int32 templ   # lowest temp in C\n"
  "int32 temph   # highest temp in C\n"
  "\n"
  "int32 tof     # time of flight distance in cm\n"
  "int32 h       # height in cm\n"
  "\n"
  "int32 bat     # battery %\n"
  "\n"
  "float32 baro  # barometric altitude in m\n"
  "int32 time    # time used by motor in seconds\n"
  "\n"
  "# Acceleration includes gravity\n"
  "float32 agx   # x acceleration in mm/s^2, +forward\n"
  "float32 agy   # y acceleration in mm/s^2, +right\n"
  "float32 agz   # z acceleration in mm/s^2, +down\n"
  "\n"
  "#######\n"
  "# SDK 2.0+ fields\n"
  "#######\n"
  "\n"
  "int32 mid     # mission pad id, or -1 if not found\n"
  "int32 x       # x coord relative to mission pad in cm, or 0 if not found\n"
  "int32 y       # y coord relative to mission pad in cm, or 0 if not found\n"
  "int32 z       # z coord relative to mission pad in cm, or 0 if not found";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
tello_msgs__msg__FlightData__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {tello_msgs__msg__FlightData__TYPE_NAME, 25, 25},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1196, 1196},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
tello_msgs__msg__FlightData__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *tello_msgs__msg__FlightData__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
