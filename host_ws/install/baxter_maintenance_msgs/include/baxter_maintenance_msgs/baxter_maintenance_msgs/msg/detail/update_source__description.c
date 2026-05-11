// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from baxter_maintenance_msgs:msg/UpdateSource.idl
// generated code does not contain a copyright notice

#include "baxter_maintenance_msgs/msg/detail/update_source__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_baxter_maintenance_msgs
const rosidl_type_hash_t *
baxter_maintenance_msgs__msg__UpdateSource__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x55, 0xb3, 0x00, 0x9d, 0xcf, 0x9e, 0xac, 0x32,
      0xa9, 0xf1, 0x5b, 0x2d, 0x49, 0xd4, 0xbc, 0xe6,
      0x55, 0x12, 0xce, 0x91, 0x68, 0xba, 0xa3, 0xf9,
      0xa2, 0x2c, 0xfb, 0xbe, 0xa8, 0x22, 0x9e, 0xdf,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char baxter_maintenance_msgs__msg__UpdateSource__TYPE_NAME[] = "baxter_maintenance_msgs/msg/UpdateSource";

// Define type names, field names, and default values
static char baxter_maintenance_msgs__msg__UpdateSource__FIELD_NAME__devname[] = "devname";
static char baxter_maintenance_msgs__msg__UpdateSource__FIELD_NAME__filename[] = "filename";
static char baxter_maintenance_msgs__msg__UpdateSource__FIELD_NAME__version[] = "version";
static char baxter_maintenance_msgs__msg__UpdateSource__FIELD_NAME__uuid[] = "uuid";

static rosidl_runtime_c__type_description__Field baxter_maintenance_msgs__msg__UpdateSource__FIELDS[] = {
  {
    {baxter_maintenance_msgs__msg__UpdateSource__FIELD_NAME__devname, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {baxter_maintenance_msgs__msg__UpdateSource__FIELD_NAME__filename, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {baxter_maintenance_msgs__msg__UpdateSource__FIELD_NAME__version, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {baxter_maintenance_msgs__msg__UpdateSource__FIELD_NAME__uuid, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
baxter_maintenance_msgs__msg__UpdateSource__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {baxter_maintenance_msgs__msg__UpdateSource__TYPE_NAME, 40, 40},
      {baxter_maintenance_msgs__msg__UpdateSource__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string  devname\n"
  "string  filename\n"
  "string  version\n"
  "string  uuid";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
baxter_maintenance_msgs__msg__UpdateSource__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {baxter_maintenance_msgs__msg__UpdateSource__TYPE_NAME, 40, 40},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 62, 62},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
baxter_maintenance_msgs__msg__UpdateSource__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *baxter_maintenance_msgs__msg__UpdateSource__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
