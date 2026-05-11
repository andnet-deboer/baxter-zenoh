// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from baxter_core_msgs:msg/NavigatorState.idl
// generated code does not contain a copyright notice

#include "baxter_core_msgs/msg/detail/navigator_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_baxter_core_msgs
const rosidl_type_hash_t *
baxter_core_msgs__msg__NavigatorState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x46, 0xeb, 0x20, 0x66, 0xd6, 0x4f, 0x05, 0x5b,
      0x28, 0xc4, 0x9a, 0x68, 0xad, 0x1d, 0xd3, 0xc0,
      0x7f, 0xf1, 0x8c, 0xed, 0xe8, 0x6e, 0x71, 0x16,
      0x0b, 0x9c, 0xc8, 0x6e, 0xc5, 0x99, 0x89, 0x9e,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char baxter_core_msgs__msg__NavigatorState__TYPE_NAME[] = "baxter_core_msgs/msg/NavigatorState";

// Define type names, field names, and default values
static char baxter_core_msgs__msg__NavigatorState__FIELD_NAME__button_names[] = "button_names";
static char baxter_core_msgs__msg__NavigatorState__FIELD_NAME__buttons[] = "buttons";
static char baxter_core_msgs__msg__NavigatorState__FIELD_NAME__wheel[] = "wheel";
static char baxter_core_msgs__msg__NavigatorState__FIELD_NAME__light_names[] = "light_names";
static char baxter_core_msgs__msg__NavigatorState__FIELD_NAME__lights[] = "lights";

static rosidl_runtime_c__type_description__Field baxter_core_msgs__msg__NavigatorState__FIELDS[] = {
  {
    {baxter_core_msgs__msg__NavigatorState__FIELD_NAME__button_names, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {baxter_core_msgs__msg__NavigatorState__FIELD_NAME__buttons, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {baxter_core_msgs__msg__NavigatorState__FIELD_NAME__wheel, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {baxter_core_msgs__msg__NavigatorState__FIELD_NAME__light_names, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {baxter_core_msgs__msg__NavigatorState__FIELD_NAME__lights, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
baxter_core_msgs__msg__NavigatorState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {baxter_core_msgs__msg__NavigatorState__TYPE_NAME, 35, 35},
      {baxter_core_msgs__msg__NavigatorState__FIELDS, 5, 5},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# buttons\n"
  "string[] button_names\n"
  "bool[] buttons\n"
  "\n"
  "# wheel position\n"
  "uint8   wheel\n"
  "\n"
  "# true if the light is on, false if not\n"
  "# lights map to button names\n"
  "string[] light_names\n"
  "bool[] lights";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
baxter_core_msgs__msg__NavigatorState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {baxter_core_msgs__msg__NavigatorState__TYPE_NAME, 35, 35},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 184, 184},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
baxter_core_msgs__msg__NavigatorState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *baxter_core_msgs__msg__NavigatorState__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
