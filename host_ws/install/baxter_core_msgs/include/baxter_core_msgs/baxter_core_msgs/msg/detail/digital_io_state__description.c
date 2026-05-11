// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from baxter_core_msgs:msg/DigitalIOState.idl
// generated code does not contain a copyright notice

#include "baxter_core_msgs/msg/detail/digital_io_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_baxter_core_msgs
const rosidl_type_hash_t *
baxter_core_msgs__msg__DigitalIOState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x61, 0xda, 0xa7, 0x3d, 0x62, 0xde, 0xa7, 0xc0,
      0x76, 0x98, 0x14, 0xa0, 0xd7, 0x74, 0x18, 0x12,
      0x7e, 0x18, 0x05, 0xe2, 0x49, 0xf6, 0x7d, 0x04,
      0x95, 0x63, 0x9c, 0x78, 0x0d, 0xc4, 0xaf, 0x51,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char baxter_core_msgs__msg__DigitalIOState__TYPE_NAME[] = "baxter_core_msgs/msg/DigitalIOState";

// Define type names, field names, and default values
static char baxter_core_msgs__msg__DigitalIOState__FIELD_NAME__state[] = "state";
static char baxter_core_msgs__msg__DigitalIOState__FIELD_NAME__is_input_only[] = "is_input_only";

static rosidl_runtime_c__type_description__Field baxter_core_msgs__msg__DigitalIOState__FIELDS[] = {
  {
    {baxter_core_msgs__msg__DigitalIOState__FIELD_NAME__state, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {baxter_core_msgs__msg__DigitalIOState__FIELD_NAME__is_input_only, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
baxter_core_msgs__msg__DigitalIOState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {baxter_core_msgs__msg__DigitalIOState__TYPE_NAME, 35, 35},
      {baxter_core_msgs__msg__DigitalIOState__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int8 state\n"
  "bool is_input_only\n"
  "\n"
  "int8 OFF = 0\n"
  "int8 ON  = 1\n"
  "int8 PRESSED = 1\n"
  "int8 UNPRESSED = 0";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
baxter_core_msgs__msg__DigitalIOState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {baxter_core_msgs__msg__DigitalIOState__TYPE_NAME, 35, 35},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 92, 92},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
baxter_core_msgs__msg__DigitalIOState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *baxter_core_msgs__msg__DigitalIOState__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
