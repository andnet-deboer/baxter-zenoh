// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from baxter_maintenance_msgs:msg/CalibrateArmData.idl
// generated code does not contain a copyright notice

#include "baxter_maintenance_msgs/msg/detail/calibrate_arm_data__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_baxter_maintenance_msgs
const rosidl_type_hash_t *
baxter_maintenance_msgs__msg__CalibrateArmData__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x2b, 0x90, 0x9f, 0x90, 0xe2, 0x5e, 0xda, 0x6f,
      0xc2, 0x1a, 0x37, 0xb5, 0xc4, 0xd6, 0x9e, 0xe5,
      0x14, 0x66, 0x18, 0x47, 0xb2, 0x51, 0x74, 0xbb,
      0x33, 0xb8, 0x8d, 0xee, 0x38, 0x5f, 0xf5, 0xec,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char baxter_maintenance_msgs__msg__CalibrateArmData__TYPE_NAME[] = "baxter_maintenance_msgs/msg/CalibrateArmData";

// Define type names, field names, and default values
static char baxter_maintenance_msgs__msg__CalibrateArmData__FIELD_NAME__suppress_write_to_file[] = "suppress_write_to_file";

static rosidl_runtime_c__type_description__Field baxter_maintenance_msgs__msg__CalibrateArmData__FIELDS[] = {
  {
    {baxter_maintenance_msgs__msg__CalibrateArmData__FIELD_NAME__suppress_write_to_file, 22, 22},
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
baxter_maintenance_msgs__msg__CalibrateArmData__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {baxter_maintenance_msgs__msg__CalibrateArmData__TYPE_NAME, 44, 44},
      {baxter_maintenance_msgs__msg__CalibrateArmData__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "bool suppress_write_to_file";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
baxter_maintenance_msgs__msg__CalibrateArmData__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {baxter_maintenance_msgs__msg__CalibrateArmData__TYPE_NAME, 44, 44},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 28, 28},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
baxter_maintenance_msgs__msg__CalibrateArmData__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *baxter_maintenance_msgs__msg__CalibrateArmData__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
