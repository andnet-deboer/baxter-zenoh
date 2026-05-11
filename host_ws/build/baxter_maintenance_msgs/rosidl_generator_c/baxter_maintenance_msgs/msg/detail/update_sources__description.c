// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from baxter_maintenance_msgs:msg/UpdateSources.idl
// generated code does not contain a copyright notice

#include "baxter_maintenance_msgs/msg/detail/update_sources__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_baxter_maintenance_msgs
const rosidl_type_hash_t *
baxter_maintenance_msgs__msg__UpdateSources__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x79, 0xe9, 0x25, 0x7e, 0xd0, 0x6a, 0xc3, 0x18,
      0x9a, 0x66, 0xc0, 0x77, 0x14, 0xb2, 0x49, 0x4a,
      0xd1, 0x41, 0x0b, 0xca, 0xf5, 0x0d, 0x9e, 0x06,
      0x3a, 0xc0, 0xb3, 0x29, 0x22, 0xf4, 0x68, 0x77,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "baxter_maintenance_msgs/msg/detail/update_source__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t baxter_maintenance_msgs__msg__UpdateSource__EXPECTED_HASH = {1, {
    0x55, 0xb3, 0x00, 0x9d, 0xcf, 0x9e, 0xac, 0x32,
    0xa9, 0xf1, 0x5b, 0x2d, 0x49, 0xd4, 0xbc, 0xe6,
    0x55, 0x12, 0xce, 0x91, 0x68, 0xba, 0xa3, 0xf9,
    0xa2, 0x2c, 0xfb, 0xbe, 0xa8, 0x22, 0x9e, 0xdf,
  }};
#endif

static char baxter_maintenance_msgs__msg__UpdateSources__TYPE_NAME[] = "baxter_maintenance_msgs/msg/UpdateSources";
static char baxter_maintenance_msgs__msg__UpdateSource__TYPE_NAME[] = "baxter_maintenance_msgs/msg/UpdateSource";

// Define type names, field names, and default values
static char baxter_maintenance_msgs__msg__UpdateSources__FIELD_NAME__uuid[] = "uuid";
static char baxter_maintenance_msgs__msg__UpdateSources__FIELD_NAME__sources[] = "sources";

static rosidl_runtime_c__type_description__Field baxter_maintenance_msgs__msg__UpdateSources__FIELDS[] = {
  {
    {baxter_maintenance_msgs__msg__UpdateSources__FIELD_NAME__uuid, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {baxter_maintenance_msgs__msg__UpdateSources__FIELD_NAME__sources, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {baxter_maintenance_msgs__msg__UpdateSource__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription baxter_maintenance_msgs__msg__UpdateSources__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {baxter_maintenance_msgs__msg__UpdateSource__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
baxter_maintenance_msgs__msg__UpdateSources__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {baxter_maintenance_msgs__msg__UpdateSources__TYPE_NAME, 41, 41},
      {baxter_maintenance_msgs__msg__UpdateSources__FIELDS, 2, 2},
    },
    {baxter_maintenance_msgs__msg__UpdateSources__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&baxter_maintenance_msgs__msg__UpdateSource__EXPECTED_HASH, baxter_maintenance_msgs__msg__UpdateSource__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = baxter_maintenance_msgs__msg__UpdateSource__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string          uuid\n"
  "UpdateSource[]  sources";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
baxter_maintenance_msgs__msg__UpdateSources__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {baxter_maintenance_msgs__msg__UpdateSources__TYPE_NAME, 41, 41},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 45, 45},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
baxter_maintenance_msgs__msg__UpdateSources__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *baxter_maintenance_msgs__msg__UpdateSources__get_individual_type_description_source(NULL),
    sources[1] = *baxter_maintenance_msgs__msg__UpdateSource__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
