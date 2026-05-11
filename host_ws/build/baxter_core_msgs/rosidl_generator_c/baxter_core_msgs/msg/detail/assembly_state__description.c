// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from baxter_core_msgs:msg/AssemblyState.idl
// generated code does not contain a copyright notice

#include "baxter_core_msgs/msg/detail/assembly_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_baxter_core_msgs
const rosidl_type_hash_t *
baxter_core_msgs__msg__AssemblyState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd1, 0x7b, 0xa6, 0x14, 0x1f, 0x2b, 0x11, 0x0b,
      0xf2, 0x94, 0x06, 0xf2, 0x6a, 0x79, 0x3a, 0x82,
      0x44, 0x16, 0x2a, 0xae, 0x53, 0xff, 0x2a, 0x80,
      0x43, 0x94, 0xf2, 0x11, 0x02, 0xc1, 0x2e, 0xa2,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char baxter_core_msgs__msg__AssemblyState__TYPE_NAME[] = "baxter_core_msgs/msg/AssemblyState";

// Define type names, field names, and default values
static char baxter_core_msgs__msg__AssemblyState__FIELD_NAME__ready[] = "ready";
static char baxter_core_msgs__msg__AssemblyState__FIELD_NAME__enabled[] = "enabled";
static char baxter_core_msgs__msg__AssemblyState__FIELD_NAME__stopped[] = "stopped";
static char baxter_core_msgs__msg__AssemblyState__FIELD_NAME__error[] = "error";
static char baxter_core_msgs__msg__AssemblyState__FIELD_NAME__estop_button[] = "estop_button";
static char baxter_core_msgs__msg__AssemblyState__FIELD_NAME__estop_source[] = "estop_source";

static rosidl_runtime_c__type_description__Field baxter_core_msgs__msg__AssemblyState__FIELDS[] = {
  {
    {baxter_core_msgs__msg__AssemblyState__FIELD_NAME__ready, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {baxter_core_msgs__msg__AssemblyState__FIELD_NAME__enabled, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {baxter_core_msgs__msg__AssemblyState__FIELD_NAME__stopped, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {baxter_core_msgs__msg__AssemblyState__FIELD_NAME__error, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {baxter_core_msgs__msg__AssemblyState__FIELD_NAME__estop_button, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {baxter_core_msgs__msg__AssemblyState__FIELD_NAME__estop_source, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
baxter_core_msgs__msg__AssemblyState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {baxter_core_msgs__msg__AssemblyState__TYPE_NAME, 34, 34},
      {baxter_core_msgs__msg__AssemblyState__FIELDS, 6, 6},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "bool ready               # true if enabled and ready to operate, e.g., not homing\n"
  "bool enabled             # true if enabled\n"
  "bool stopped             # true if stopped -- e-stop asserted\n"
  "bool error               # true if a component of the assembly has an error\n"
  "#\n"
  "# The following are specific to the robot top-level assembly:\n"
  "uint8  estop_button      # One of the following:\n"
  "uint8   ESTOP_BUTTON_UNPRESSED = 0   # Robot is not stopped and button is not pressed\n"
  "uint8   ESTOP_BUTTON_PRESSED   = 1\n"
  "uint8   ESTOP_BUTTON_UNKNOWN   = 2   # STATE_UNKNOWN when estop was asserted by a non-user source\n"
  "uint8   ESTOP_BUTTON_RELEASED  = 3   # Was pressed, is now known to be released, but robot is still stopped.\n"
  "#\n"
  "uint8  estop_source      # If stopped is true, the source of the e-stop.  One of the following:\n"
  "uint8  ESTOP_SOURCE_NONE      = 0   # e-stop is not asserted\n"
  "uint8  ESTOP_SOURCE_USER      = 1   # e-stop source is user input (the red button)\n"
  "uint8  ESTOP_SOURCE_UNKNOWN   = 2   # e-stop source is unknown\n"
  "uint8  ESTOP_SOURCE_FAULT     = 3   # MotorController asserted e-stop in response to a joint fault\n"
  "uint8  ESTOP_SOURCE_BRAIN     = 4   # MotorController asserted e-stop in response to a lapse of the brain heartbeat";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
baxter_core_msgs__msg__AssemblyState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {baxter_core_msgs__msg__AssemblyState__TYPE_NAME, 34, 34},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1224, 1224},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
baxter_core_msgs__msg__AssemblyState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *baxter_core_msgs__msg__AssemblyState__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
