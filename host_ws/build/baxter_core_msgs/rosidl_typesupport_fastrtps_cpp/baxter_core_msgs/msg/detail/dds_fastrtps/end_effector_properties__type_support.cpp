// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from baxter_core_msgs:msg/EndEffectorProperties.idl
// generated code does not contain a copyright notice
#include "baxter_core_msgs/msg/detail/end_effector_properties__rosidl_typesupport_fastrtps_cpp.hpp"
#include "baxter_core_msgs/msg/detail/end_effector_properties__functions.h"
#include "baxter_core_msgs/msg/detail/end_effector_properties__struct.hpp"

#include <cstddef>
#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace baxter_core_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_baxter_core_msgs
cdr_serialize(
  const baxter_core_msgs::msg::EndEffectorProperties & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: id
  cdr << ros_message.id;

  // Member: ui_type
  cdr << ros_message.ui_type;

  // Member: manufacturer
  cdr << ros_message.manufacturer;

  // Member: product
  cdr << ros_message.product;

  // Member: serial_number
  cdr << ros_message.serial_number;

  // Member: hardware_rev
  cdr << ros_message.hardware_rev;

  // Member: firmware_rev
  cdr << ros_message.firmware_rev;

  // Member: firmware_date
  cdr << ros_message.firmware_date;

  // Member: has_calibration
  cdr << (ros_message.has_calibration ? true : false);

  // Member: controls_grip
  cdr << (ros_message.controls_grip ? true : false);

  // Member: senses_grip
  cdr << (ros_message.senses_grip ? true : false);

  // Member: reverses_grip
  cdr << (ros_message.reverses_grip ? true : false);

  // Member: controls_force
  cdr << (ros_message.controls_force ? true : false);

  // Member: senses_force
  cdr << (ros_message.senses_force ? true : false);

  // Member: controls_position
  cdr << (ros_message.controls_position ? true : false);

  // Member: senses_position
  cdr << (ros_message.senses_position ? true : false);

  // Member: properties
  cdr << ros_message.properties;

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_baxter_core_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  baxter_core_msgs::msg::EndEffectorProperties & ros_message)
{
  // Member: id
  cdr >> ros_message.id;

  // Member: ui_type
  cdr >> ros_message.ui_type;

  // Member: manufacturer
  cdr >> ros_message.manufacturer;

  // Member: product
  cdr >> ros_message.product;

  // Member: serial_number
  cdr >> ros_message.serial_number;

  // Member: hardware_rev
  cdr >> ros_message.hardware_rev;

  // Member: firmware_rev
  cdr >> ros_message.firmware_rev;

  // Member: firmware_date
  cdr >> ros_message.firmware_date;

  // Member: has_calibration
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.has_calibration = tmp ? true : false;
  }

  // Member: controls_grip
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.controls_grip = tmp ? true : false;
  }

  // Member: senses_grip
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.senses_grip = tmp ? true : false;
  }

  // Member: reverses_grip
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.reverses_grip = tmp ? true : false;
  }

  // Member: controls_force
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.controls_force = tmp ? true : false;
  }

  // Member: senses_force
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.senses_force = tmp ? true : false;
  }

  // Member: controls_position
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.controls_position = tmp ? true : false;
  }

  // Member: senses_position
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.senses_position = tmp ? true : false;
  }

  // Member: properties
  cdr >> ros_message.properties;

  return true;
}  // NOLINT(readability/fn_size)


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_baxter_core_msgs
get_serialized_size(
  const baxter_core_msgs::msg::EndEffectorProperties & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: id
  {
    size_t item_size = sizeof(ros_message.id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: ui_type
  {
    size_t item_size = sizeof(ros_message.ui_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: manufacturer
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.manufacturer.size() + 1);

  // Member: product
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.product.size() + 1);

  // Member: serial_number
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.serial_number.size() + 1);

  // Member: hardware_rev
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.hardware_rev.size() + 1);

  // Member: firmware_rev
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.firmware_rev.size() + 1);

  // Member: firmware_date
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.firmware_date.size() + 1);

  // Member: has_calibration
  {
    size_t item_size = sizeof(ros_message.has_calibration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: controls_grip
  {
    size_t item_size = sizeof(ros_message.controls_grip);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: senses_grip
  {
    size_t item_size = sizeof(ros_message.senses_grip);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: reverses_grip
  {
    size_t item_size = sizeof(ros_message.reverses_grip);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: controls_force
  {
    size_t item_size = sizeof(ros_message.controls_force);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: senses_force
  {
    size_t item_size = sizeof(ros_message.senses_force);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: controls_position
  {
    size_t item_size = sizeof(ros_message.controls_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: senses_position
  {
    size_t item_size = sizeof(ros_message.senses_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: properties
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.properties.size() + 1);

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_baxter_core_msgs
max_serialized_size_EndEffectorProperties(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Member: id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: ui_type
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: manufacturer
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // Member: product
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // Member: serial_number
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // Member: hardware_rev
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // Member: firmware_rev
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // Member: firmware_date
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // Member: has_calibration
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: controls_grip
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: senses_grip
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: reverses_grip
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: controls_force
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: senses_force
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: controls_position
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: senses_position
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: properties
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = baxter_core_msgs::msg::EndEffectorProperties;
    is_plain =
      (
      offsetof(DataType, properties) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_baxter_core_msgs
cdr_serialize_key(
  const baxter_core_msgs::msg::EndEffectorProperties & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: id
  cdr << ros_message.id;

  // Member: ui_type
  cdr << ros_message.ui_type;

  // Member: manufacturer
  cdr << ros_message.manufacturer;

  // Member: product
  cdr << ros_message.product;

  // Member: serial_number
  cdr << ros_message.serial_number;

  // Member: hardware_rev
  cdr << ros_message.hardware_rev;

  // Member: firmware_rev
  cdr << ros_message.firmware_rev;

  // Member: firmware_date
  cdr << ros_message.firmware_date;

  // Member: has_calibration
  cdr << (ros_message.has_calibration ? true : false);

  // Member: controls_grip
  cdr << (ros_message.controls_grip ? true : false);

  // Member: senses_grip
  cdr << (ros_message.senses_grip ? true : false);

  // Member: reverses_grip
  cdr << (ros_message.reverses_grip ? true : false);

  // Member: controls_force
  cdr << (ros_message.controls_force ? true : false);

  // Member: senses_force
  cdr << (ros_message.senses_force ? true : false);

  // Member: controls_position
  cdr << (ros_message.controls_position ? true : false);

  // Member: senses_position
  cdr << (ros_message.senses_position ? true : false);

  // Member: properties
  cdr << ros_message.properties;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_baxter_core_msgs
get_serialized_size_key(
  const baxter_core_msgs::msg::EndEffectorProperties & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: id
  {
    size_t item_size = sizeof(ros_message.id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: ui_type
  {
    size_t item_size = sizeof(ros_message.ui_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: manufacturer
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.manufacturer.size() + 1);

  // Member: product
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.product.size() + 1);

  // Member: serial_number
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.serial_number.size() + 1);

  // Member: hardware_rev
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.hardware_rev.size() + 1);

  // Member: firmware_rev
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.firmware_rev.size() + 1);

  // Member: firmware_date
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.firmware_date.size() + 1);

  // Member: has_calibration
  {
    size_t item_size = sizeof(ros_message.has_calibration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: controls_grip
  {
    size_t item_size = sizeof(ros_message.controls_grip);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: senses_grip
  {
    size_t item_size = sizeof(ros_message.senses_grip);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: reverses_grip
  {
    size_t item_size = sizeof(ros_message.reverses_grip);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: controls_force
  {
    size_t item_size = sizeof(ros_message.controls_force);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: senses_force
  {
    size_t item_size = sizeof(ros_message.senses_force);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: controls_position
  {
    size_t item_size = sizeof(ros_message.controls_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: senses_position
  {
    size_t item_size = sizeof(ros_message.senses_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: properties
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.properties.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_baxter_core_msgs
max_serialized_size_key_EndEffectorProperties(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Member: id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: ui_type
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: manufacturer
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: product
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: serial_number
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: hardware_rev
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: firmware_rev
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: firmware_date
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: has_calibration
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: controls_grip
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: senses_grip
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: reverses_grip
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: controls_force
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: senses_force
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: controls_position
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: senses_position
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: properties
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = baxter_core_msgs::msg::EndEffectorProperties;
    is_plain =
      (
      offsetof(DataType, properties) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _EndEffectorProperties__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const baxter_core_msgs::msg::EndEffectorProperties *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _EndEffectorProperties__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<baxter_core_msgs::msg::EndEffectorProperties *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _EndEffectorProperties__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const baxter_core_msgs::msg::EndEffectorProperties *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _EndEffectorProperties__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_EndEffectorProperties(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _EndEffectorProperties__callbacks = {
  "baxter_core_msgs::msg",
  "EndEffectorProperties",
  _EndEffectorProperties__cdr_serialize,
  _EndEffectorProperties__cdr_deserialize,
  _EndEffectorProperties__get_serialized_size,
  _EndEffectorProperties__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _EndEffectorProperties__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_EndEffectorProperties__callbacks,
  get_message_typesupport_handle_function,
  &baxter_core_msgs__msg__EndEffectorProperties__get_type_hash,
  &baxter_core_msgs__msg__EndEffectorProperties__get_type_description,
  &baxter_core_msgs__msg__EndEffectorProperties__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace baxter_core_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_baxter_core_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<baxter_core_msgs::msg::EndEffectorProperties>()
{
  return &baxter_core_msgs::msg::typesupport_fastrtps_cpp::_EndEffectorProperties__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, baxter_core_msgs, msg, EndEffectorProperties)() {
  return &baxter_core_msgs::msg::typesupport_fastrtps_cpp::_EndEffectorProperties__handle;
}

#ifdef __cplusplus
}
#endif
