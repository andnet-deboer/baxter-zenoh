// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from baxter_core_msgs:msg/AnalogIOStates.idl
// generated code does not contain a copyright notice
#include "baxter_core_msgs/msg/detail/analog_io_states__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "baxter_core_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "baxter_core_msgs/msg/detail/analog_io_states__struct.h"
#include "baxter_core_msgs/msg/detail/analog_io_states__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "baxter_core_msgs/msg/detail/analog_io_state__functions.h"  // states
#include "rosidl_runtime_c/string.h"  // names
#include "rosidl_runtime_c/string_functions.h"  // names

// forward declare type support functions

bool cdr_serialize_baxter_core_msgs__msg__AnalogIOState(
  const baxter_core_msgs__msg__AnalogIOState * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_baxter_core_msgs__msg__AnalogIOState(
  eprosima::fastcdr::Cdr & cdr,
  baxter_core_msgs__msg__AnalogIOState * ros_message);

size_t get_serialized_size_baxter_core_msgs__msg__AnalogIOState(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_baxter_core_msgs__msg__AnalogIOState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_baxter_core_msgs__msg__AnalogIOState(
  const baxter_core_msgs__msg__AnalogIOState * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_baxter_core_msgs__msg__AnalogIOState(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_baxter_core_msgs__msg__AnalogIOState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, baxter_core_msgs, msg, AnalogIOState)();


using _AnalogIOStates__ros_msg_type = baxter_core_msgs__msg__AnalogIOStates;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_baxter_core_msgs
bool cdr_serialize_baxter_core_msgs__msg__AnalogIOStates(
  const baxter_core_msgs__msg__AnalogIOStates * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: names
  {
    size_t size = ros_message->names.size;
    auto array_ptr = ros_message->names.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
      if (str->capacity == 0 || str->capacity <= str->size) {
        fprintf(stderr, "string capacity not greater than size\n");
        return false;
      }
      if (str->data[str->size] != '\0') {
        fprintf(stderr, "string not null-terminated\n");
        return false;
      }
      cdr << str->data;
    }
  }

  // Field name: states
  {
    size_t size = ros_message->states.size;
    auto array_ptr = ros_message->states.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_baxter_core_msgs__msg__AnalogIOState(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_baxter_core_msgs
bool cdr_deserialize_baxter_core_msgs__msg__AnalogIOStates(
  eprosima::fastcdr::Cdr & cdr,
  baxter_core_msgs__msg__AnalogIOStates * ros_message)
{
  // Field name: names
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->names.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->names);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->names, size)) {
      fprintf(stderr, "failed to create array for field 'names'");
      return false;
    }
    auto array_ptr = ros_message->names.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'names'\n");
        return false;
      }
    }
  }

  // Field name: states
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->states.data) {
      baxter_core_msgs__msg__AnalogIOState__Sequence__fini(&ros_message->states);
    }
    if (!baxter_core_msgs__msg__AnalogIOState__Sequence__init(&ros_message->states, size)) {
      fprintf(stderr, "failed to create array for field 'states'");
      return false;
    }
    auto array_ptr = ros_message->states.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_baxter_core_msgs__msg__AnalogIOState(cdr, &array_ptr[i]);
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_baxter_core_msgs
size_t get_serialized_size_baxter_core_msgs__msg__AnalogIOStates(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AnalogIOStates__ros_msg_type * ros_message = static_cast<const _AnalogIOStates__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: names
  {
    size_t array_size = ros_message->names.size;
    auto array_ptr = ros_message->names.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  // Field name: states
  {
    size_t array_size = ros_message->states.size;
    auto array_ptr = ros_message->states.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_baxter_core_msgs__msg__AnalogIOState(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_baxter_core_msgs
size_t max_serialized_size_baxter_core_msgs__msg__AnalogIOStates(
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

  // Field name: names
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: states
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_baxter_core_msgs__msg__AnalogIOState(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = baxter_core_msgs__msg__AnalogIOStates;
    is_plain =
      (
      offsetof(DataType, states) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_baxter_core_msgs
bool cdr_serialize_key_baxter_core_msgs__msg__AnalogIOStates(
  const baxter_core_msgs__msg__AnalogIOStates * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: names
  {
    size_t size = ros_message->names.size;
    auto array_ptr = ros_message->names.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
      if (str->capacity == 0 || str->capacity <= str->size) {
        fprintf(stderr, "string capacity not greater than size\n");
        return false;
      }
      if (str->data[str->size] != '\0') {
        fprintf(stderr, "string not null-terminated\n");
        return false;
      }
      cdr << str->data;
    }
  }

  // Field name: states
  {
    size_t size = ros_message->states.size;
    auto array_ptr = ros_message->states.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_baxter_core_msgs__msg__AnalogIOState(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_baxter_core_msgs
size_t get_serialized_size_key_baxter_core_msgs__msg__AnalogIOStates(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AnalogIOStates__ros_msg_type * ros_message = static_cast<const _AnalogIOStates__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: names
  {
    size_t array_size = ros_message->names.size;
    auto array_ptr = ros_message->names.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  // Field name: states
  {
    size_t array_size = ros_message->states.size;
    auto array_ptr = ros_message->states.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_baxter_core_msgs__msg__AnalogIOState(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_baxter_core_msgs
size_t max_serialized_size_key_baxter_core_msgs__msg__AnalogIOStates(
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
  // Field name: names
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: states
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_baxter_core_msgs__msg__AnalogIOState(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = baxter_core_msgs__msg__AnalogIOStates;
    is_plain =
      (
      offsetof(DataType, states) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _AnalogIOStates__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const baxter_core_msgs__msg__AnalogIOStates * ros_message = static_cast<const baxter_core_msgs__msg__AnalogIOStates *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_baxter_core_msgs__msg__AnalogIOStates(ros_message, cdr);
}

static bool _AnalogIOStates__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  baxter_core_msgs__msg__AnalogIOStates * ros_message = static_cast<baxter_core_msgs__msg__AnalogIOStates *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_baxter_core_msgs__msg__AnalogIOStates(cdr, ros_message);
}

static uint32_t _AnalogIOStates__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_baxter_core_msgs__msg__AnalogIOStates(
      untyped_ros_message, 0));
}

static size_t _AnalogIOStates__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_baxter_core_msgs__msg__AnalogIOStates(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_AnalogIOStates = {
  "baxter_core_msgs::msg",
  "AnalogIOStates",
  _AnalogIOStates__cdr_serialize,
  _AnalogIOStates__cdr_deserialize,
  _AnalogIOStates__get_serialized_size,
  _AnalogIOStates__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _AnalogIOStates__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_AnalogIOStates,
  get_message_typesupport_handle_function,
  &baxter_core_msgs__msg__AnalogIOStates__get_type_hash,
  &baxter_core_msgs__msg__AnalogIOStates__get_type_description,
  &baxter_core_msgs__msg__AnalogIOStates__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, baxter_core_msgs, msg, AnalogIOStates)() {
  return &_AnalogIOStates__type_support;
}

#if defined(__cplusplus)
}
#endif
