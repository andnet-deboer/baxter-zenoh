// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from baxter_core_msgs:msg/HeadState.idl
// generated code does not contain a copyright notice

#include "baxter_core_msgs/msg/detail/head_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_baxter_core_msgs
const rosidl_type_hash_t *
baxter_core_msgs__msg__HeadState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x43, 0x29, 0xad, 0x50, 0x7d, 0xdf, 0x7c, 0x31,
      0xd7, 0x63, 0xcc, 0xb5, 0x7d, 0xea, 0x30, 0x30,
      0x08, 0x6c, 0x84, 0x89, 0x0f, 0xe8, 0xdd, 0xb1,
      0x2a, 0xd4, 0x84, 0x69, 0x07, 0xb9, 0x13, 0x3f,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char baxter_core_msgs__msg__HeadState__TYPE_NAME[] = "baxter_core_msgs/msg/HeadState";

// Define type names, field names, and default values
static char baxter_core_msgs__msg__HeadState__FIELD_NAME__pan[] = "pan";
static char baxter_core_msgs__msg__HeadState__FIELD_NAME__is_turning[] = "is_turning";
static char baxter_core_msgs__msg__HeadState__FIELD_NAME__is_nodding[] = "is_nodding";
static char baxter_core_msgs__msg__HeadState__FIELD_NAME__is_pan_enabled[] = "is_pan_enabled";

static rosidl_runtime_c__type_description__Field baxter_core_msgs__msg__HeadState__FIELDS[] = {
  {
    {baxter_core_msgs__msg__HeadState__FIELD_NAME__pan, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {baxter_core_msgs__msg__HeadState__FIELD_NAME__is_turning, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {baxter_core_msgs__msg__HeadState__FIELD_NAME__is_nodding, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {baxter_core_msgs__msg__HeadState__FIELD_NAME__is_pan_enabled, 14, 14},
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
baxter_core_msgs__msg__HeadState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {baxter_core_msgs__msg__HeadState__TYPE_NAME, 30, 30},
      {baxter_core_msgs__msg__HeadState__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32 pan\n"
  "bool is_turning\n"
  "bool is_nodding\n"
  "bool is_pan_enabled";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
baxter_core_msgs__msg__HeadState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {baxter_core_msgs__msg__HeadState__TYPE_NAME, 30, 30},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 64, 64},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
baxter_core_msgs__msg__HeadState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *baxter_core_msgs__msg__HeadState__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
