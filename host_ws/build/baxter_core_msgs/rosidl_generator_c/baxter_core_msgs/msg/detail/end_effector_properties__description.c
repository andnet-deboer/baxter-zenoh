// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from baxter_core_msgs:msg/EndEffectorProperties.idl
// generated code does not contain a copyright notice

#include "baxter_core_msgs/msg/detail/end_effector_properties__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_baxter_core_msgs
const rosidl_type_hash_t *
baxter_core_msgs__msg__EndEffectorProperties__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd5, 0xeb, 0x63, 0xac, 0xeb, 0x34, 0x7d, 0x0d,
      0x76, 0x6c, 0xe8, 0x3b, 0x37, 0x2a, 0x56, 0xcb,
      0x98, 0x22, 0x8a, 0xd6, 0xbf, 0xc1, 0x60, 0x60,
      0xd3, 0xc9, 0xc4, 0xab, 0xa9, 0x03, 0x57, 0x01,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char baxter_core_msgs__msg__EndEffectorProperties__TYPE_NAME[] = "baxter_core_msgs/msg/EndEffectorProperties";

// Define type names, field names, and default values
static char baxter_core_msgs__msg__EndEffectorProperties__FIELD_NAME__id[] = "id";
static char baxter_core_msgs__msg__EndEffectorProperties__FIELD_NAME__ui_type[] = "ui_type";
static char baxter_core_msgs__msg__EndEffectorProperties__FIELD_NAME__manufacturer[] = "manufacturer";
static char baxter_core_msgs__msg__EndEffectorProperties__FIELD_NAME__product[] = "product";
static char baxter_core_msgs__msg__EndEffectorProperties__FIELD_NAME__serial_number[] = "serial_number";
static char baxter_core_msgs__msg__EndEffectorProperties__FIELD_NAME__hardware_rev[] = "hardware_rev";
static char baxter_core_msgs__msg__EndEffectorProperties__FIELD_NAME__firmware_rev[] = "firmware_rev";
static char baxter_core_msgs__msg__EndEffectorProperties__FIELD_NAME__firmware_date[] = "firmware_date";
static char baxter_core_msgs__msg__EndEffectorProperties__FIELD_NAME__has_calibration[] = "has_calibration";
static char baxter_core_msgs__msg__EndEffectorProperties__FIELD_NAME__controls_grip[] = "controls_grip";
static char baxter_core_msgs__msg__EndEffectorProperties__FIELD_NAME__senses_grip[] = "senses_grip";
static char baxter_core_msgs__msg__EndEffectorProperties__FIELD_NAME__reverses_grip[] = "reverses_grip";
static char baxter_core_msgs__msg__EndEffectorProperties__FIELD_NAME__controls_force[] = "controls_force";
static char baxter_core_msgs__msg__EndEffectorProperties__FIELD_NAME__senses_force[] = "senses_force";
static char baxter_core_msgs__msg__EndEffectorProperties__FIELD_NAME__controls_position[] = "controls_position";
static char baxter_core_msgs__msg__EndEffectorProperties__FIELD_NAME__senses_position[] = "senses_position";
static char baxter_core_msgs__msg__EndEffectorProperties__FIELD_NAME__properties[] = "properties";

static rosidl_runtime_c__type_description__Field baxter_core_msgs__msg__EndEffectorProperties__FIELDS[] = {
  {
    {baxter_core_msgs__msg__EndEffectorProperties__FIELD_NAME__id, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {baxter_core_msgs__msg__EndEffectorProperties__FIELD_NAME__ui_type, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {baxter_core_msgs__msg__EndEffectorProperties__FIELD_NAME__manufacturer, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {baxter_core_msgs__msg__EndEffectorProperties__FIELD_NAME__product, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {baxter_core_msgs__msg__EndEffectorProperties__FIELD_NAME__serial_number, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {baxter_core_msgs__msg__EndEffectorProperties__FIELD_NAME__hardware_rev, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {baxter_core_msgs__msg__EndEffectorProperties__FIELD_NAME__firmware_rev, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {baxter_core_msgs__msg__EndEffectorProperties__FIELD_NAME__firmware_date, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {baxter_core_msgs__msg__EndEffectorProperties__FIELD_NAME__has_calibration, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {baxter_core_msgs__msg__EndEffectorProperties__FIELD_NAME__controls_grip, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {baxter_core_msgs__msg__EndEffectorProperties__FIELD_NAME__senses_grip, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {baxter_core_msgs__msg__EndEffectorProperties__FIELD_NAME__reverses_grip, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {baxter_core_msgs__msg__EndEffectorProperties__FIELD_NAME__controls_force, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {baxter_core_msgs__msg__EndEffectorProperties__FIELD_NAME__senses_force, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {baxter_core_msgs__msg__EndEffectorProperties__FIELD_NAME__controls_position, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {baxter_core_msgs__msg__EndEffectorProperties__FIELD_NAME__senses_position, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {baxter_core_msgs__msg__EndEffectorProperties__FIELD_NAME__properties, 10, 10},
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
baxter_core_msgs__msg__EndEffectorProperties__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {baxter_core_msgs__msg__EndEffectorProperties__TYPE_NAME, 42, 42},
      {baxter_core_msgs__msg__EndEffectorProperties__FIELDS, 17, 17},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint32 id               # EndEffectorId\n"
  "uint8  ui_type\n"
  "# End Effector type enumeration, for the UI:\n"
  "uint8  NO_GRIPPER = 0\n"
  "uint8  SUCTION_CUP_GRIPPER = 1\n"
  "uint8  ELECTRIC_GRIPPER = 2\n"
  "uint8  PASSIVE_GRIPPER = 3\n"
  "string manufacturer     # Manufacturer name\n"
  "string product          # Product name\n"
  "string serial_number    # Serial number, optional\n"
  "string hardware_rev     # Hardware revision, optional\n"
  "string firmware_rev     # Firmware revision, optional\n"
  "string firmware_date    # Firmware date, optional\n"
  "#\n"
  "# End Effector Capabilities\n"
  "bool   has_calibration  # true if the gripper has calibration\n"
  "bool   controls_grip    # true if the gripper has grip/release control\n"
  "bool   senses_grip      # true if the gripper has grip sense\n"
  "bool   reverses_grip    # true if the gripper has reverse-grip mode\n"
  "\n"
  "bool   controls_force   # true if the gripper has force control\n"
  "bool   senses_force     # true if the gripper has force sense\n"
  "\n"
  "bool   controls_position # true if the gripper has position control\n"
  "bool   senses_position   # true if the gripper has position sense\n"
  "#\n"
  "string properties       # JSON; other properties";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
baxter_core_msgs__msg__EndEffectorProperties__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {baxter_core_msgs__msg__EndEffectorProperties__TYPE_NAME, 42, 42},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1104, 1104},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
baxter_core_msgs__msg__EndEffectorProperties__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *baxter_core_msgs__msg__EndEffectorProperties__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
