// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from baxter_core_msgs:msg/AnalogOutputCommand.idl
// generated code does not contain a copyright notice

#include "baxter_core_msgs/msg/detail/analog_output_command__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_baxter_core_msgs
const rosidl_type_hash_t *
baxter_core_msgs__msg__AnalogOutputCommand__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc0, 0x41, 0xfa, 0x51, 0x94, 0xba, 0x94, 0x79,
      0xc5, 0x53, 0xe7, 0x2d, 0xc8, 0xde, 0x00, 0x6d,
      0x4c, 0x33, 0xce, 0xe9, 0x52, 0x35, 0x91, 0x24,
      0xaf, 0xb7, 0x64, 0x1c, 0x5b, 0x92, 0xc4, 0xdb,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char baxter_core_msgs__msg__AnalogOutputCommand__TYPE_NAME[] = "baxter_core_msgs/msg/AnalogOutputCommand";

// Define type names, field names, and default values
static char baxter_core_msgs__msg__AnalogOutputCommand__FIELD_NAME__name[] = "name";
static char baxter_core_msgs__msg__AnalogOutputCommand__FIELD_NAME__value[] = "value";

static rosidl_runtime_c__type_description__Field baxter_core_msgs__msg__AnalogOutputCommand__FIELDS[] = {
  {
    {baxter_core_msgs__msg__AnalogOutputCommand__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {baxter_core_msgs__msg__AnalogOutputCommand__FIELD_NAME__value, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
baxter_core_msgs__msg__AnalogOutputCommand__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {baxter_core_msgs__msg__AnalogOutputCommand__TYPE_NAME, 40, 40},
      {baxter_core_msgs__msg__AnalogOutputCommand__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "##the name of the output\n"
  "string name  \n"
  "##the value to set output \n"
  "uint16 value   ";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
baxter_core_msgs__msg__AnalogOutputCommand__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {baxter_core_msgs__msg__AnalogOutputCommand__TYPE_NAME, 40, 40},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 82, 82},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
baxter_core_msgs__msg__AnalogOutputCommand__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *baxter_core_msgs__msg__AnalogOutputCommand__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
