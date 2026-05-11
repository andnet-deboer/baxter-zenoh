// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from baxter_core_msgs:msg/EndEffectorState.idl
// generated code does not contain a copyright notice

#include "baxter_core_msgs/msg/detail/end_effector_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_baxter_core_msgs
const rosidl_type_hash_t *
baxter_core_msgs__msg__EndEffectorState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x64, 0xa0, 0x96, 0x6f, 0xd3, 0x35, 0x96, 0xea,
      0x89, 0xaf, 0xf7, 0x59, 0x95, 0xd3, 0x09, 0x22,
      0x89, 0x89, 0x59, 0x82, 0xee, 0xf1, 0xaf, 0x82,
      0x62, 0xb9, 0xaf, 0xa2, 0x49, 0x64, 0xde, 0x24,
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

static char baxter_core_msgs__msg__EndEffectorState__TYPE_NAME[] = "baxter_core_msgs/msg/EndEffectorState";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";

// Define type names, field names, and default values
static char baxter_core_msgs__msg__EndEffectorState__FIELD_NAME__timestamp[] = "timestamp";
static char baxter_core_msgs__msg__EndEffectorState__FIELD_NAME__id[] = "id";
static char baxter_core_msgs__msg__EndEffectorState__FIELD_NAME__enabled[] = "enabled";
static char baxter_core_msgs__msg__EndEffectorState__FIELD_NAME__calibrated[] = "calibrated";
static char baxter_core_msgs__msg__EndEffectorState__FIELD_NAME__ready[] = "ready";
static char baxter_core_msgs__msg__EndEffectorState__FIELD_NAME__moving[] = "moving";
static char baxter_core_msgs__msg__EndEffectorState__FIELD_NAME__gripping[] = "gripping";
static char baxter_core_msgs__msg__EndEffectorState__FIELD_NAME__missed[] = "missed";
static char baxter_core_msgs__msg__EndEffectorState__FIELD_NAME__error[] = "error";
static char baxter_core_msgs__msg__EndEffectorState__FIELD_NAME__reverse[] = "reverse";
static char baxter_core_msgs__msg__EndEffectorState__FIELD_NAME__position[] = "position";
static char baxter_core_msgs__msg__EndEffectorState__FIELD_NAME__force[] = "force";
static char baxter_core_msgs__msg__EndEffectorState__FIELD_NAME__state[] = "state";
static char baxter_core_msgs__msg__EndEffectorState__FIELD_NAME__command[] = "command";
static char baxter_core_msgs__msg__EndEffectorState__FIELD_NAME__command_sender[] = "command_sender";
static char baxter_core_msgs__msg__EndEffectorState__FIELD_NAME__command_sequence[] = "command_sequence";

static rosidl_runtime_c__type_description__Field baxter_core_msgs__msg__EndEffectorState__FIELDS[] = {
  {
    {baxter_core_msgs__msg__EndEffectorState__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {baxter_core_msgs__msg__EndEffectorState__FIELD_NAME__id, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {baxter_core_msgs__msg__EndEffectorState__FIELD_NAME__enabled, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {baxter_core_msgs__msg__EndEffectorState__FIELD_NAME__calibrated, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {baxter_core_msgs__msg__EndEffectorState__FIELD_NAME__ready, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {baxter_core_msgs__msg__EndEffectorState__FIELD_NAME__moving, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {baxter_core_msgs__msg__EndEffectorState__FIELD_NAME__gripping, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {baxter_core_msgs__msg__EndEffectorState__FIELD_NAME__missed, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {baxter_core_msgs__msg__EndEffectorState__FIELD_NAME__error, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {baxter_core_msgs__msg__EndEffectorState__FIELD_NAME__reverse, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {baxter_core_msgs__msg__EndEffectorState__FIELD_NAME__position, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {baxter_core_msgs__msg__EndEffectorState__FIELD_NAME__force, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {baxter_core_msgs__msg__EndEffectorState__FIELD_NAME__state, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {baxter_core_msgs__msg__EndEffectorState__FIELD_NAME__command, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {baxter_core_msgs__msg__EndEffectorState__FIELD_NAME__command_sender, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {baxter_core_msgs__msg__EndEffectorState__FIELD_NAME__command_sequence, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription baxter_core_msgs__msg__EndEffectorState__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
baxter_core_msgs__msg__EndEffectorState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {baxter_core_msgs__msg__EndEffectorState__TYPE_NAME, 37, 37},
      {baxter_core_msgs__msg__EndEffectorState__FIELDS, 16, 16},
    },
    {baxter_core_msgs__msg__EndEffectorState__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#\n"
  "builtin_interfaces/Time timestamp              # time when state was updated\n"
  "uint32 id                  # EndEffectorId\n"
  "#\n"
  "# The following State fields are tristate: 0 = false; 1 = true; 2 = unknown/unsupported\n"
  "uint8   STATE_FALSE = 0\n"
  "uint8   STATE_TRUE = 1\n"
  "uint8   STATE_UNKNOWN = 2\n"
  "#\n"
  "uint8   enabled             # true if enabled\n"
  "uint8   calibrated          # true if calibration has completed\n"
  "uint8   ready               # true if ready for another command\n"
  "uint8   moving              # true if moving\n"
  "uint8   gripping            # true if gripping\n"
  "uint8   missed              # true if GRIP/GOTO/SET was commanded and the gripper reaches the end of travel\n"
  "uint8   error               # true if the gripper is in an error state\n"
  "uint8   reverse             # true if the gripper is in reverse mode\n"
  "#\n"
  "float32 position            # position as a percentage of the max position;      0=closed - 100=open\n"
  "#\n"
  "float32 POSITION_CLOSED = 0.0\n"
  "float32 POSITION_OPEN   = 100.0\n"
  "#\n"
  "float32 force               # force as a percentage of max force;                0=none   - 100=max\n"
  "#\n"
  "float32 FORCE_MIN = 0.0\n"
  "float32 FORCE_MAX = 100.0\n"
  "#\n"
  "string state                # JSON: other state information\n"
  "#\n"
  "string command              # from the last command message\n"
  "string command_sender\n"
  "uint32 command_sequence\n"
  "#";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
baxter_core_msgs__msg__EndEffectorState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {baxter_core_msgs__msg__EndEffectorState__TYPE_NAME, 37, 37},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1294, 1294},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
baxter_core_msgs__msg__EndEffectorState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *baxter_core_msgs__msg__EndEffectorState__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
