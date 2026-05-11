// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from baxter_core_msgs:msg/URDFConfiguration.idl
// generated code does not contain a copyright notice

#include "baxter_core_msgs/msg/detail/urdf_configuration__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_baxter_core_msgs
const rosidl_type_hash_t *
baxter_core_msgs__msg__URDFConfiguration__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x0e, 0xf7, 0x95, 0x2a, 0x00, 0x0c, 0x1c, 0xff,
      0x6e, 0xc7, 0x1b, 0xd8, 0x15, 0xec, 0x0e, 0xd3,
      0x39, 0x90, 0xc0, 0x7f, 0x44, 0x11, 0x3e, 0x6d,
      0xb3, 0x42, 0x87, 0xb0, 0x30, 0xc6, 0xf3, 0xad,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
#endif

static char baxter_core_msgs__msg__URDFConfiguration__TYPE_NAME[] = "baxter_core_msgs/msg/URDFConfiguration";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";

// Define type names, field names, and default values
static char baxter_core_msgs__msg__URDFConfiguration__FIELD_NAME__time[] = "time";
static char baxter_core_msgs__msg__URDFConfiguration__FIELD_NAME__link[] = "link";
static char baxter_core_msgs__msg__URDFConfiguration__FIELD_NAME__joint[] = "joint";
static char baxter_core_msgs__msg__URDFConfiguration__FIELD_NAME__urdf[] = "urdf";

static rosidl_runtime_c__type_description__Field baxter_core_msgs__msg__URDFConfiguration__FIELDS[] = {
  {
    {baxter_core_msgs__msg__URDFConfiguration__FIELD_NAME__time, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {baxter_core_msgs__msg__URDFConfiguration__FIELD_NAME__link, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {baxter_core_msgs__msg__URDFConfiguration__FIELD_NAME__joint, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {baxter_core_msgs__msg__URDFConfiguration__FIELD_NAME__urdf, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription baxter_core_msgs__msg__URDFConfiguration__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
baxter_core_msgs__msg__URDFConfiguration__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {baxter_core_msgs__msg__URDFConfiguration__TYPE_NAME, 38, 38},
      {baxter_core_msgs__msg__URDFConfiguration__FIELDS, 4, 4},
    },
    {baxter_core_msgs__msg__URDFConfiguration__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "## URDF Configuration\n"
  "builtin_interfaces/Time time      # time the message was created, serves as a sequence number\n"
  "               # time should be changed only when the content changes.\n"
  "string link    # parent link name\n"
  "string joint   # joint to configure\n"
  "               # link + joint + time uniquely identifies a configuration.\n"
  "string urdf    # XML or JSON-encoded URDF data.  This should be a URDF fragment\n"
  "               # describing the entire subtree for the given joint attached\n"
  "               # to the given parent link. If this field is empty the joint\n"
  "               # is removed from the parent link.";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
baxter_core_msgs__msg__URDFConfiguration__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {baxter_core_msgs__msg__URDFConfiguration__TYPE_NAME, 38, 38},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 613, 613},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
baxter_core_msgs__msg__URDFConfiguration__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *baxter_core_msgs__msg__URDFConfiguration__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
