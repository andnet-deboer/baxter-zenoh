// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from baxter_maintenance_msgs:msg/UpdateStatus.idl
// generated code does not contain a copyright notice

#include "baxter_maintenance_msgs/msg/detail/update_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_baxter_maintenance_msgs
const rosidl_type_hash_t *
baxter_maintenance_msgs__msg__UpdateStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x2d, 0xb5, 0xd3, 0xc4, 0x82, 0x7a, 0xe9, 0x28,
      0x87, 0x32, 0x00, 0x57, 0x68, 0x9e, 0xe5, 0x49,
      0x3f, 0x05, 0x54, 0x4f, 0x37, 0x7e, 0xfa, 0x13,
      0x59, 0xea, 0xf2, 0xa4, 0xfb, 0x5b, 0x82, 0xa0,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char baxter_maintenance_msgs__msg__UpdateStatus__TYPE_NAME[] = "baxter_maintenance_msgs/msg/UpdateStatus";

// Define type names, field names, and default values
static char baxter_maintenance_msgs__msg__UpdateStatus__FIELD_NAME__status[] = "status";
static char baxter_maintenance_msgs__msg__UpdateStatus__FIELD_NAME__progress[] = "progress";
static char baxter_maintenance_msgs__msg__UpdateStatus__FIELD_NAME__long_description[] = "long_description";

static rosidl_runtime_c__type_description__Field baxter_maintenance_msgs__msg__UpdateStatus__FIELDS[] = {
  {
    {baxter_maintenance_msgs__msg__UpdateStatus__FIELD_NAME__status, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {baxter_maintenance_msgs__msg__UpdateStatus__FIELD_NAME__progress, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {baxter_maintenance_msgs__msg__UpdateStatus__FIELD_NAME__long_description, 16, 16},
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
baxter_maintenance_msgs__msg__UpdateStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {baxter_maintenance_msgs__msg__UpdateStatus__TYPE_NAME, 40, 40},
      {baxter_maintenance_msgs__msg__UpdateStatus__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# See the class UpdateRunner()\n"
  "# status:           One-word description of the current action being performed\n"
  "# long_description: Details pertaining to status if any.  Used for verbose error messages.\n"
  "\n"
  "uint16  status\n"
  "float32 progress\n"
  "string  long_description\n"
  "\n"
  "uint16 STS_IDLE            = 0\n"
  "uint16 STS_INVALID         = 1\n"
  "uint16 STS_BUSY            = 2\n"
  "uint16 STS_CANCELLED       = 3\n"
  "uint16 STS_ERR             = 4\n"
  "uint16 STS_MOUNT_UPDATE    = 5\n"
  "uint16 STS_VERIFY_UPDATE   = 6\n"
  "uint16 STS_PREP_STAGING    = 7\n"
  "uint16 STS_MOUNT_STAGING   = 8\n"
  "uint16 STS_EXTRACT_UPDATE  = 9\n"
  "uint16 STS_LOAD_KEXEC      = 10\n"
  "";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
baxter_maintenance_msgs__msg__UpdateStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {baxter_maintenance_msgs__msg__UpdateStatus__TYPE_NAME, 40, 40},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 603, 603},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
baxter_maintenance_msgs__msg__UpdateStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *baxter_maintenance_msgs__msg__UpdateStatus__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
