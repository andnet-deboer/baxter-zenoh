#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "baxter_core_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__baxter_core_msgs__msg__AnalogIOState() -> *const std::ffi::c_void;
}

#[link(name = "baxter_core_msgs__rosidl_generator_c")]
extern "C" {
    fn baxter_core_msgs__msg__AnalogIOState__init(msg: *mut AnalogIOState) -> bool;
    fn baxter_core_msgs__msg__AnalogIOState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<AnalogIOState>, size: usize) -> bool;
    fn baxter_core_msgs__msg__AnalogIOState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<AnalogIOState>);
    fn baxter_core_msgs__msg__AnalogIOState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<AnalogIOState>, out_seq: *mut rosidl_runtime_rs::Sequence<AnalogIOState>) -> bool;
}

// Corresponds to baxter_core_msgs__msg__AnalogIOState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AnalogIOState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub timestamp: builtin_interfaces::msg::rmw::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub value: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub is_input_only: bool,

}



impl Default for AnalogIOState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !baxter_core_msgs__msg__AnalogIOState__init(&mut msg as *mut _) {
        panic!("Call to baxter_core_msgs__msg__AnalogIOState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for AnalogIOState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { baxter_core_msgs__msg__AnalogIOState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { baxter_core_msgs__msg__AnalogIOState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { baxter_core_msgs__msg__AnalogIOState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for AnalogIOState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for AnalogIOState where Self: Sized {
  const TYPE_NAME: &'static str = "baxter_core_msgs/msg/AnalogIOState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__baxter_core_msgs__msg__AnalogIOState() }
  }
}


#[link(name = "baxter_core_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__baxter_core_msgs__msg__AnalogIOStates() -> *const std::ffi::c_void;
}

#[link(name = "baxter_core_msgs__rosidl_generator_c")]
extern "C" {
    fn baxter_core_msgs__msg__AnalogIOStates__init(msg: *mut AnalogIOStates) -> bool;
    fn baxter_core_msgs__msg__AnalogIOStates__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<AnalogIOStates>, size: usize) -> bool;
    fn baxter_core_msgs__msg__AnalogIOStates__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<AnalogIOStates>);
    fn baxter_core_msgs__msg__AnalogIOStates__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<AnalogIOStates>, out_seq: *mut rosidl_runtime_rs::Sequence<AnalogIOStates>) -> bool;
}

// Corresponds to baxter_core_msgs__msg__AnalogIOStates
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AnalogIOStates {

    // This member is not documented.
    #[allow(missing_docs)]
    pub names: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub states: rosidl_runtime_rs::Sequence<super::super::msg::rmw::AnalogIOState>,

}



impl Default for AnalogIOStates {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !baxter_core_msgs__msg__AnalogIOStates__init(&mut msg as *mut _) {
        panic!("Call to baxter_core_msgs__msg__AnalogIOStates__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for AnalogIOStates {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { baxter_core_msgs__msg__AnalogIOStates__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { baxter_core_msgs__msg__AnalogIOStates__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { baxter_core_msgs__msg__AnalogIOStates__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for AnalogIOStates {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for AnalogIOStates where Self: Sized {
  const TYPE_NAME: &'static str = "baxter_core_msgs/msg/AnalogIOStates";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__baxter_core_msgs__msg__AnalogIOStates() }
  }
}


#[link(name = "baxter_core_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__baxter_core_msgs__msg__AnalogOutputCommand() -> *const std::ffi::c_void;
}

#[link(name = "baxter_core_msgs__rosidl_generator_c")]
extern "C" {
    fn baxter_core_msgs__msg__AnalogOutputCommand__init(msg: *mut AnalogOutputCommand) -> bool;
    fn baxter_core_msgs__msg__AnalogOutputCommand__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<AnalogOutputCommand>, size: usize) -> bool;
    fn baxter_core_msgs__msg__AnalogOutputCommand__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<AnalogOutputCommand>);
    fn baxter_core_msgs__msg__AnalogOutputCommand__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<AnalogOutputCommand>, out_seq: *mut rosidl_runtime_rs::Sequence<AnalogOutputCommand>) -> bool;
}

// Corresponds to baxter_core_msgs__msg__AnalogOutputCommand
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// the name of the output

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AnalogOutputCommand {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: rosidl_runtime_rs::String,

    /// the value to set output
    pub value: u16,

}



impl Default for AnalogOutputCommand {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !baxter_core_msgs__msg__AnalogOutputCommand__init(&mut msg as *mut _) {
        panic!("Call to baxter_core_msgs__msg__AnalogOutputCommand__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for AnalogOutputCommand {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { baxter_core_msgs__msg__AnalogOutputCommand__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { baxter_core_msgs__msg__AnalogOutputCommand__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { baxter_core_msgs__msg__AnalogOutputCommand__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for AnalogOutputCommand {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for AnalogOutputCommand where Self: Sized {
  const TYPE_NAME: &'static str = "baxter_core_msgs/msg/AnalogOutputCommand";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__baxter_core_msgs__msg__AnalogOutputCommand() }
  }
}


#[link(name = "baxter_core_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__baxter_core_msgs__msg__AssemblyState() -> *const std::ffi::c_void;
}

#[link(name = "baxter_core_msgs__rosidl_generator_c")]
extern "C" {
    fn baxter_core_msgs__msg__AssemblyState__init(msg: *mut AssemblyState) -> bool;
    fn baxter_core_msgs__msg__AssemblyState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<AssemblyState>, size: usize) -> bool;
    fn baxter_core_msgs__msg__AssemblyState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<AssemblyState>);
    fn baxter_core_msgs__msg__AssemblyState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<AssemblyState>, out_seq: *mut rosidl_runtime_rs::Sequence<AssemblyState>) -> bool;
}

// Corresponds to baxter_core_msgs__msg__AssemblyState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AssemblyState {
    /// true if enabled and ready to operate, e.g., not homing
    pub ready: bool,

    /// true if enabled
    pub enabled: bool,

    /// true if stopped -- e-stop asserted
    pub stopped: bool,

    /// true if a component of the assembly has an error
    pub error: bool,

    /// The following are specific to the robot top-level assembly:
    /// One of the following:
    pub estop_button: u8,

    /// If stopped is true, the source of the e-stop.  One of the following:
    pub estop_source: u8,

}

impl AssemblyState {
    /// Robot is not stopped and button is not pressed
    pub const ESTOP_BUTTON_UNPRESSED: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ESTOP_BUTTON_PRESSED: u8 = 1;

    /// STATE_UNKNOWN when estop was asserted by a non-user source
    pub const ESTOP_BUTTON_UNKNOWN: u8 = 2;

    /// Was pressed, is now known to be released, but robot is still stopped.
    pub const ESTOP_BUTTON_RELEASED: u8 = 3;

    /// e-stop is not asserted
    pub const ESTOP_SOURCE_NONE: u8 = 0;

    /// e-stop source is user input (the red button)
    pub const ESTOP_SOURCE_USER: u8 = 1;

    /// e-stop source is unknown
    pub const ESTOP_SOURCE_UNKNOWN: u8 = 2;

    /// MotorController asserted e-stop in response to a joint fault
    pub const ESTOP_SOURCE_FAULT: u8 = 3;

    /// MotorController asserted e-stop in response to a lapse of the brain heartbeat
    pub const ESTOP_SOURCE_BRAIN: u8 = 4;

}


impl Default for AssemblyState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !baxter_core_msgs__msg__AssemblyState__init(&mut msg as *mut _) {
        panic!("Call to baxter_core_msgs__msg__AssemblyState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for AssemblyState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { baxter_core_msgs__msg__AssemblyState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { baxter_core_msgs__msg__AssemblyState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { baxter_core_msgs__msg__AssemblyState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for AssemblyState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for AssemblyState where Self: Sized {
  const TYPE_NAME: &'static str = "baxter_core_msgs/msg/AssemblyState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__baxter_core_msgs__msg__AssemblyState() }
  }
}


#[link(name = "baxter_core_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__baxter_core_msgs__msg__AssemblyStates() -> *const std::ffi::c_void;
}

#[link(name = "baxter_core_msgs__rosidl_generator_c")]
extern "C" {
    fn baxter_core_msgs__msg__AssemblyStates__init(msg: *mut AssemblyStates) -> bool;
    fn baxter_core_msgs__msg__AssemblyStates__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<AssemblyStates>, size: usize) -> bool;
    fn baxter_core_msgs__msg__AssemblyStates__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<AssemblyStates>);
    fn baxter_core_msgs__msg__AssemblyStates__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<AssemblyStates>, out_seq: *mut rosidl_runtime_rs::Sequence<AssemblyStates>) -> bool;
}

// Corresponds to baxter_core_msgs__msg__AssemblyStates
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AssemblyStates {

    // This member is not documented.
    #[allow(missing_docs)]
    pub names: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub states: rosidl_runtime_rs::Sequence<super::super::msg::rmw::AssemblyState>,

}



impl Default for AssemblyStates {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !baxter_core_msgs__msg__AssemblyStates__init(&mut msg as *mut _) {
        panic!("Call to baxter_core_msgs__msg__AssemblyStates__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for AssemblyStates {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { baxter_core_msgs__msg__AssemblyStates__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { baxter_core_msgs__msg__AssemblyStates__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { baxter_core_msgs__msg__AssemblyStates__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for AssemblyStates {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for AssemblyStates where Self: Sized {
  const TYPE_NAME: &'static str = "baxter_core_msgs/msg/AssemblyStates";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__baxter_core_msgs__msg__AssemblyStates() }
  }
}


#[link(name = "baxter_core_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__baxter_core_msgs__msg__CameraControl() -> *const std::ffi::c_void;
}

#[link(name = "baxter_core_msgs__rosidl_generator_c")]
extern "C" {
    fn baxter_core_msgs__msg__CameraControl__init(msg: *mut CameraControl) -> bool;
    fn baxter_core_msgs__msg__CameraControl__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CameraControl>, size: usize) -> bool;
    fn baxter_core_msgs__msg__CameraControl__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CameraControl>);
    fn baxter_core_msgs__msg__CameraControl__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CameraControl>, out_seq: *mut rosidl_runtime_rs::Sequence<CameraControl>) -> bool;
}

// Corresponds to baxter_core_msgs__msg__CameraControl
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CameraControl {

    // This member is not documented.
    #[allow(missing_docs)]
    pub id: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub value: i32,

}

impl CameraControl {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CAMERA_CONTROL_EXPOSURE: i32 = 100;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CAMERA_CONTROL_GAIN: i32 = 101;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CAMERA_CONTROL_WHITE_BALANCE_R: i32 = 102;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CAMERA_CONTROL_WHITE_BALANCE_G: i32 = 103;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CAMERA_CONTROL_WHITE_BALANCE_B: i32 = 104;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CAMERA_CONTROL_WINDOW_X: i32 = 105;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CAMERA_CONTROL_WINDOW_Y: i32 = 106;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CAMERA_CONTROL_FLIP: i32 = 107;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CAMERA_CONTROL_MIRROR: i32 = 108;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CAMERA_CONTROL_RESOLUTION_HALF: i32 = 109;

}


impl Default for CameraControl {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !baxter_core_msgs__msg__CameraControl__init(&mut msg as *mut _) {
        panic!("Call to baxter_core_msgs__msg__CameraControl__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CameraControl {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { baxter_core_msgs__msg__CameraControl__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { baxter_core_msgs__msg__CameraControl__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { baxter_core_msgs__msg__CameraControl__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CameraControl {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CameraControl where Self: Sized {
  const TYPE_NAME: &'static str = "baxter_core_msgs/msg/CameraControl";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__baxter_core_msgs__msg__CameraControl() }
  }
}


#[link(name = "baxter_core_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__baxter_core_msgs__msg__CameraSettings() -> *const std::ffi::c_void;
}

#[link(name = "baxter_core_msgs__rosidl_generator_c")]
extern "C" {
    fn baxter_core_msgs__msg__CameraSettings__init(msg: *mut CameraSettings) -> bool;
    fn baxter_core_msgs__msg__CameraSettings__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CameraSettings>, size: usize) -> bool;
    fn baxter_core_msgs__msg__CameraSettings__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CameraSettings>);
    fn baxter_core_msgs__msg__CameraSettings__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CameraSettings>, out_seq: *mut rosidl_runtime_rs::Sequence<CameraSettings>) -> bool;
}

// Corresponds to baxter_core_msgs__msg__CameraSettings
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CameraSettings {

    // This member is not documented.
    #[allow(missing_docs)]
    pub width: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub height: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub fps: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub controls: rosidl_runtime_rs::Sequence<super::super::msg::rmw::CameraControl>,

}



impl Default for CameraSettings {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !baxter_core_msgs__msg__CameraSettings__init(&mut msg as *mut _) {
        panic!("Call to baxter_core_msgs__msg__CameraSettings__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CameraSettings {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { baxter_core_msgs__msg__CameraSettings__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { baxter_core_msgs__msg__CameraSettings__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { baxter_core_msgs__msg__CameraSettings__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CameraSettings {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CameraSettings where Self: Sized {
  const TYPE_NAME: &'static str = "baxter_core_msgs/msg/CameraSettings";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__baxter_core_msgs__msg__CameraSettings() }
  }
}


#[link(name = "baxter_core_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__baxter_core_msgs__msg__CollisionAvoidanceState() -> *const std::ffi::c_void;
}

#[link(name = "baxter_core_msgs__rosidl_generator_c")]
extern "C" {
    fn baxter_core_msgs__msg__CollisionAvoidanceState__init(msg: *mut CollisionAvoidanceState) -> bool;
    fn baxter_core_msgs__msg__CollisionAvoidanceState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CollisionAvoidanceState>, size: usize) -> bool;
    fn baxter_core_msgs__msg__CollisionAvoidanceState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CollisionAvoidanceState>);
    fn baxter_core_msgs__msg__CollisionAvoidanceState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CollisionAvoidanceState>, out_seq: *mut rosidl_runtime_rs::Sequence<CollisionAvoidanceState>) -> bool;
}

// Corresponds to baxter_core_msgs__msg__CollisionAvoidanceState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CollisionAvoidanceState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub other_arm: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub collision_object: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,

}



impl Default for CollisionAvoidanceState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !baxter_core_msgs__msg__CollisionAvoidanceState__init(&mut msg as *mut _) {
        panic!("Call to baxter_core_msgs__msg__CollisionAvoidanceState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CollisionAvoidanceState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { baxter_core_msgs__msg__CollisionAvoidanceState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { baxter_core_msgs__msg__CollisionAvoidanceState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { baxter_core_msgs__msg__CollisionAvoidanceState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CollisionAvoidanceState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CollisionAvoidanceState where Self: Sized {
  const TYPE_NAME: &'static str = "baxter_core_msgs/msg/CollisionAvoidanceState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__baxter_core_msgs__msg__CollisionAvoidanceState() }
  }
}


#[link(name = "baxter_core_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__baxter_core_msgs__msg__CollisionDetectionState() -> *const std::ffi::c_void;
}

#[link(name = "baxter_core_msgs__rosidl_generator_c")]
extern "C" {
    fn baxter_core_msgs__msg__CollisionDetectionState__init(msg: *mut CollisionDetectionState) -> bool;
    fn baxter_core_msgs__msg__CollisionDetectionState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CollisionDetectionState>, size: usize) -> bool;
    fn baxter_core_msgs__msg__CollisionDetectionState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CollisionDetectionState>);
    fn baxter_core_msgs__msg__CollisionDetectionState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CollisionDetectionState>, out_seq: *mut rosidl_runtime_rs::Sequence<CollisionDetectionState>) -> bool;
}

// Corresponds to baxter_core_msgs__msg__CollisionDetectionState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CollisionDetectionState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub collision_state: bool,

}



impl Default for CollisionDetectionState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !baxter_core_msgs__msg__CollisionDetectionState__init(&mut msg as *mut _) {
        panic!("Call to baxter_core_msgs__msg__CollisionDetectionState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CollisionDetectionState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { baxter_core_msgs__msg__CollisionDetectionState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { baxter_core_msgs__msg__CollisionDetectionState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { baxter_core_msgs__msg__CollisionDetectionState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CollisionDetectionState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CollisionDetectionState where Self: Sized {
  const TYPE_NAME: &'static str = "baxter_core_msgs/msg/CollisionDetectionState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__baxter_core_msgs__msg__CollisionDetectionState() }
  }
}


#[link(name = "baxter_core_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__baxter_core_msgs__msg__DigitalIOState() -> *const std::ffi::c_void;
}

#[link(name = "baxter_core_msgs__rosidl_generator_c")]
extern "C" {
    fn baxter_core_msgs__msg__DigitalIOState__init(msg: *mut DigitalIOState) -> bool;
    fn baxter_core_msgs__msg__DigitalIOState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DigitalIOState>, size: usize) -> bool;
    fn baxter_core_msgs__msg__DigitalIOState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DigitalIOState>);
    fn baxter_core_msgs__msg__DigitalIOState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DigitalIOState>, out_seq: *mut rosidl_runtime_rs::Sequence<DigitalIOState>) -> bool;
}

// Corresponds to baxter_core_msgs__msg__DigitalIOState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DigitalIOState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub state: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub is_input_only: bool,

}

impl DigitalIOState {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const OFF: i8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ON: i8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const PRESSED: i8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const UNPRESSED: i8 = 0;

}


impl Default for DigitalIOState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !baxter_core_msgs__msg__DigitalIOState__init(&mut msg as *mut _) {
        panic!("Call to baxter_core_msgs__msg__DigitalIOState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DigitalIOState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { baxter_core_msgs__msg__DigitalIOState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { baxter_core_msgs__msg__DigitalIOState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { baxter_core_msgs__msg__DigitalIOState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DigitalIOState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DigitalIOState where Self: Sized {
  const TYPE_NAME: &'static str = "baxter_core_msgs/msg/DigitalIOState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__baxter_core_msgs__msg__DigitalIOState() }
  }
}


#[link(name = "baxter_core_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__baxter_core_msgs__msg__DigitalIOStates() -> *const std::ffi::c_void;
}

#[link(name = "baxter_core_msgs__rosidl_generator_c")]
extern "C" {
    fn baxter_core_msgs__msg__DigitalIOStates__init(msg: *mut DigitalIOStates) -> bool;
    fn baxter_core_msgs__msg__DigitalIOStates__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DigitalIOStates>, size: usize) -> bool;
    fn baxter_core_msgs__msg__DigitalIOStates__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DigitalIOStates>);
    fn baxter_core_msgs__msg__DigitalIOStates__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DigitalIOStates>, out_seq: *mut rosidl_runtime_rs::Sequence<DigitalIOStates>) -> bool;
}

// Corresponds to baxter_core_msgs__msg__DigitalIOStates
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DigitalIOStates {

    // This member is not documented.
    #[allow(missing_docs)]
    pub names: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub states: rosidl_runtime_rs::Sequence<super::super::msg::rmw::DigitalIOState>,

}



impl Default for DigitalIOStates {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !baxter_core_msgs__msg__DigitalIOStates__init(&mut msg as *mut _) {
        panic!("Call to baxter_core_msgs__msg__DigitalIOStates__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DigitalIOStates {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { baxter_core_msgs__msg__DigitalIOStates__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { baxter_core_msgs__msg__DigitalIOStates__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { baxter_core_msgs__msg__DigitalIOStates__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DigitalIOStates {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DigitalIOStates where Self: Sized {
  const TYPE_NAME: &'static str = "baxter_core_msgs/msg/DigitalIOStates";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__baxter_core_msgs__msg__DigitalIOStates() }
  }
}


#[link(name = "baxter_core_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__baxter_core_msgs__msg__DigitalOutputCommand() -> *const std::ffi::c_void;
}

#[link(name = "baxter_core_msgs__rosidl_generator_c")]
extern "C" {
    fn baxter_core_msgs__msg__DigitalOutputCommand__init(msg: *mut DigitalOutputCommand) -> bool;
    fn baxter_core_msgs__msg__DigitalOutputCommand__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DigitalOutputCommand>, size: usize) -> bool;
    fn baxter_core_msgs__msg__DigitalOutputCommand__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DigitalOutputCommand>);
    fn baxter_core_msgs__msg__DigitalOutputCommand__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DigitalOutputCommand>, out_seq: *mut rosidl_runtime_rs::Sequence<DigitalOutputCommand>) -> bool;
}

// Corresponds to baxter_core_msgs__msg__DigitalOutputCommand
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// the name of the output

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DigitalOutputCommand {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: rosidl_runtime_rs::String,

    /// the value to set output
    pub value: bool,

}



impl Default for DigitalOutputCommand {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !baxter_core_msgs__msg__DigitalOutputCommand__init(&mut msg as *mut _) {
        panic!("Call to baxter_core_msgs__msg__DigitalOutputCommand__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DigitalOutputCommand {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { baxter_core_msgs__msg__DigitalOutputCommand__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { baxter_core_msgs__msg__DigitalOutputCommand__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { baxter_core_msgs__msg__DigitalOutputCommand__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DigitalOutputCommand {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DigitalOutputCommand where Self: Sized {
  const TYPE_NAME: &'static str = "baxter_core_msgs/msg/DigitalOutputCommand";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__baxter_core_msgs__msg__DigitalOutputCommand() }
  }
}


#[link(name = "baxter_core_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__baxter_core_msgs__msg__EndEffectorCommand() -> *const std::ffi::c_void;
}

#[link(name = "baxter_core_msgs__rosidl_generator_c")]
extern "C" {
    fn baxter_core_msgs__msg__EndEffectorCommand__init(msg: *mut EndEffectorCommand) -> bool;
    fn baxter_core_msgs__msg__EndEffectorCommand__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<EndEffectorCommand>, size: usize) -> bool;
    fn baxter_core_msgs__msg__EndEffectorCommand__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<EndEffectorCommand>);
    fn baxter_core_msgs__msg__EndEffectorCommand__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<EndEffectorCommand>, out_seq: *mut rosidl_runtime_rs::Sequence<EndEffectorCommand>) -> bool;
}

// Corresponds to baxter_core_msgs__msg__EndEffectorCommand
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Command to be sent to an end effector

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct EndEffectorCommand {
    /// target end effector id
    pub id: u32,

    /// operation to perform
    pub command: rosidl_runtime_rs::String,

    /// JSON arguments to the command
    pub args: rosidl_runtime_rs::String,

    /// optional identifier, returned in state when the command is handled
    pub sender: rosidl_runtime_rs::String,

    /// optional sequence number, return in state when the command is handled
    pub sequence: u32,

}

impl EndEffectorCommand {
    /// Well known commands:
    pub const CMD_NO_OP: &'static str = "no_op";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CMD_SET: &'static str = "set";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CMD_CONFIGURE: &'static str = "configure";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CMD_REBOOT: &'static str = "reboot";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CMD_RESET: &'static str = "reset";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CMD_CALIBRATE: &'static str = "calibrate";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CMD_CLEAR_CALIBRATION: &'static str = "clear_calibration";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CMD_PREPARE_TO_GRIP: &'static str = "prepare_to_grip";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CMD_GRIP: &'static str = "grip";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CMD_RELEASE: &'static str = "release";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CMD_GO: &'static str = "go";


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CMD_STOP: &'static str = "stop";

}


impl Default for EndEffectorCommand {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !baxter_core_msgs__msg__EndEffectorCommand__init(&mut msg as *mut _) {
        panic!("Call to baxter_core_msgs__msg__EndEffectorCommand__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for EndEffectorCommand {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { baxter_core_msgs__msg__EndEffectorCommand__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { baxter_core_msgs__msg__EndEffectorCommand__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { baxter_core_msgs__msg__EndEffectorCommand__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for EndEffectorCommand {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for EndEffectorCommand where Self: Sized {
  const TYPE_NAME: &'static str = "baxter_core_msgs/msg/EndEffectorCommand";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__baxter_core_msgs__msg__EndEffectorCommand() }
  }
}


#[link(name = "baxter_core_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__baxter_core_msgs__msg__EndEffectorProperties() -> *const std::ffi::c_void;
}

#[link(name = "baxter_core_msgs__rosidl_generator_c")]
extern "C" {
    fn baxter_core_msgs__msg__EndEffectorProperties__init(msg: *mut EndEffectorProperties) -> bool;
    fn baxter_core_msgs__msg__EndEffectorProperties__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<EndEffectorProperties>, size: usize) -> bool;
    fn baxter_core_msgs__msg__EndEffectorProperties__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<EndEffectorProperties>);
    fn baxter_core_msgs__msg__EndEffectorProperties__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<EndEffectorProperties>, out_seq: *mut rosidl_runtime_rs::Sequence<EndEffectorProperties>) -> bool;
}

// Corresponds to baxter_core_msgs__msg__EndEffectorProperties
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct EndEffectorProperties {
    /// EndEffectorId
    pub id: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ui_type: u8,

    /// Manufacturer name
    pub manufacturer: rosidl_runtime_rs::String,

    /// Product name
    pub product: rosidl_runtime_rs::String,

    /// Serial number, optional
    pub serial_number: rosidl_runtime_rs::String,

    /// Hardware revision, optional
    pub hardware_rev: rosidl_runtime_rs::String,

    /// Firmware revision, optional
    pub firmware_rev: rosidl_runtime_rs::String,

    /// Firmware date, optional
    pub firmware_date: rosidl_runtime_rs::String,

    /// End Effector Capabilities
    /// true if the gripper has calibration
    pub has_calibration: bool,

    /// true if the gripper has grip/release control
    pub controls_grip: bool,

    /// true if the gripper has grip sense
    pub senses_grip: bool,

    /// true if the gripper has reverse-grip mode
    pub reverses_grip: bool,

    /// true if the gripper has force control
    pub controls_force: bool,

    /// true if the gripper has force sense
    pub senses_force: bool,

    /// true if the gripper has position control
    pub controls_position: bool,

    /// true if the gripper has position sense
    pub senses_position: bool,

    /// JSON; other properties
    pub properties: rosidl_runtime_rs::String,

}

impl EndEffectorProperties {
    /// End Effector type enumeration, for the UI:
    pub const NO_GRIPPER: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const SUCTION_CUP_GRIPPER: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ELECTRIC_GRIPPER: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const PASSIVE_GRIPPER: u8 = 3;

}


impl Default for EndEffectorProperties {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !baxter_core_msgs__msg__EndEffectorProperties__init(&mut msg as *mut _) {
        panic!("Call to baxter_core_msgs__msg__EndEffectorProperties__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for EndEffectorProperties {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { baxter_core_msgs__msg__EndEffectorProperties__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { baxter_core_msgs__msg__EndEffectorProperties__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { baxter_core_msgs__msg__EndEffectorProperties__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for EndEffectorProperties {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for EndEffectorProperties where Self: Sized {
  const TYPE_NAME: &'static str = "baxter_core_msgs/msg/EndEffectorProperties";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__baxter_core_msgs__msg__EndEffectorProperties() }
  }
}


#[link(name = "baxter_core_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__baxter_core_msgs__msg__EndEffectorState() -> *const std::ffi::c_void;
}

#[link(name = "baxter_core_msgs__rosidl_generator_c")]
extern "C" {
    fn baxter_core_msgs__msg__EndEffectorState__init(msg: *mut EndEffectorState) -> bool;
    fn baxter_core_msgs__msg__EndEffectorState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<EndEffectorState>, size: usize) -> bool;
    fn baxter_core_msgs__msg__EndEffectorState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<EndEffectorState>);
    fn baxter_core_msgs__msg__EndEffectorState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<EndEffectorState>, out_seq: *mut rosidl_runtime_rs::Sequence<EndEffectorState>) -> bool;
}

// Corresponds to baxter_core_msgs__msg__EndEffectorState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct EndEffectorState {
    /// time when state was updated
    pub timestamp: builtin_interfaces::msg::rmw::Time,

    /// EndEffectorId
    pub id: u32,

    /// true if enabled
    pub enabled: u8,

    /// true if calibration has completed
    pub calibrated: u8,

    /// true if ready for another command
    pub ready: u8,

    /// true if moving
    pub moving: u8,

    /// true if gripping
    pub gripping: u8,

    /// true if GRIP/GOTO/SET was commanded and the gripper reaches the end of travel
    pub missed: u8,

    /// true if the gripper is in an error state
    pub error: u8,

    /// true if the gripper is in reverse mode
    pub reverse: u8,

    /// position as a percentage of the max position;      0=closed - 100=open
    pub position: f32,

    /// force as a percentage of max force;                0=none   - 100=max
    pub force: f32,

    /// JSON: other state information
    pub state: rosidl_runtime_rs::String,

    /// from the last command message
    pub command: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub command_sender: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub command_sequence: u32,

}

impl EndEffectorState {
    /// The following State fields are tristate: 0 = false; 1 = true; 2 = unknown/unsupported
    pub const STATE_FALSE: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STATE_TRUE: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STATE_UNKNOWN: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const POSITION_CLOSED: f32 = 0.0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const POSITION_OPEN: f32 = 100.0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FORCE_MIN: f32 = 0.0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FORCE_MAX: f32 = 100.0;

}


impl Default for EndEffectorState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !baxter_core_msgs__msg__EndEffectorState__init(&mut msg as *mut _) {
        panic!("Call to baxter_core_msgs__msg__EndEffectorState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for EndEffectorState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { baxter_core_msgs__msg__EndEffectorState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { baxter_core_msgs__msg__EndEffectorState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { baxter_core_msgs__msg__EndEffectorState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for EndEffectorState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for EndEffectorState where Self: Sized {
  const TYPE_NAME: &'static str = "baxter_core_msgs/msg/EndEffectorState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__baxter_core_msgs__msg__EndEffectorState() }
  }
}


#[link(name = "baxter_core_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__baxter_core_msgs__msg__EndpointState() -> *const std::ffi::c_void;
}

#[link(name = "baxter_core_msgs__rosidl_generator_c")]
extern "C" {
    fn baxter_core_msgs__msg__EndpointState__init(msg: *mut EndpointState) -> bool;
    fn baxter_core_msgs__msg__EndpointState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<EndpointState>, size: usize) -> bool;
    fn baxter_core_msgs__msg__EndpointState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<EndpointState>);
    fn baxter_core_msgs__msg__EndpointState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<EndpointState>, out_seq: *mut rosidl_runtime_rs::Sequence<EndpointState>) -> bool;
}

// Corresponds to baxter_core_msgs__msg__EndpointState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct EndpointState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pose: geometry_msgs::msg::rmw::Pose,


    // This member is not documented.
    #[allow(missing_docs)]
    pub twist: geometry_msgs::msg::rmw::Twist,


    // This member is not documented.
    #[allow(missing_docs)]
    pub wrench: geometry_msgs::msg::rmw::Wrench,

}



impl Default for EndpointState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !baxter_core_msgs__msg__EndpointState__init(&mut msg as *mut _) {
        panic!("Call to baxter_core_msgs__msg__EndpointState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for EndpointState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { baxter_core_msgs__msg__EndpointState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { baxter_core_msgs__msg__EndpointState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { baxter_core_msgs__msg__EndpointState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for EndpointState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for EndpointState where Self: Sized {
  const TYPE_NAME: &'static str = "baxter_core_msgs/msg/EndpointState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__baxter_core_msgs__msg__EndpointState() }
  }
}


#[link(name = "baxter_core_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__baxter_core_msgs__msg__EndpointStates() -> *const std::ffi::c_void;
}

#[link(name = "baxter_core_msgs__rosidl_generator_c")]
extern "C" {
    fn baxter_core_msgs__msg__EndpointStates__init(msg: *mut EndpointStates) -> bool;
    fn baxter_core_msgs__msg__EndpointStates__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<EndpointStates>, size: usize) -> bool;
    fn baxter_core_msgs__msg__EndpointStates__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<EndpointStates>);
    fn baxter_core_msgs__msg__EndpointStates__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<EndpointStates>, out_seq: *mut rosidl_runtime_rs::Sequence<EndpointStates>) -> bool;
}

// Corresponds to baxter_core_msgs__msg__EndpointStates
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct EndpointStates {

    // This member is not documented.
    #[allow(missing_docs)]
    pub names: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub states: rosidl_runtime_rs::Sequence<super::super::msg::rmw::EndpointState>,

}



impl Default for EndpointStates {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !baxter_core_msgs__msg__EndpointStates__init(&mut msg as *mut _) {
        panic!("Call to baxter_core_msgs__msg__EndpointStates__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for EndpointStates {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { baxter_core_msgs__msg__EndpointStates__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { baxter_core_msgs__msg__EndpointStates__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { baxter_core_msgs__msg__EndpointStates__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for EndpointStates {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for EndpointStates where Self: Sized {
  const TYPE_NAME: &'static str = "baxter_core_msgs/msg/EndpointStates";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__baxter_core_msgs__msg__EndpointStates() }
  }
}


#[link(name = "baxter_core_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__baxter_core_msgs__msg__HeadPanCommand() -> *const std::ffi::c_void;
}

#[link(name = "baxter_core_msgs__rosidl_generator_c")]
extern "C" {
    fn baxter_core_msgs__msg__HeadPanCommand__init(msg: *mut HeadPanCommand) -> bool;
    fn baxter_core_msgs__msg__HeadPanCommand__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<HeadPanCommand>, size: usize) -> bool;
    fn baxter_core_msgs__msg__HeadPanCommand__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<HeadPanCommand>);
    fn baxter_core_msgs__msg__HeadPanCommand__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<HeadPanCommand>, out_seq: *mut rosidl_runtime_rs::Sequence<HeadPanCommand>) -> bool;
}

// Corresponds to baxter_core_msgs__msg__HeadPanCommand
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HeadPanCommand {
    /// radians for target, 0 str
    pub target: f32,

    /// Percentage of max speed
    pub speed_ratio: f32,

    /// override automatic pan enable/disable
    pub enable_pan_request: u8,

}

impl HeadPanCommand {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MAX_SPEED_RATIO: f32 = 1.0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MIN_SPEED_RATIO: f32 = 0.0;

    /// enable_pan_request is tristate: 0 = disable pan; 1 = enable pan; 2 = don't change pan
    pub const REQUEST_PAN_DISABLE: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const REQUEST_PAN_ENABLE: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const REQUEST_PAN_VOID: u8 = 2;

}


impl Default for HeadPanCommand {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !baxter_core_msgs__msg__HeadPanCommand__init(&mut msg as *mut _) {
        panic!("Call to baxter_core_msgs__msg__HeadPanCommand__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for HeadPanCommand {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { baxter_core_msgs__msg__HeadPanCommand__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { baxter_core_msgs__msg__HeadPanCommand__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { baxter_core_msgs__msg__HeadPanCommand__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for HeadPanCommand {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for HeadPanCommand where Self: Sized {
  const TYPE_NAME: &'static str = "baxter_core_msgs/msg/HeadPanCommand";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__baxter_core_msgs__msg__HeadPanCommand() }
  }
}


#[link(name = "baxter_core_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__baxter_core_msgs__msg__HeadState() -> *const std::ffi::c_void;
}

#[link(name = "baxter_core_msgs__rosidl_generator_c")]
extern "C" {
    fn baxter_core_msgs__msg__HeadState__init(msg: *mut HeadState) -> bool;
    fn baxter_core_msgs__msg__HeadState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<HeadState>, size: usize) -> bool;
    fn baxter_core_msgs__msg__HeadState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<HeadState>);
    fn baxter_core_msgs__msg__HeadState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<HeadState>, out_seq: *mut rosidl_runtime_rs::Sequence<HeadState>) -> bool;
}

// Corresponds to baxter_core_msgs__msg__HeadState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HeadState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub pan: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub is_turning: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub is_nodding: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub is_pan_enabled: bool,

}



impl Default for HeadState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !baxter_core_msgs__msg__HeadState__init(&mut msg as *mut _) {
        panic!("Call to baxter_core_msgs__msg__HeadState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for HeadState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { baxter_core_msgs__msg__HeadState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { baxter_core_msgs__msg__HeadState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { baxter_core_msgs__msg__HeadState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for HeadState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for HeadState where Self: Sized {
  const TYPE_NAME: &'static str = "baxter_core_msgs/msg/HeadState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__baxter_core_msgs__msg__HeadState() }
  }
}


#[link(name = "baxter_core_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__baxter_core_msgs__msg__JointCommand() -> *const std::ffi::c_void;
}

#[link(name = "baxter_core_msgs__rosidl_generator_c")]
extern "C" {
    fn baxter_core_msgs__msg__JointCommand__init(msg: *mut JointCommand) -> bool;
    fn baxter_core_msgs__msg__JointCommand__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<JointCommand>, size: usize) -> bool;
    fn baxter_core_msgs__msg__JointCommand__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<JointCommand>);
    fn baxter_core_msgs__msg__JointCommand__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<JointCommand>, out_seq: *mut rosidl_runtime_rs::Sequence<JointCommand>) -> bool;
}

// Corresponds to baxter_core_msgs__msg__JointCommand
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JointCommand {

    // This member is not documented.
    #[allow(missing_docs)]
    pub mode: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub command: rosidl_runtime_rs::Sequence<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub names: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,

}

impl JointCommand {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const POSITION_MODE: i32 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const VELOCITY_MODE: i32 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const TORQUE_MODE: i32 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const RAW_POSITION_MODE: i32 = 4;

}


impl Default for JointCommand {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !baxter_core_msgs__msg__JointCommand__init(&mut msg as *mut _) {
        panic!("Call to baxter_core_msgs__msg__JointCommand__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for JointCommand {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { baxter_core_msgs__msg__JointCommand__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { baxter_core_msgs__msg__JointCommand__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { baxter_core_msgs__msg__JointCommand__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for JointCommand {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for JointCommand where Self: Sized {
  const TYPE_NAME: &'static str = "baxter_core_msgs/msg/JointCommand";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__baxter_core_msgs__msg__JointCommand() }
  }
}


#[link(name = "baxter_core_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__baxter_core_msgs__msg__NavigatorState() -> *const std::ffi::c_void;
}

#[link(name = "baxter_core_msgs__rosidl_generator_c")]
extern "C" {
    fn baxter_core_msgs__msg__NavigatorState__init(msg: *mut NavigatorState) -> bool;
    fn baxter_core_msgs__msg__NavigatorState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NavigatorState>, size: usize) -> bool;
    fn baxter_core_msgs__msg__NavigatorState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NavigatorState>);
    fn baxter_core_msgs__msg__NavigatorState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NavigatorState>, out_seq: *mut rosidl_runtime_rs::Sequence<NavigatorState>) -> bool;
}

// Corresponds to baxter_core_msgs__msg__NavigatorState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// buttons

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigatorState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub button_names: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub buttons: rosidl_runtime_rs::Sequence<bool>,

    /// wheel position
    pub wheel: u8,

    /// true if the light is on, false if not
    /// lights map to button names
    pub light_names: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub lights: rosidl_runtime_rs::Sequence<bool>,

}



impl Default for NavigatorState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !baxter_core_msgs__msg__NavigatorState__init(&mut msg as *mut _) {
        panic!("Call to baxter_core_msgs__msg__NavigatorState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NavigatorState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { baxter_core_msgs__msg__NavigatorState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { baxter_core_msgs__msg__NavigatorState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { baxter_core_msgs__msg__NavigatorState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NavigatorState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NavigatorState where Self: Sized {
  const TYPE_NAME: &'static str = "baxter_core_msgs/msg/NavigatorState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__baxter_core_msgs__msg__NavigatorState() }
  }
}


#[link(name = "baxter_core_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__baxter_core_msgs__msg__NavigatorStates() -> *const std::ffi::c_void;
}

#[link(name = "baxter_core_msgs__rosidl_generator_c")]
extern "C" {
    fn baxter_core_msgs__msg__NavigatorStates__init(msg: *mut NavigatorStates) -> bool;
    fn baxter_core_msgs__msg__NavigatorStates__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NavigatorStates>, size: usize) -> bool;
    fn baxter_core_msgs__msg__NavigatorStates__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NavigatorStates>);
    fn baxter_core_msgs__msg__NavigatorStates__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NavigatorStates>, out_seq: *mut rosidl_runtime_rs::Sequence<NavigatorStates>) -> bool;
}

// Corresponds to baxter_core_msgs__msg__NavigatorStates
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// used when publishing multiple navigators

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigatorStates {

    // This member is not documented.
    #[allow(missing_docs)]
    pub names: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub states: rosidl_runtime_rs::Sequence<super::super::msg::rmw::NavigatorState>,

}



impl Default for NavigatorStates {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !baxter_core_msgs__msg__NavigatorStates__init(&mut msg as *mut _) {
        panic!("Call to baxter_core_msgs__msg__NavigatorStates__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NavigatorStates {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { baxter_core_msgs__msg__NavigatorStates__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { baxter_core_msgs__msg__NavigatorStates__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { baxter_core_msgs__msg__NavigatorStates__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NavigatorStates {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NavigatorStates where Self: Sized {
  const TYPE_NAME: &'static str = "baxter_core_msgs/msg/NavigatorStates";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__baxter_core_msgs__msg__NavigatorStates() }
  }
}


#[link(name = "baxter_core_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__baxter_core_msgs__msg__RobustControllerStatus() -> *const std::ffi::c_void;
}

#[link(name = "baxter_core_msgs__rosidl_generator_c")]
extern "C" {
    fn baxter_core_msgs__msg__RobustControllerStatus__init(msg: *mut RobustControllerStatus) -> bool;
    fn baxter_core_msgs__msg__RobustControllerStatus__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RobustControllerStatus>, size: usize) -> bool;
    fn baxter_core_msgs__msg__RobustControllerStatus__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RobustControllerStatus>);
    fn baxter_core_msgs__msg__RobustControllerStatus__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RobustControllerStatus>, out_seq: *mut rosidl_runtime_rs::Sequence<RobustControllerStatus>) -> bool;
}

// Corresponds to baxter_core_msgs__msg__RobustControllerStatus
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// True if the RC is enabled and running, false if not.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RobustControllerStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub is_enabled: bool,

    /// The state of the RC with respect to its completion goal.  One of
    /// NOT_COMPLETE, COMPLETE_W_FAILURE, or COMPLETE_W_SUCCESS
    pub complete: i32,

    /// Identifies the sender of the Enable message that the RC is using for its
    /// commands.  This should correspond to the "uid" field of a recently published
    /// RC *Enable message.
    pub control_uid: rosidl_runtime_rs::String,

    /// Set to true when the RC self-disables as a result of too much time elapsing
    /// without receiving an Enable message.
    pub timed_out: bool,

    /// A list of relevant error codes.  Error codes are defined by the individual
    /// robust controllers, consult a robust controller's documentation to see what
    /// error codes it generates.
    pub error_codes: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,

    /// A list of current labels for the RC's current state. For example, "fastapproach",
    /// "slowapproach", etc. Used primarily for the blended RCs, other RCs can leave this
    /// blank. This will probably contains just one label, but it could contain multiple labels
    /// in the future.
    pub labels: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,

}

impl RobustControllerStatus {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const NOT_COMPLETE: i32 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const COMPLETE_W_FAILURE: i32 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const COMPLETE_W_SUCCESS: i32 = 2;

}


impl Default for RobustControllerStatus {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !baxter_core_msgs__msg__RobustControllerStatus__init(&mut msg as *mut _) {
        panic!("Call to baxter_core_msgs__msg__RobustControllerStatus__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RobustControllerStatus {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { baxter_core_msgs__msg__RobustControllerStatus__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { baxter_core_msgs__msg__RobustControllerStatus__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { baxter_core_msgs__msg__RobustControllerStatus__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RobustControllerStatus {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RobustControllerStatus where Self: Sized {
  const TYPE_NAME: &'static str = "baxter_core_msgs/msg/RobustControllerStatus";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__baxter_core_msgs__msg__RobustControllerStatus() }
  }
}


#[link(name = "baxter_core_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__baxter_core_msgs__msg__SEAJointState() -> *const std::ffi::c_void;
}

#[link(name = "baxter_core_msgs__rosidl_generator_c")]
extern "C" {
    fn baxter_core_msgs__msg__SEAJointState__init(msg: *mut SEAJointState) -> bool;
    fn baxter_core_msgs__msg__SEAJointState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SEAJointState>, size: usize) -> bool;
    fn baxter_core_msgs__msg__SEAJointState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SEAJointState>);
    fn baxter_core_msgs__msg__SEAJointState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SEAJointState>, out_seq: *mut rosidl_runtime_rs::Sequence<SEAJointState>) -> bool;
}

// Corresponds to baxter_core_msgs__msg__SEAJointState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// This is a message that holds data to describe the state of a set of torque controlled joints.
///
/// The state of each joint (revolute or prismatic) is defined by:
///  * the position of the joint (rad or m),
///  * the velocity of the joint (rad/s or m/s) and
///  * the effort that is applied in the joint (Nm or N).
///
/// Each joint is uniquely identified by its name
/// The header specifies the time at which the joint states were recorded. All the joint states
/// in one message have to be recorded at the same time.
///
/// This message consists of a multiple arrays, one for each part of the joint state.
/// The goal is to make each of the fields optional. When e.g. your joints have no
/// effort associated with them, you can leave the effort array empty.
///
/// All arrays in this message should have the same size, or be empty.
/// This is the only way to uniquely associate the joint name with the correct
/// states.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SEAJointState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub name: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub commanded_position: rosidl_runtime_rs::Sequence<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub commanded_velocity: rosidl_runtime_rs::Sequence<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub commanded_acceleration: rosidl_runtime_rs::Sequence<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub commanded_effort: rosidl_runtime_rs::Sequence<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub actual_position: rosidl_runtime_rs::Sequence<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub actual_velocity: rosidl_runtime_rs::Sequence<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub actual_effort: rosidl_runtime_rs::Sequence<f64>,

    /// This includes the inertial feed forward torques when applicable.
    pub gravity_model_effort: rosidl_runtime_rs::Sequence<f64>,

    /// This is the torque required to hold the arm against gravity returned by KDL
    /// if the arm was stationary.  This does not include inertial feed forward
    /// torques (even when we have them) or any of the corrections (i.e. spring
    /// hysteresis, crosstalk, etc) we make to the KDL model.
    pub gravity_only: rosidl_runtime_rs::Sequence<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub hysteresis_model_effort: rosidl_runtime_rs::Sequence<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub crosstalk_model_effort: rosidl_runtime_rs::Sequence<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub hyst_state: f64,

}



impl Default for SEAJointState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !baxter_core_msgs__msg__SEAJointState__init(&mut msg as *mut _) {
        panic!("Call to baxter_core_msgs__msg__SEAJointState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SEAJointState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { baxter_core_msgs__msg__SEAJointState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { baxter_core_msgs__msg__SEAJointState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { baxter_core_msgs__msg__SEAJointState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SEAJointState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SEAJointState where Self: Sized {
  const TYPE_NAME: &'static str = "baxter_core_msgs/msg/SEAJointState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__baxter_core_msgs__msg__SEAJointState() }
  }
}


#[link(name = "baxter_core_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__baxter_core_msgs__msg__URDFConfiguration() -> *const std::ffi::c_void;
}

#[link(name = "baxter_core_msgs__rosidl_generator_c")]
extern "C" {
    fn baxter_core_msgs__msg__URDFConfiguration__init(msg: *mut URDFConfiguration) -> bool;
    fn baxter_core_msgs__msg__URDFConfiguration__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<URDFConfiguration>, size: usize) -> bool;
    fn baxter_core_msgs__msg__URDFConfiguration__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<URDFConfiguration>);
    fn baxter_core_msgs__msg__URDFConfiguration__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<URDFConfiguration>, out_seq: *mut rosidl_runtime_rs::Sequence<URDFConfiguration>) -> bool;
}

// Corresponds to baxter_core_msgs__msg__URDFConfiguration
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// URDF Configuration

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct URDFConfiguration {
    /// time the message was created, serves as a sequence number
    /// time should be changed only when the content changes.
    pub time: builtin_interfaces::msg::rmw::Time,

    /// parent link name
    pub link: rosidl_runtime_rs::String,

    /// joint to configure
    /// link + joint + time uniquely identifies a configuration.
    pub joint: rosidl_runtime_rs::String,

    /// XML or JSON-encoded URDF data.  This should be a URDF fragment
    /// describing the entire subtree for the given joint attached
    /// to the given parent link. If this field is empty the joint
    /// is removed from the parent link.
    pub urdf: rosidl_runtime_rs::String,

}



impl Default for URDFConfiguration {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !baxter_core_msgs__msg__URDFConfiguration__init(&mut msg as *mut _) {
        panic!("Call to baxter_core_msgs__msg__URDFConfiguration__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for URDFConfiguration {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { baxter_core_msgs__msg__URDFConfiguration__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { baxter_core_msgs__msg__URDFConfiguration__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { baxter_core_msgs__msg__URDFConfiguration__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for URDFConfiguration {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for URDFConfiguration where Self: Sized {
  const TYPE_NAME: &'static str = "baxter_core_msgs/msg/URDFConfiguration";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__baxter_core_msgs__msg__URDFConfiguration() }
  }
}


