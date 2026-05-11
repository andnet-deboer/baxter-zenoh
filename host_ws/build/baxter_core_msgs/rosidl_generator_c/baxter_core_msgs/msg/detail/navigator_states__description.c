// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from baxter_core_msgs:msg/NavigatorStates.idl
// generated code does not contain a copyright notice

#include "baxter_core_msgs/msg/detail/navigator_states__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_baxter_core_msgs
const rosidl_type_hash_t *
baxter_core_msgs__msg__NavigatorStates__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x53, 0x31, 0x46, 0xc8, 0xa1, 0x24, 0x97, 0x56,
      0xa7, 0x56, 0xb0, 0x97, 0x88, 0xe1, 0x18, 0xa8,
      0x58, 0x55, 0xae, 0x69, 0xbf, 0x1e, 0x35, 0x42,
      0x58, 0xcb, 0x6d, 0x30, 0x1b, 0x9e, 0x53, 0x5d,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "baxter_core_msgs/msg/detail/navigator_state__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t baxter_core_msgs__msg__NavigatorState__EXPECTED_HASH = {1, {
    0x46, 0xeb, 0x20, 0x66, 0xd6, 0x4f, 0x05, 0x5b,
    0x28, 0xc4, 0x9a, 0x68, 0xad, 0x1d, 0xd3, 0xc0,
    0x7f, 0xf1, 0x8c, 0xed, 0xe8, 0x6e, 0x71, 0x16,
    0x0b, 0x9c, 0xc8, 0x6e, 0xc5, 0x99, 0x89, 0x9e,
  }};
#endif

static char baxter_core_msgs__msg__NavigatorStates__TYPE_NAME[] = "baxter_core_msgs/msg/NavigatorStates";
static char baxter_core_msgs__msg__NavigatorState__TYPE_NAME[] = "baxter_core_msgs/msg/NavigatorState";

// Define type names, field names, and default values
static char baxter_core_msgs__msg__NavigatorStates__FIELD_NAME__names[] = "names";
static char baxter_core_msgs__msg__NavigatorStates__FIELD_NAME__states[] = "states";

static rosidl_runtime_c__type_description__Field baxter_core_msgs__msg__NavigatorStates__FIELDS[] = {
  {
    {baxter_core_msgs__msg__NavigatorStates__FIELD_NAME__names, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {baxter_core_msgs__msg__NavigatorStates__FIELD_NAME__states, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {baxter_core_msgs__msg__NavigatorState__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription baxter_core_msgs__msg__NavigatorStates__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {baxter_core_msgs__msg__NavigatorState__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
baxter_core_msgs__msg__NavigatorStates__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {baxter_core_msgs__msg__NavigatorStates__TYPE_NAME, 36, 36},
      {baxter_core_msgs__msg__NavigatorStates__FIELDS, 2, 2},
    },
    {baxter_core_msgs__msg__NavigatorStates__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&baxter_core_msgs__msg__NavigatorState__EXPECTED_HASH, baxter_core_msgs__msg__NavigatorState__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = baxter_core_msgs__msg__NavigatorState__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# used when publishing multiple navigators\n"
  "string[]         names\n"
  "NavigatorState[] states";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
baxter_core_msgs__msg__NavigatorStates__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {baxter_core_msgs__msg__NavigatorStates__TYPE_NAME, 36, 36},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 90, 90},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
baxter_core_msgs__msg__NavigatorStates__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *baxter_core_msgs__msg__NavigatorStates__get_individual_type_description_source(NULL),
    sources[1] = *baxter_core_msgs__msg__NavigatorState__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
