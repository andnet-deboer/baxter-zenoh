// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from baxter_core_msgs:msg/RobustControllerStatus.idl
// generated code does not contain a copyright notice

#include "baxter_core_msgs/msg/detail/robust_controller_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_baxter_core_msgs
const rosidl_type_hash_t *
baxter_core_msgs__msg__RobustControllerStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xfa, 0xf4, 0x28, 0x74, 0x25, 0xab, 0x16, 0x63,
      0x2e, 0xc6, 0x12, 0x43, 0xf3, 0x39, 0x9b, 0x32,
      0x56, 0x4d, 0xdd, 0x52, 0x5c, 0x5b, 0xca, 0xb0,
      0x12, 0xa4, 0xd9, 0x07, 0x96, 0xe8, 0xd0, 0x85,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char baxter_core_msgs__msg__RobustControllerStatus__TYPE_NAME[] = "baxter_core_msgs/msg/RobustControllerStatus";

// Define type names, field names, and default values
static char baxter_core_msgs__msg__RobustControllerStatus__FIELD_NAME__is_enabled[] = "is_enabled";
static char baxter_core_msgs__msg__RobustControllerStatus__FIELD_NAME__complete[] = "complete";
static char baxter_core_msgs__msg__RobustControllerStatus__FIELD_NAME__control_uid[] = "control_uid";
static char baxter_core_msgs__msg__RobustControllerStatus__FIELD_NAME__timed_out[] = "timed_out";
static char baxter_core_msgs__msg__RobustControllerStatus__FIELD_NAME__error_codes[] = "error_codes";
static char baxter_core_msgs__msg__RobustControllerStatus__FIELD_NAME__labels[] = "labels";

static rosidl_runtime_c__type_description__Field baxter_core_msgs__msg__RobustControllerStatus__FIELDS[] = {
  {
    {baxter_core_msgs__msg__RobustControllerStatus__FIELD_NAME__is_enabled, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {baxter_core_msgs__msg__RobustControllerStatus__FIELD_NAME__complete, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {baxter_core_msgs__msg__RobustControllerStatus__FIELD_NAME__control_uid, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {baxter_core_msgs__msg__RobustControllerStatus__FIELD_NAME__timed_out, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {baxter_core_msgs__msg__RobustControllerStatus__FIELD_NAME__error_codes, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {baxter_core_msgs__msg__RobustControllerStatus__FIELD_NAME__labels, 6, 6},
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
baxter_core_msgs__msg__RobustControllerStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {baxter_core_msgs__msg__RobustControllerStatus__TYPE_NAME, 43, 43},
      {baxter_core_msgs__msg__RobustControllerStatus__FIELDS, 6, 6},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# True if the RC is enabled and running, false if not.\n"
  "bool is_enabled\n"
  "\n"
  "# The state of the RC with respect to its completion goal.  One of\n"
  "# NOT_COMPLETE, COMPLETE_W_FAILURE, or COMPLETE_W_SUCCESS\n"
  "int32 complete\n"
  "int32 NOT_COMPLETE = 0\n"
  "int32 COMPLETE_W_FAILURE = 1\n"
  "int32 COMPLETE_W_SUCCESS = 2\n"
  "\n"
  "# Identifies the sender of the Enable message that the RC is using for its\n"
  "# commands.  This should correspond to the \"uid\" field of a recently published\n"
  "# RC *Enable message.\n"
  "string control_uid\n"
  "\n"
  "# Set to true when the RC self-disables as a result of too much time elapsing\n"
  "# without receiving an Enable message.\n"
  "bool timed_out\n"
  "\n"
  "# A list of relevant error codes.  Error codes are defined by the individual\n"
  "# robust controllers, consult a robust controller's documentation to see what\n"
  "# error codes it generates.\n"
  "string[] error_codes\n"
  "\n"
  "# A list of current labels for the RC\\'s current state. For example, \"fastapproach\",\n"
  "# \"slowapproach\", etc. Used primarily for the blended RCs, other RCs can leave this\n"
  "# blank. This will probably contains just one label, but it could contain multiple labels\n"
  "# in the future.\n"
  "string[] labels";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
baxter_core_msgs__msg__RobustControllerStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {baxter_core_msgs__msg__RobustControllerStatus__TYPE_NAME, 43, 43},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1119, 1119},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
baxter_core_msgs__msg__RobustControllerStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *baxter_core_msgs__msg__RobustControllerStatus__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
