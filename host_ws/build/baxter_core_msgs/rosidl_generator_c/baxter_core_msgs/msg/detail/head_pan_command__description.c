// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from baxter_core_msgs:msg/HeadPanCommand.idl
// generated code does not contain a copyright notice

#include "baxter_core_msgs/msg/detail/head_pan_command__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_baxter_core_msgs
const rosidl_type_hash_t *
baxter_core_msgs__msg__HeadPanCommand__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x57, 0x81, 0x1d, 0x5c, 0x59, 0x07, 0x1b, 0x38,
      0x7d, 0x03, 0x4b, 0x22, 0x73, 0x93, 0x70, 0x6a,
      0x0f, 0x34, 0xd4, 0x78, 0x39, 0xfd, 0x14, 0xbf,
      0x91, 0xdd, 0x92, 0x80, 0x7d, 0x32, 0xa8, 0x8b,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char baxter_core_msgs__msg__HeadPanCommand__TYPE_NAME[] = "baxter_core_msgs/msg/HeadPanCommand";

// Define type names, field names, and default values
static char baxter_core_msgs__msg__HeadPanCommand__FIELD_NAME__target[] = "target";
static char baxter_core_msgs__msg__HeadPanCommand__FIELD_NAME__speed_ratio[] = "speed_ratio";
static char baxter_core_msgs__msg__HeadPanCommand__FIELD_NAME__enable_pan_request[] = "enable_pan_request";

static rosidl_runtime_c__type_description__Field baxter_core_msgs__msg__HeadPanCommand__FIELDS[] = {
  {
    {baxter_core_msgs__msg__HeadPanCommand__FIELD_NAME__target, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {baxter_core_msgs__msg__HeadPanCommand__FIELD_NAME__speed_ratio, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {baxter_core_msgs__msg__HeadPanCommand__FIELD_NAME__enable_pan_request, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
baxter_core_msgs__msg__HeadPanCommand__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {baxter_core_msgs__msg__HeadPanCommand__TYPE_NAME, 35, 35},
      {baxter_core_msgs__msg__HeadPanCommand__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32 target              # radians for target, 0 str\n"
  "float32 speed_ratio         # Percentage of max speed [0-1]\n"
  "#\n"
  "float32 MAX_SPEED_RATIO = 1.0\n"
  "float32 MIN_SPEED_RATIO = 0.0\n"
  "#\n"
  "uint8   enable_pan_request  # override automatic pan enable/disable\n"
  "# enable_pan_request is tristate: 0 = disable pan; 1 = enable pan; 2 = don't change pan\n"
  "uint8   REQUEST_PAN_DISABLE = 0\n"
  "uint8   REQUEST_PAN_ENABLE = 1\n"
  "uint8   REQUEST_PAN_VOID = 2\n"
  "#";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
baxter_core_msgs__msg__HeadPanCommand__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {baxter_core_msgs__msg__HeadPanCommand__TYPE_NAME, 35, 35},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 430, 430},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
baxter_core_msgs__msg__HeadPanCommand__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *baxter_core_msgs__msg__HeadPanCommand__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
