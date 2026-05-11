// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from baxter_core_msgs:msg/CameraControl.idl
// generated code does not contain a copyright notice

#include "baxter_core_msgs/msg/detail/camera_control__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_baxter_core_msgs
const rosidl_type_hash_t *
baxter_core_msgs__msg__CameraControl__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x93, 0x78, 0x27, 0xa6, 0xf3, 0x17, 0x42, 0xe5,
      0x71, 0x5e, 0x65, 0x86, 0xdc, 0xeb, 0xb3, 0xad,
      0xe7, 0x6e, 0xa4, 0x4a, 0x8e, 0x24, 0x6e, 0xdb,
      0x3d, 0xe5, 0x30, 0x19, 0x36, 0x61, 0xaf, 0x45,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char baxter_core_msgs__msg__CameraControl__TYPE_NAME[] = "baxter_core_msgs/msg/CameraControl";

// Define type names, field names, and default values
static char baxter_core_msgs__msg__CameraControl__FIELD_NAME__id[] = "id";
static char baxter_core_msgs__msg__CameraControl__FIELD_NAME__value[] = "value";

static rosidl_runtime_c__type_description__Field baxter_core_msgs__msg__CameraControl__FIELDS[] = {
  {
    {baxter_core_msgs__msg__CameraControl__FIELD_NAME__id, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {baxter_core_msgs__msg__CameraControl__FIELD_NAME__value, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
baxter_core_msgs__msg__CameraControl__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {baxter_core_msgs__msg__CameraControl__TYPE_NAME, 34, 34},
      {baxter_core_msgs__msg__CameraControl__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int32   id\n"
  "int32   value\n"
  "\n"
  "int32 CAMERA_CONTROL_EXPOSURE=100\n"
  "int32 CAMERA_CONTROL_GAIN=101\n"
  "int32 CAMERA_CONTROL_WHITE_BALANCE_R=102\n"
  "int32 CAMERA_CONTROL_WHITE_BALANCE_G=103\n"
  "int32 CAMERA_CONTROL_WHITE_BALANCE_B=104\n"
  "int32 CAMERA_CONTROL_WINDOW_X=105\n"
  "int32 CAMERA_CONTROL_WINDOW_Y=106\n"
  "int32 CAMERA_CONTROL_FLIP=107\n"
  "int32 CAMERA_CONTROL_MIRROR=108\n"
  "int32 CAMERA_CONTROL_RESOLUTION_HALF=109";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
baxter_core_msgs__msg__CameraControl__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {baxter_core_msgs__msg__CameraControl__TYPE_NAME, 34, 34},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 384, 384},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
baxter_core_msgs__msg__CameraControl__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *baxter_core_msgs__msg__CameraControl__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
