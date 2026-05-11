// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from baxter_core_msgs:msg/EndEffectorCommand.idl
// generated code does not contain a copyright notice

#include "baxter_core_msgs/msg/detail/end_effector_command__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_baxter_core_msgs
const rosidl_type_hash_t *
baxter_core_msgs__msg__EndEffectorCommand__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xfb, 0xd7, 0x98, 0x26, 0xb1, 0x9f, 0x7d, 0x19,
      0x2e, 0x9b, 0xd0, 0x36, 0xa1, 0xcf, 0xe6, 0x08,
      0xfd, 0xff, 0xfe, 0x19, 0xae, 0x27, 0xef, 0xff,
      0x56, 0x0d, 0x07, 0x28, 0x23, 0x5c, 0x37, 0x9d,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char baxter_core_msgs__msg__EndEffectorCommand__TYPE_NAME[] = "baxter_core_msgs/msg/EndEffectorCommand";

// Define type names, field names, and default values
static char baxter_core_msgs__msg__EndEffectorCommand__FIELD_NAME__id[] = "id";
static char baxter_core_msgs__msg__EndEffectorCommand__FIELD_NAME__command[] = "command";
static char baxter_core_msgs__msg__EndEffectorCommand__FIELD_NAME__args[] = "args";
static char baxter_core_msgs__msg__EndEffectorCommand__FIELD_NAME__sender[] = "sender";
static char baxter_core_msgs__msg__EndEffectorCommand__FIELD_NAME__sequence[] = "sequence";

static rosidl_runtime_c__type_description__Field baxter_core_msgs__msg__EndEffectorCommand__FIELDS[] = {
  {
    {baxter_core_msgs__msg__EndEffectorCommand__FIELD_NAME__id, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {baxter_core_msgs__msg__EndEffectorCommand__FIELD_NAME__command, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {baxter_core_msgs__msg__EndEffectorCommand__FIELD_NAME__args, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {baxter_core_msgs__msg__EndEffectorCommand__FIELD_NAME__sender, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {baxter_core_msgs__msg__EndEffectorCommand__FIELD_NAME__sequence, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
baxter_core_msgs__msg__EndEffectorCommand__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {baxter_core_msgs__msg__EndEffectorCommand__TYPE_NAME, 39, 39},
      {baxter_core_msgs__msg__EndEffectorCommand__FIELDS, 5, 5},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "## Command to be sent to an end effector\n"
  "uint32 id       # target end effector id\n"
  "string command  # operation to perform\n"
  "# Well known commands:\n"
  "string   CMD_NO_OP           = no_op\n"
  "string   CMD_SET             = set\n"
  "string   CMD_CONFIGURE       = configure\n"
  "string   CMD_REBOOT          = reboot\n"
  "string   CMD_RESET           = reset\n"
  "string   CMD_CALIBRATE       = calibrate\n"
  "string   CMD_CLEAR_CALIBRATION = clear_calibration\n"
  "string   CMD_PREPARE_TO_GRIP = prepare_to_grip\n"
  "string   CMD_GRIP            = grip\n"
  "string   CMD_RELEASE         = release\n"
  "string   CMD_GO              = go\n"
  "string   CMD_STOP            = stop\n"
  "#\n"
  "string args     # JSON arguments to the command\n"
  "#\n"
  "string sender   # optional identifier, returned in state when the command is handled\n"
  "uint32 sequence # optional sequence number, return in state when the command is handled\n"
  "";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
baxter_core_msgs__msg__EndEffectorCommand__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {baxter_core_msgs__msg__EndEffectorCommand__TYPE_NAME, 39, 39},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 842, 842},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
baxter_core_msgs__msg__EndEffectorCommand__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *baxter_core_msgs__msg__EndEffectorCommand__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
