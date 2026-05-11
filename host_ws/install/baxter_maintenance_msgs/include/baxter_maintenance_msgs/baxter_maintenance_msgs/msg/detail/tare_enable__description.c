// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from baxter_maintenance_msgs:msg/TareEnable.idl
// generated code does not contain a copyright notice

#include "baxter_maintenance_msgs/msg/detail/tare_enable__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_baxter_maintenance_msgs
const rosidl_type_hash_t *
baxter_maintenance_msgs__msg__TareEnable__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x44, 0x1e, 0xea, 0xc9, 0x36, 0x52, 0x24, 0x11,
      0x8c, 0xbe, 0x8f, 0xea, 0xd3, 0x97, 0x06, 0x06,
      0x22, 0xfa, 0xef, 0xe4, 0x89, 0xa1, 0x60, 0xe3,
      0xbc, 0x7f, 0x10, 0x20, 0x8e, 0x41, 0x36, 0x90,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "baxter_maintenance_msgs/msg/detail/tare_data__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t baxter_maintenance_msgs__msg__TareData__EXPECTED_HASH = {1, {
    0x12, 0x19, 0xe9, 0xe8, 0x54, 0xac, 0x3e, 0x4a,
    0xb4, 0x7b, 0x8a, 0xbb, 0xcb, 0x56, 0x35, 0xe4,
    0xfa, 0x86, 0x8f, 0x56, 0x58, 0x33, 0x02, 0x85,
    0x5e, 0x11, 0xa5, 0x5c, 0x95, 0x23, 0x92, 0x21,
  }};
#endif

static char baxter_maintenance_msgs__msg__TareEnable__TYPE_NAME[] = "baxter_maintenance_msgs/msg/TareEnable";
static char baxter_maintenance_msgs__msg__TareData__TYPE_NAME[] = "baxter_maintenance_msgs/msg/TareData";

// Define type names, field names, and default values
static char baxter_maintenance_msgs__msg__TareEnable__FIELD_NAME__is_enabled[] = "is_enabled";
static char baxter_maintenance_msgs__msg__TareEnable__FIELD_NAME__uid[] = "uid";
static char baxter_maintenance_msgs__msg__TareEnable__FIELD_NAME__data[] = "data";

static rosidl_runtime_c__type_description__Field baxter_maintenance_msgs__msg__TareEnable__FIELDS[] = {
  {
    {baxter_maintenance_msgs__msg__TareEnable__FIELD_NAME__is_enabled, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {baxter_maintenance_msgs__msg__TareEnable__FIELD_NAME__uid, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {baxter_maintenance_msgs__msg__TareEnable__FIELD_NAME__data, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {baxter_maintenance_msgs__msg__TareData__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription baxter_maintenance_msgs__msg__TareEnable__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {baxter_maintenance_msgs__msg__TareData__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
baxter_maintenance_msgs__msg__TareEnable__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {baxter_maintenance_msgs__msg__TareEnable__TYPE_NAME, 38, 38},
      {baxter_maintenance_msgs__msg__TareEnable__FIELDS, 3, 3},
    },
    {baxter_maintenance_msgs__msg__TareEnable__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&baxter_maintenance_msgs__msg__TareData__EXPECTED_HASH, baxter_maintenance_msgs__msg__TareData__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = baxter_maintenance_msgs__msg__TareData__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "bool is_enabled\n"
  "string uid\n"
  "TareData data";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
baxter_maintenance_msgs__msg__TareEnable__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {baxter_maintenance_msgs__msg__TareEnable__TYPE_NAME, 38, 38},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 41, 41},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
baxter_maintenance_msgs__msg__TareEnable__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *baxter_maintenance_msgs__msg__TareEnable__get_individual_type_description_source(NULL),
    sources[1] = *baxter_maintenance_msgs__msg__TareData__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
