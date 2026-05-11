// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from baxter_core_msgs:msg/JointCommand.idl
// generated code does not contain a copyright notice

#include "baxter_core_msgs/msg/detail/joint_command__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_baxter_core_msgs
const rosidl_type_hash_t *
baxter_core_msgs__msg__JointCommand__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xfe, 0xd0, 0x50, 0x99, 0x76, 0x4b, 0x61, 0xfb,
      0x2a, 0xa3, 0x30, 0x1c, 0x13, 0x7a, 0x02, 0x83,
      0x1d, 0x96, 0xd3, 0xd9, 0x17, 0x18, 0x78, 0x85,
      0x37, 0x63, 0x2a, 0x45, 0x47, 0x6e, 0x38, 0x31,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char baxter_core_msgs__msg__JointCommand__TYPE_NAME[] = "baxter_core_msgs/msg/JointCommand";

// Define type names, field names, and default values
static char baxter_core_msgs__msg__JointCommand__FIELD_NAME__mode[] = "mode";
static char baxter_core_msgs__msg__JointCommand__FIELD_NAME__command[] = "command";
static char baxter_core_msgs__msg__JointCommand__FIELD_NAME__names[] = "names";

static rosidl_runtime_c__type_description__Field baxter_core_msgs__msg__JointCommand__FIELDS[] = {
  {
    {baxter_core_msgs__msg__JointCommand__FIELD_NAME__mode, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {baxter_core_msgs__msg__JointCommand__FIELD_NAME__command, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {baxter_core_msgs__msg__JointCommand__FIELD_NAME__names, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
baxter_core_msgs__msg__JointCommand__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {baxter_core_msgs__msg__JointCommand__TYPE_NAME, 33, 33},
      {baxter_core_msgs__msg__JointCommand__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int32 mode\n"
  "float64[] command\n"
  "string[]  names\n"
  "\n"
  "int32 POSITION_MODE=1\n"
  "int32 VELOCITY_MODE=2\n"
  "int32 TORQUE_MODE=3\n"
  "int32 RAW_POSITION_MODE=4";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
baxter_core_msgs__msg__JointCommand__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {baxter_core_msgs__msg__JointCommand__TYPE_NAME, 33, 33},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 135, 135},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
baxter_core_msgs__msg__JointCommand__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *baxter_core_msgs__msg__JointCommand__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
