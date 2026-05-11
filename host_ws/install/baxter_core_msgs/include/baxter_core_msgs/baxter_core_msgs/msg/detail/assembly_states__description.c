// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from baxter_core_msgs:msg/AssemblyStates.idl
// generated code does not contain a copyright notice

#include "baxter_core_msgs/msg/detail/assembly_states__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_baxter_core_msgs
const rosidl_type_hash_t *
baxter_core_msgs__msg__AssemblyStates__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc1, 0xc5, 0x8d, 0x91, 0xa7, 0xce, 0x76, 0x29,
      0x51, 0x66, 0x6e, 0xb0, 0x64, 0x78, 0x5b, 0x0f,
      0xe4, 0x8a, 0xbf, 0x76, 0x37, 0xa2, 0x08, 0x29,
      0x15, 0x7b, 0x25, 0x70, 0x99, 0x14, 0x3a, 0x9d,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "baxter_core_msgs/msg/detail/assembly_state__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t baxter_core_msgs__msg__AssemblyState__EXPECTED_HASH = {1, {
    0xd1, 0x7b, 0xa6, 0x14, 0x1f, 0x2b, 0x11, 0x0b,
    0xf2, 0x94, 0x06, 0xf2, 0x6a, 0x79, 0x3a, 0x82,
    0x44, 0x16, 0x2a, 0xae, 0x53, 0xff, 0x2a, 0x80,
    0x43, 0x94, 0xf2, 0x11, 0x02, 0xc1, 0x2e, 0xa2,
  }};
#endif

static char baxter_core_msgs__msg__AssemblyStates__TYPE_NAME[] = "baxter_core_msgs/msg/AssemblyStates";
static char baxter_core_msgs__msg__AssemblyState__TYPE_NAME[] = "baxter_core_msgs/msg/AssemblyState";

// Define type names, field names, and default values
static char baxter_core_msgs__msg__AssemblyStates__FIELD_NAME__names[] = "names";
static char baxter_core_msgs__msg__AssemblyStates__FIELD_NAME__states[] = "states";

static rosidl_runtime_c__type_description__Field baxter_core_msgs__msg__AssemblyStates__FIELDS[] = {
  {
    {baxter_core_msgs__msg__AssemblyStates__FIELD_NAME__names, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {baxter_core_msgs__msg__AssemblyStates__FIELD_NAME__states, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {baxter_core_msgs__msg__AssemblyState__TYPE_NAME, 34, 34},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription baxter_core_msgs__msg__AssemblyStates__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {baxter_core_msgs__msg__AssemblyState__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
baxter_core_msgs__msg__AssemblyStates__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {baxter_core_msgs__msg__AssemblyStates__TYPE_NAME, 35, 35},
      {baxter_core_msgs__msg__AssemblyStates__FIELDS, 2, 2},
    },
    {baxter_core_msgs__msg__AssemblyStates__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&baxter_core_msgs__msg__AssemblyState__EXPECTED_HASH, baxter_core_msgs__msg__AssemblyState__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = baxter_core_msgs__msg__AssemblyState__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string[] names\n"
  "AssemblyState[] states";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
baxter_core_msgs__msg__AssemblyStates__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {baxter_core_msgs__msg__AssemblyStates__TYPE_NAME, 35, 35},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 37, 37},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
baxter_core_msgs__msg__AssemblyStates__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *baxter_core_msgs__msg__AssemblyStates__get_individual_type_description_source(NULL),
    sources[1] = *baxter_core_msgs__msg__AssemblyState__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
