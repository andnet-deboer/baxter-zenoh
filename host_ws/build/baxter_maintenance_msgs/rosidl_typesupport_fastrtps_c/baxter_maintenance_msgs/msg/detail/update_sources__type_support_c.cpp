// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from baxter_maintenance_msgs:msg/UpdateSources.idl
// generated code does not contain a copyright notice
#include "baxter_maintenance_msgs/msg/detail/update_sources__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "baxter_maintenance_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "baxter_maintenance_msgs/msg/detail/update_sources__struct.h"
#include "baxter_maintenance_msgs/msg/detail/update_sources__functions.h"
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

#include "baxter_maintenance_msgs/msg/detail/update_source__functions.h"  // sources
#include "rosidl_runtime_c/string.h"  // uuid
#include "rosidl_runtime_c/string_functions.h"  // uuid

// forward declare type support functions

bool cdr_serialize_baxter_maintenance_msgs__msg__UpdateSource(
  const baxter_maintenance_msgs__msg__UpdateSource * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_baxter_maintenance_msgs__msg__UpdateSource(
  eprosima::fastcdr::Cdr & cdr,
  baxter_maintenance_msgs__msg__UpdateSource * ros_message);

size_t get_serialized_size_baxter_maintenance_msgs__msg__UpdateSource(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_baxter_maintenance_msgs__msg__UpdateSource(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_baxter_maintenance_msgs__msg__UpdateSource(
  const baxter_maintenance_msgs__msg__UpdateSource * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_baxter_maintenance_msgs__msg__UpdateSource(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_baxter_maintenance_msgs__msg__UpdateSource(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, baxter_maintenance_msgs, msg, UpdateSource)();


using _UpdateSources__ros_msg_type = baxter_maintenance_msgs__msg__UpdateSources;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_baxter_maintenance_msgs
bool cdr_serialize_baxter_maintenance_msgs__msg__UpdateSources(
  const baxter_maintenance_msgs__msg__UpdateSources * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: uuid
  {
    const rosidl_runtime_c__String * str = &ros_message->uuid;
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

  // Field name: sources
  {
    size_t size = ros_message->sources.size;
    auto array_ptr = ros_message->sources.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_baxter_maintenance_msgs__msg__UpdateSource(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_baxter_maintenance_msgs
bool cdr_deserialize_baxter_maintenance_msgs__msg__UpdateSources(
  eprosima::fastcdr::Cdr & cdr,
  baxter_maintenance_msgs__msg__UpdateSources * ros_message)
{
  // Field name: uuid
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->uuid.data) {
      rosidl_runtime_c__String__init(&ros_message->uuid);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->uuid,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'uuid'\n");
      return false;
    }
  }

  // Field name: sources
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

    if (ros_message->sources.data) {
      baxter_maintenance_msgs__msg__UpdateSource__Sequence__fini(&ros_message->sources);
    }
    if (!baxter_maintenance_msgs__msg__UpdateSource__Sequence__init(&ros_message->sources, size)) {
      fprintf(stderr, "failed to create array for field 'sources'");
      return false;
    }
    auto array_ptr = ros_message->sources.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_baxter_maintenance_msgs__msg__UpdateSource(cdr, &array_ptr[i]);
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_baxter_maintenance_msgs
size_t get_serialized_size_baxter_maintenance_msgs__msg__UpdateSources(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _UpdateSources__ros_msg_type * ros_message = static_cast<const _UpdateSources__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: uuid
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->uuid.size + 1);

  // Field name: sources
  {
    size_t array_size = ros_message->sources.size;
    auto array_ptr = ros_message->sources.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_baxter_maintenance_msgs__msg__UpdateSource(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_baxter_maintenance_msgs
size_t max_serialized_size_baxter_maintenance_msgs__msg__UpdateSources(
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

  // Field name: uuid
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

  // Field name: sources
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
        max_serialized_size_baxter_maintenance_msgs__msg__UpdateSource(
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
    using DataType = baxter_maintenance_msgs__msg__UpdateSources;
    is_plain =
      (
      offsetof(DataType, sources) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_baxter_maintenance_msgs
bool cdr_serialize_key_baxter_maintenance_msgs__msg__UpdateSources(
  const baxter_maintenance_msgs__msg__UpdateSources * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: uuid
  {
    const rosidl_runtime_c__String * str = &ros_message->uuid;
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

  // Field name: sources
  {
    size_t size = ros_message->sources.size;
    auto array_ptr = ros_message->sources.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_baxter_maintenance_msgs__msg__UpdateSource(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_baxter_maintenance_msgs
size_t get_serialized_size_key_baxter_maintenance_msgs__msg__UpdateSources(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _UpdateSources__ros_msg_type * ros_message = static_cast<const _UpdateSources__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: uuid
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->uuid.size + 1);

  // Field name: sources
  {
    size_t array_size = ros_message->sources.size;
    auto array_ptr = ros_message->sources.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_baxter_maintenance_msgs__msg__UpdateSource(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_baxter_maintenance_msgs
size_t max_serialized_size_key_baxter_maintenance_msgs__msg__UpdateSources(
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
  // Field name: uuid
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

  // Field name: sources
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
        max_serialized_size_key_baxter_maintenance_msgs__msg__UpdateSource(
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
    using DataType = baxter_maintenance_msgs__msg__UpdateSources;
    is_plain =
      (
      offsetof(DataType, sources) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _UpdateSources__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const baxter_maintenance_msgs__msg__UpdateSources * ros_message = static_cast<const baxter_maintenance_msgs__msg__UpdateSources *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_baxter_maintenance_msgs__msg__UpdateSources(ros_message, cdr);
}

static bool _UpdateSources__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  baxter_maintenance_msgs__msg__UpdateSources * ros_message = static_cast<baxter_maintenance_msgs__msg__UpdateSources *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_baxter_maintenance_msgs__msg__UpdateSources(cdr, ros_message);
}

static uint32_t _UpdateSources__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_baxter_maintenance_msgs__msg__UpdateSources(
      untyped_ros_message, 0));
}

static size_t _UpdateSources__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_baxter_maintenance_msgs__msg__UpdateSources(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_UpdateSources = {
  "baxter_maintenance_msgs::msg",
  "UpdateSources",
  _UpdateSources__cdr_serialize,
  _UpdateSources__cdr_deserialize,
  _UpdateSources__get_serialized_size,
  _UpdateSources__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _UpdateSources__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_UpdateSources,
  get_message_typesupport_handle_function,
  &baxter_maintenance_msgs__msg__UpdateSources__get_type_hash,
  &baxter_maintenance_msgs__msg__UpdateSources__get_type_description,
  &baxter_maintenance_msgs__msg__UpdateSources__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, baxter_maintenance_msgs, msg, UpdateSources)() {
  return &_UpdateSources__type_support;
}

#if defined(__cplusplus)
}
#endif
