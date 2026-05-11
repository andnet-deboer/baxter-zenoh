// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from baxter_core_msgs:msg/AnalogIOStates.idl
// generated code does not contain a copyright notice

#include "baxter_core_msgs/msg/detail/analog_io_states__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_baxter_core_msgs
const rosidl_type_hash_t *
baxter_core_msgs__msg__AnalogIOStates__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x11, 0xcf, 0x5c, 0x57, 0x00, 0x66, 0xc3, 0xbd,
      0xba, 0x8a, 0x05, 0x1c, 0x90, 0x7c, 0xfa, 0xf6,
      0x53, 0xfb, 0x7f, 0x8e, 0x60, 0xca, 0x84, 0x4c,
      0x80, 0x3b, 0xa9, 0x69, 0xda, 0x6e, 0x5a, 0x3e,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "baxter_core_msgs/msg/detail/analog_io_state__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t baxter_core_msgs__msg__AnalogIOState__EXPECTED_HASH = {1, {
    0x1c, 0x8a, 0xfb, 0x95, 0xb6, 0xf7, 0x70, 0x4c,
    0xb6, 0xcb, 0x83, 0x92, 0x24, 0x57, 0xb6, 0x0b,
    0x21, 0xf8, 0xc7, 0x48, 0x4b, 0x12, 0xf8, 0x5a,
    0x2b, 0xf4, 0xa5, 0xde, 0xbb, 0x70, 0x82, 0xad,
  }};
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
#endif

static char baxter_core_msgs__msg__AnalogIOStates__TYPE_NAME[] = "baxter_core_msgs/msg/AnalogIOStates";
static char baxter_core_msgs__msg__AnalogIOState__TYPE_NAME[] = "baxter_core_msgs/msg/AnalogIOState";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";

// Define type names, field names, and default values
static char baxter_core_msgs__msg__AnalogIOStates__FIELD_NAME__names[] = "names";
static char baxter_core_msgs__msg__AnalogIOStates__FIELD_NAME__states[] = "states";

static rosidl_runtime_c__type_description__Field baxter_core_msgs__msg__AnalogIOStates__FIELDS[] = {
  {
    {baxter_core_msgs__msg__AnalogIOStates__FIELD_NAME__names, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {baxter_core_msgs__msg__AnalogIOStates__FIELD_NAME__states, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {baxter_core_msgs__msg__AnalogIOState__TYPE_NAME, 34, 34},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription baxter_core_msgs__msg__AnalogIOStates__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {baxter_core_msgs__msg__AnalogIOState__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
baxter_core_msgs__msg__AnalogIOStates__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {baxter_core_msgs__msg__AnalogIOStates__TYPE_NAME, 35, 35},
      {baxter_core_msgs__msg__AnalogIOStates__FIELDS, 2, 2},
    },
    {baxter_core_msgs__msg__AnalogIOStates__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&baxter_core_msgs__msg__AnalogIOState__EXPECTED_HASH, baxter_core_msgs__msg__AnalogIOState__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = baxter_core_msgs__msg__AnalogIOState__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string[]         names\n"
  "AnalogIOState[] states";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
baxter_core_msgs__msg__AnalogIOStates__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {baxter_core_msgs__msg__AnalogIOStates__TYPE_NAME, 35, 35},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 45, 45},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
baxter_core_msgs__msg__AnalogIOStates__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *baxter_core_msgs__msg__AnalogIOStates__get_individual_type_description_source(NULL),
    sources[1] = *baxter_core_msgs__msg__AnalogIOState__get_individual_type_description_source(NULL);
    sources[2] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
