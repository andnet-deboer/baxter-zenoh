// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from baxter_core_msgs:msg/CameraSettings.idl
// generated code does not contain a copyright notice

#include "baxter_core_msgs/msg/detail/camera_settings__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_baxter_core_msgs
const rosidl_type_hash_t *
baxter_core_msgs__msg__CameraSettings__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf7, 0xbb, 0x11, 0xc5, 0x9c, 0x9a, 0x87, 0xcc,
      0x5c, 0x82, 0xf8, 0x1b, 0xf1, 0x82, 0x26, 0x9d,
      0x66, 0xb4, 0x63, 0x25, 0xce, 0x36, 0xe7, 0xb4,
      0x7a, 0xe1, 0x8a, 0xc3, 0x52, 0xcd, 0xa1, 0x82,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "baxter_core_msgs/msg/detail/camera_control__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t baxter_core_msgs__msg__CameraControl__EXPECTED_HASH = {1, {
    0x93, 0x78, 0x27, 0xa6, 0xf3, 0x17, 0x42, 0xe5,
    0x71, 0x5e, 0x65, 0x86, 0xdc, 0xeb, 0xb3, 0xad,
    0xe7, 0x6e, 0xa4, 0x4a, 0x8e, 0x24, 0x6e, 0xdb,
    0x3d, 0xe5, 0x30, 0x19, 0x36, 0x61, 0xaf, 0x45,
  }};
#endif

static char baxter_core_msgs__msg__CameraSettings__TYPE_NAME[] = "baxter_core_msgs/msg/CameraSettings";
static char baxter_core_msgs__msg__CameraControl__TYPE_NAME[] = "baxter_core_msgs/msg/CameraControl";

// Define type names, field names, and default values
static char baxter_core_msgs__msg__CameraSettings__FIELD_NAME__width[] = "width";
static char baxter_core_msgs__msg__CameraSettings__FIELD_NAME__height[] = "height";
static char baxter_core_msgs__msg__CameraSettings__FIELD_NAME__fps[] = "fps";
static char baxter_core_msgs__msg__CameraSettings__FIELD_NAME__controls[] = "controls";

static rosidl_runtime_c__type_description__Field baxter_core_msgs__msg__CameraSettings__FIELDS[] = {
  {
    {baxter_core_msgs__msg__CameraSettings__FIELD_NAME__width, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {baxter_core_msgs__msg__CameraSettings__FIELD_NAME__height, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {baxter_core_msgs__msg__CameraSettings__FIELD_NAME__fps, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {baxter_core_msgs__msg__CameraSettings__FIELD_NAME__controls, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {baxter_core_msgs__msg__CameraControl__TYPE_NAME, 34, 34},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription baxter_core_msgs__msg__CameraSettings__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {baxter_core_msgs__msg__CameraControl__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
baxter_core_msgs__msg__CameraSettings__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {baxter_core_msgs__msg__CameraSettings__TYPE_NAME, 35, 35},
      {baxter_core_msgs__msg__CameraSettings__FIELDS, 4, 4},
    },
    {baxter_core_msgs__msg__CameraSettings__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&baxter_core_msgs__msg__CameraControl__EXPECTED_HASH, baxter_core_msgs__msg__CameraControl__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = baxter_core_msgs__msg__CameraControl__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int32           width\n"
  "int32           height\n"
  "float32         fps\n"
  "CameraControl[] controls";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
baxter_core_msgs__msg__CameraSettings__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {baxter_core_msgs__msg__CameraSettings__TYPE_NAME, 35, 35},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 90, 90},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
baxter_core_msgs__msg__CameraSettings__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *baxter_core_msgs__msg__CameraSettings__get_individual_type_description_source(NULL),
    sources[1] = *baxter_core_msgs__msg__CameraControl__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
