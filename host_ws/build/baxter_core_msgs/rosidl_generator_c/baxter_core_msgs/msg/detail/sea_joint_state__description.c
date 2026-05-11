// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from baxter_core_msgs:msg/SEAJointState.idl
// generated code does not contain a copyright notice

#include "baxter_core_msgs/msg/detail/sea_joint_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_baxter_core_msgs
const rosidl_type_hash_t *
baxter_core_msgs__msg__SEAJointState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb4, 0x90, 0xc5, 0x7e, 0xac, 0xb9, 0x42, 0xa9,
      0x82, 0x42, 0xaa, 0x3f, 0x9c, 0x7c, 0xa5, 0x6b,
      0xc0, 0xd6, 0x38, 0xef, 0xe3, 0xba, 0x20, 0xb6,
      0x83, 0xde, 0x0b, 0x37, 0xf5, 0xc5, 0x17, 0xb8,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "std_msgs/msg/detail/header__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char baxter_core_msgs__msg__SEAJointState__TYPE_NAME[] = "baxter_core_msgs/msg/SEAJointState";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char baxter_core_msgs__msg__SEAJointState__FIELD_NAME__header[] = "header";
static char baxter_core_msgs__msg__SEAJointState__FIELD_NAME__name[] = "name";
static char baxter_core_msgs__msg__SEAJointState__FIELD_NAME__commanded_position[] = "commanded_position";
static char baxter_core_msgs__msg__SEAJointState__FIELD_NAME__commanded_velocity[] = "commanded_velocity";
static char baxter_core_msgs__msg__SEAJointState__FIELD_NAME__commanded_acceleration[] = "commanded_acceleration";
static char baxter_core_msgs__msg__SEAJointState__FIELD_NAME__commanded_effort[] = "commanded_effort";
static char baxter_core_msgs__msg__SEAJointState__FIELD_NAME__actual_position[] = "actual_position";
static char baxter_core_msgs__msg__SEAJointState__FIELD_NAME__actual_velocity[] = "actual_velocity";
static char baxter_core_msgs__msg__SEAJointState__FIELD_NAME__actual_effort[] = "actual_effort";
static char baxter_core_msgs__msg__SEAJointState__FIELD_NAME__gravity_model_effort[] = "gravity_model_effort";
static char baxter_core_msgs__msg__SEAJointState__FIELD_NAME__gravity_only[] = "gravity_only";
static char baxter_core_msgs__msg__SEAJointState__FIELD_NAME__hysteresis_model_effort[] = "hysteresis_model_effort";
static char baxter_core_msgs__msg__SEAJointState__FIELD_NAME__crosstalk_model_effort[] = "crosstalk_model_effort";
static char baxter_core_msgs__msg__SEAJointState__FIELD_NAME__hyst_state[] = "hyst_state";

static rosidl_runtime_c__type_description__Field baxter_core_msgs__msg__SEAJointState__FIELDS[] = {
  {
    {baxter_core_msgs__msg__SEAJointState__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {baxter_core_msgs__msg__SEAJointState__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {baxter_core_msgs__msg__SEAJointState__FIELD_NAME__commanded_position, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {baxter_core_msgs__msg__SEAJointState__FIELD_NAME__commanded_velocity, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {baxter_core_msgs__msg__SEAJointState__FIELD_NAME__commanded_acceleration, 22, 22},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {baxter_core_msgs__msg__SEAJointState__FIELD_NAME__commanded_effort, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {baxter_core_msgs__msg__SEAJointState__FIELD_NAME__actual_position, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {baxter_core_msgs__msg__SEAJointState__FIELD_NAME__actual_velocity, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {baxter_core_msgs__msg__SEAJointState__FIELD_NAME__actual_effort, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {baxter_core_msgs__msg__SEAJointState__FIELD_NAME__gravity_model_effort, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {baxter_core_msgs__msg__SEAJointState__FIELD_NAME__gravity_only, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {baxter_core_msgs__msg__SEAJointState__FIELD_NAME__hysteresis_model_effort, 23, 23},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {baxter_core_msgs__msg__SEAJointState__FIELD_NAME__crosstalk_model_effort, 22, 22},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {baxter_core_msgs__msg__SEAJointState__FIELD_NAME__hyst_state, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription baxter_core_msgs__msg__SEAJointState__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
baxter_core_msgs__msg__SEAJointState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {baxter_core_msgs__msg__SEAJointState__TYPE_NAME, 34, 34},
      {baxter_core_msgs__msg__SEAJointState__FIELDS, 14, 14},
    },
    {baxter_core_msgs__msg__SEAJointState__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# This is a message that holds data to describe the state of a set of torque controlled joints.\n"
  "#\n"
  "# The state of each joint (revolute or prismatic) is defined by:\n"
  "#  * the position of the joint (rad or m),\n"
  "#  * the velocity of the joint (rad/s or m/s) and\n"
  "#  * the effort that is applied in the joint (Nm or N).\n"
  "#\n"
  "# Each joint is uniquely identified by its name\n"
  "# The header specifies the time at which the joint states were recorded. All the joint states\n"
  "# in one message have to be recorded at the same time.\n"
  "#\n"
  "# This message consists of a multiple arrays, one for each part of the joint state.\n"
  "# The goal is to make each of the fields optional. When e.g. your joints have no\n"
  "# effort associated with them, you can leave the effort array empty.\n"
  "#\n"
  "# All arrays in this message should have the same size, or be empty.\n"
  "# This is the only way to uniquely associate the joint name with the correct\n"
  "# states.\n"
  "\n"
  "\n"
  "std_msgs/Header header\n"
  "\n"
  "string[]  name\n"
  "float64[] commanded_position\n"
  "float64[] commanded_velocity\n"
  "float64[] commanded_acceleration\n"
  "float64[] commanded_effort\n"
  "float64[] actual_position\n"
  "float64[] actual_velocity\n"
  "float64[] actual_effort\n"
  "# This includes the inertial feed forward torques when applicable.\n"
  "float64[] gravity_model_effort\n"
  "# This is the torque required to hold the arm against gravity returned by KDL\n"
  "# if the arm was stationary.  This does not include inertial feed forward\n"
  "# torques (even when we have them) or any of the corrections (i.e. spring\n"
  "# hysteresis, crosstalk, etc) we make to the KDL model.\n"
  "float64[] gravity_only\n"
  "float64[] hysteresis_model_effort\n"
  "float64[] crosstalk_model_effort\n"
  "float64   hyst_state";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
baxter_core_msgs__msg__SEAJointState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {baxter_core_msgs__msg__SEAJointState__TYPE_NAME, 34, 34},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1630, 1630},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
baxter_core_msgs__msg__SEAJointState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *baxter_core_msgs__msg__SEAJointState__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
