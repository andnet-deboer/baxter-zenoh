// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from baxter_maintenance_msgs:msg/TareData.idl
// generated code does not contain a copyright notice

#include "baxter_maintenance_msgs/msg/detail/tare_data__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_baxter_maintenance_msgs
const rosidl_type_hash_t *
baxter_maintenance_msgs__msg__TareData__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x12, 0x19, 0xe9, 0xe8, 0x54, 0xac, 0x3e, 0x4a,
      0xb4, 0x7b, 0x8a, 0xbb, 0xcb, 0x56, 0x35, 0xe4,
      0xfa, 0x86, 0x8f, 0x56, 0x58, 0x33, 0x02, 0x85,
      0x5e, 0x11, 0xa5, 0x5c, 0x95, 0x23, 0x92, 0x21,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char baxter_maintenance_msgs__msg__TareData__TYPE_NAME[] = "baxter_maintenance_msgs/msg/TareData";

// Define type names, field names, and default values
static char baxter_maintenance_msgs__msg__TareData__FIELD_NAME__tune_gravity_spring[] = "tune_gravity_spring";

static rosidl_runtime_c__type_description__Field baxter_maintenance_msgs__msg__TareData__FIELDS[] = {
  {
    {baxter_maintenance_msgs__msg__TareData__FIELD_NAME__tune_gravity_spring, 19, 19},
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
baxter_maintenance_msgs__msg__TareData__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {baxter_maintenance_msgs__msg__TareData__TYPE_NAME, 36, 36},
      {baxter_maintenance_msgs__msg__TareData__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "bool tune_gravity_spring";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
baxter_maintenance_msgs__msg__TareData__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {baxter_maintenance_msgs__msg__TareData__TYPE_NAME, 36, 36},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 25, 25},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
baxter_maintenance_msgs__msg__TareData__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *baxter_maintenance_msgs__msg__TareData__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
