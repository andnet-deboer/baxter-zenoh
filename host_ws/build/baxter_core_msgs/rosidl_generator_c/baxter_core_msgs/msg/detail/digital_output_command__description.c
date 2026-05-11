// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from baxter_core_msgs:msg/DigitalOutputCommand.idl
// generated code does not contain a copyright notice

#include "baxter_core_msgs/msg/detail/digital_output_command__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_baxter_core_msgs
const rosidl_type_hash_t *
baxter_core_msgs__msg__DigitalOutputCommand__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe7, 0xf7, 0x83, 0x7e, 0xa4, 0x7c, 0xc8, 0xcf,
      0x3a, 0x52, 0x05, 0x05, 0x26, 0xc8, 0xa5, 0x21,
      0x2d, 0x6e, 0x08, 0xa2, 0x3e, 0xf4, 0xd6, 0x52,
      0x7a, 0xbb, 0xd2, 0xa3, 0x81, 0x7c, 0xd3, 0xff,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char baxter_core_msgs__msg__DigitalOutputCommand__TYPE_NAME[] = "baxter_core_msgs/msg/DigitalOutputCommand";

// Define type names, field names, and default values
static char baxter_core_msgs__msg__DigitalOutputCommand__FIELD_NAME__name[] = "name";
static char baxter_core_msgs__msg__DigitalOutputCommand__FIELD_NAME__value[] = "value";

static rosidl_runtime_c__type_description__Field baxter_core_msgs__msg__DigitalOutputCommand__FIELDS[] = {
  {
    {baxter_core_msgs__msg__DigitalOutputCommand__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {baxter_core_msgs__msg__DigitalOutputCommand__FIELD_NAME__value, 5, 5},
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
baxter_core_msgs__msg__DigitalOutputCommand__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {baxter_core_msgs__msg__DigitalOutputCommand__TYPE_NAME, 41, 41},
      {baxter_core_msgs__msg__DigitalOutputCommand__FIELDS, 2, 2},
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
  "bool value   ";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
baxter_core_msgs__msg__DigitalOutputCommand__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {baxter_core_msgs__msg__DigitalOutputCommand__TYPE_NAME, 41, 41},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 80, 80},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
baxter_core_msgs__msg__DigitalOutputCommand__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *baxter_core_msgs__msg__DigitalOutputCommand__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
