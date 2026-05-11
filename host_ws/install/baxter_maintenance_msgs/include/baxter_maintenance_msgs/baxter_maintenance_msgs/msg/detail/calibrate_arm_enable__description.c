// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from baxter_maintenance_msgs:msg/CalibrateArmEnable.idl
// generated code does not contain a copyright notice

#include "baxter_maintenance_msgs/msg/detail/calibrate_arm_enable__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_baxter_maintenance_msgs
const rosidl_type_hash_t *
baxter_maintenance_msgs__msg__CalibrateArmEnable__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x02, 0x35, 0x4a, 0xff, 0x2d, 0x4d, 0x64, 0x20,
      0x0d, 0xbe, 0xb4, 0xac, 0xfe, 0xb4, 0xa6, 0x06,
      0x61, 0x77, 0xd1, 0x14, 0x35, 0xfa, 0x0f, 0x6d,
      0x72, 0xa4, 0x3d, 0xbb, 0xc2, 0xc3, 0x29, 0x05,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "baxter_maintenance_msgs/msg/detail/calibrate_arm_data__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t baxter_maintenance_msgs__msg__CalibrateArmData__EXPECTED_HASH = {1, {
    0x2b, 0x90, 0x9f, 0x90, 0xe2, 0x5e, 0xda, 0x6f,
    0xc2, 0x1a, 0x37, 0xb5, 0xc4, 0xd6, 0x9e, 0xe5,
    0x14, 0x66, 0x18, 0x47, 0xb2, 0x51, 0x74, 0xbb,
    0x33, 0xb8, 0x8d, 0xee, 0x38, 0x5f, 0xf5, 0xec,
  }};
#endif

static char baxter_maintenance_msgs__msg__CalibrateArmEnable__TYPE_NAME[] = "baxter_maintenance_msgs/msg/CalibrateArmEnable";
static char baxter_maintenance_msgs__msg__CalibrateArmData__TYPE_NAME[] = "baxter_maintenance_msgs/msg/CalibrateArmData";

// Define type names, field names, and default values
static char baxter_maintenance_msgs__msg__CalibrateArmEnable__FIELD_NAME__is_enabled[] = "is_enabled";
static char baxter_maintenance_msgs__msg__CalibrateArmEnable__FIELD_NAME__uid[] = "uid";
static char baxter_maintenance_msgs__msg__CalibrateArmEnable__FIELD_NAME__data[] = "data";

static rosidl_runtime_c__type_description__Field baxter_maintenance_msgs__msg__CalibrateArmEnable__FIELDS[] = {
  {
    {baxter_maintenance_msgs__msg__CalibrateArmEnable__FIELD_NAME__is_enabled, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {baxter_maintenance_msgs__msg__CalibrateArmEnable__FIELD_NAME__uid, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {baxter_maintenance_msgs__msg__CalibrateArmEnable__FIELD_NAME__data, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {baxter_maintenance_msgs__msg__CalibrateArmData__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription baxter_maintenance_msgs__msg__CalibrateArmEnable__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {baxter_maintenance_msgs__msg__CalibrateArmData__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
baxter_maintenance_msgs__msg__CalibrateArmEnable__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {baxter_maintenance_msgs__msg__CalibrateArmEnable__TYPE_NAME, 46, 46},
      {baxter_maintenance_msgs__msg__CalibrateArmEnable__FIELDS, 3, 3},
    },
    {baxter_maintenance_msgs__msg__CalibrateArmEnable__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&baxter_maintenance_msgs__msg__CalibrateArmData__EXPECTED_HASH, baxter_maintenance_msgs__msg__CalibrateArmData__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = baxter_maintenance_msgs__msg__CalibrateArmData__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "bool is_enabled\n"
  "string uid\n"
  "CalibrateArmData data";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
baxter_maintenance_msgs__msg__CalibrateArmEnable__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {baxter_maintenance_msgs__msg__CalibrateArmEnable__TYPE_NAME, 46, 46},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 49, 49},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
baxter_maintenance_msgs__msg__CalibrateArmEnable__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *baxter_maintenance_msgs__msg__CalibrateArmEnable__get_individual_type_description_source(NULL),
    sources[1] = *baxter_maintenance_msgs__msg__CalibrateArmData__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
