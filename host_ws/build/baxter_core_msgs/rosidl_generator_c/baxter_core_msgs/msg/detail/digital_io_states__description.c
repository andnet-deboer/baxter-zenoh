// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from baxter_core_msgs:msg/DigitalIOStates.idl
// generated code does not contain a copyright notice

#include "baxter_core_msgs/msg/detail/digital_io_states__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_baxter_core_msgs
const rosidl_type_hash_t *
baxter_core_msgs__msg__DigitalIOStates__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xab, 0x60, 0x09, 0xa6, 0x47, 0x30, 0x7d, 0xce,
      0xcd, 0x78, 0x95, 0xe3, 0x4b, 0xdc, 0x86, 0x99,
      0x08, 0x11, 0xf1, 0x08, 0x7b, 0xff, 0xa1, 0x54,
      0xcd, 0xb3, 0xb6, 0x9c, 0x94, 0x38, 0x11, 0xe1,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "baxter_core_msgs/msg/detail/digital_io_state__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t baxter_core_msgs__msg__DigitalIOState__EXPECTED_HASH = {1, {
    0x61, 0xda, 0xa7, 0x3d, 0x62, 0xde, 0xa7, 0xc0,
    0x76, 0x98, 0x14, 0xa0, 0xd7, 0x74, 0x18, 0x12,
    0x7e, 0x18, 0x05, 0xe2, 0x49, 0xf6, 0x7d, 0x04,
    0x95, 0x63, 0x9c, 0x78, 0x0d, 0xc4, 0xaf, 0x51,
  }};
#endif

static char baxter_core_msgs__msg__DigitalIOStates__TYPE_NAME[] = "baxter_core_msgs/msg/DigitalIOStates";
static char baxter_core_msgs__msg__DigitalIOState__TYPE_NAME[] = "baxter_core_msgs/msg/DigitalIOState";

// Define type names, field names, and default values
static char baxter_core_msgs__msg__DigitalIOStates__FIELD_NAME__names[] = "names";
static char baxter_core_msgs__msg__DigitalIOStates__FIELD_NAME__states[] = "states";

static rosidl_runtime_c__type_description__Field baxter_core_msgs__msg__DigitalIOStates__FIELDS[] = {
  {
    {baxter_core_msgs__msg__DigitalIOStates__FIELD_NAME__names, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {baxter_core_msgs__msg__DigitalIOStates__FIELD_NAME__states, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {baxter_core_msgs__msg__DigitalIOState__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription baxter_core_msgs__msg__DigitalIOStates__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {baxter_core_msgs__msg__DigitalIOState__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
baxter_core_msgs__msg__DigitalIOStates__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {baxter_core_msgs__msg__DigitalIOStates__TYPE_NAME, 36, 36},
      {baxter_core_msgs__msg__DigitalIOStates__FIELDS, 2, 2},
    },
    {baxter_core_msgs__msg__DigitalIOStates__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&baxter_core_msgs__msg__DigitalIOState__EXPECTED_HASH, baxter_core_msgs__msg__DigitalIOState__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = baxter_core_msgs__msg__DigitalIOState__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string[]         names\n"
  "DigitalIOState[] states";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
baxter_core_msgs__msg__DigitalIOStates__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {baxter_core_msgs__msg__DigitalIOStates__TYPE_NAME, 36, 36},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 46, 46},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
baxter_core_msgs__msg__DigitalIOStates__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *baxter_core_msgs__msg__DigitalIOStates__get_individual_type_description_source(NULL),
    sources[1] = *baxter_core_msgs__msg__DigitalIOState__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
