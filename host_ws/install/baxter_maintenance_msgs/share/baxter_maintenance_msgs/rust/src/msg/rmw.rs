#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "baxter_maintenance_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__baxter_maintenance_msgs__msg__CalibrateArmData() -> *const std::ffi::c_void;
}

#[link(name = "baxter_maintenance_msgs__rosidl_generator_c")]
extern "C" {
    fn baxter_maintenance_msgs__msg__CalibrateArmData__init(msg: *mut CalibrateArmData) -> bool;
    fn baxter_maintenance_msgs__msg__CalibrateArmData__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CalibrateArmData>, size: usize) -> bool;
    fn baxter_maintenance_msgs__msg__CalibrateArmData__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CalibrateArmData>);
    fn baxter_maintenance_msgs__msg__CalibrateArmData__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CalibrateArmData>, out_seq: *mut rosidl_runtime_rs::Sequence<CalibrateArmData>) -> bool;
}

// Corresponds to baxter_maintenance_msgs__msg__CalibrateArmData
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CalibrateArmData {

    // This member is not documented.
    #[allow(missing_docs)]
    pub suppress_write_to_file: bool,

}



impl Default for CalibrateArmData {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !baxter_maintenance_msgs__msg__CalibrateArmData__init(&mut msg as *mut _) {
        panic!("Call to baxter_maintenance_msgs__msg__CalibrateArmData__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CalibrateArmData {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { baxter_maintenance_msgs__msg__CalibrateArmData__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { baxter_maintenance_msgs__msg__CalibrateArmData__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { baxter_maintenance_msgs__msg__CalibrateArmData__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CalibrateArmData {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CalibrateArmData where Self: Sized {
  const TYPE_NAME: &'static str = "baxter_maintenance_msgs/msg/CalibrateArmData";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__baxter_maintenance_msgs__msg__CalibrateArmData() }
  }
}


#[link(name = "baxter_maintenance_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__baxter_maintenance_msgs__msg__CalibrateArmEnable() -> *const std::ffi::c_void;
}

#[link(name = "baxter_maintenance_msgs__rosidl_generator_c")]
extern "C" {
    fn baxter_maintenance_msgs__msg__CalibrateArmEnable__init(msg: *mut CalibrateArmEnable) -> bool;
    fn baxter_maintenance_msgs__msg__CalibrateArmEnable__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CalibrateArmEnable>, size: usize) -> bool;
    fn baxter_maintenance_msgs__msg__CalibrateArmEnable__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CalibrateArmEnable>);
    fn baxter_maintenance_msgs__msg__CalibrateArmEnable__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CalibrateArmEnable>, out_seq: *mut rosidl_runtime_rs::Sequence<CalibrateArmEnable>) -> bool;
}

// Corresponds to baxter_maintenance_msgs__msg__CalibrateArmEnable
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CalibrateArmEnable {

    // This member is not documented.
    #[allow(missing_docs)]
    pub is_enabled: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub uid: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub data: super::super::msg::rmw::CalibrateArmData,

}



impl Default for CalibrateArmEnable {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !baxter_maintenance_msgs__msg__CalibrateArmEnable__init(&mut msg as *mut _) {
        panic!("Call to baxter_maintenance_msgs__msg__CalibrateArmEnable__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CalibrateArmEnable {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { baxter_maintenance_msgs__msg__CalibrateArmEnable__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { baxter_maintenance_msgs__msg__CalibrateArmEnable__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { baxter_maintenance_msgs__msg__CalibrateArmEnable__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CalibrateArmEnable {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CalibrateArmEnable where Self: Sized {
  const TYPE_NAME: &'static str = "baxter_maintenance_msgs/msg/CalibrateArmEnable";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__baxter_maintenance_msgs__msg__CalibrateArmEnable() }
  }
}


#[link(name = "baxter_maintenance_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__baxter_maintenance_msgs__msg__TareData() -> *const std::ffi::c_void;
}

#[link(name = "baxter_maintenance_msgs__rosidl_generator_c")]
extern "C" {
    fn baxter_maintenance_msgs__msg__TareData__init(msg: *mut TareData) -> bool;
    fn baxter_maintenance_msgs__msg__TareData__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TareData>, size: usize) -> bool;
    fn baxter_maintenance_msgs__msg__TareData__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TareData>);
    fn baxter_maintenance_msgs__msg__TareData__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TareData>, out_seq: *mut rosidl_runtime_rs::Sequence<TareData>) -> bool;
}

// Corresponds to baxter_maintenance_msgs__msg__TareData
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TareData {

    // This member is not documented.
    #[allow(missing_docs)]
    pub tune_gravity_spring: bool,

}



impl Default for TareData {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !baxter_maintenance_msgs__msg__TareData__init(&mut msg as *mut _) {
        panic!("Call to baxter_maintenance_msgs__msg__TareData__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TareData {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { baxter_maintenance_msgs__msg__TareData__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { baxter_maintenance_msgs__msg__TareData__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { baxter_maintenance_msgs__msg__TareData__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TareData {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TareData where Self: Sized {
  const TYPE_NAME: &'static str = "baxter_maintenance_msgs/msg/TareData";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__baxter_maintenance_msgs__msg__TareData() }
  }
}


#[link(name = "baxter_maintenance_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__baxter_maintenance_msgs__msg__TareEnable() -> *const std::ffi::c_void;
}

#[link(name = "baxter_maintenance_msgs__rosidl_generator_c")]
extern "C" {
    fn baxter_maintenance_msgs__msg__TareEnable__init(msg: *mut TareEnable) -> bool;
    fn baxter_maintenance_msgs__msg__TareEnable__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TareEnable>, size: usize) -> bool;
    fn baxter_maintenance_msgs__msg__TareEnable__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TareEnable>);
    fn baxter_maintenance_msgs__msg__TareEnable__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TareEnable>, out_seq: *mut rosidl_runtime_rs::Sequence<TareEnable>) -> bool;
}

// Corresponds to baxter_maintenance_msgs__msg__TareEnable
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TareEnable {

    // This member is not documented.
    #[allow(missing_docs)]
    pub is_enabled: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub uid: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub data: super::super::msg::rmw::TareData,

}



impl Default for TareEnable {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !baxter_maintenance_msgs__msg__TareEnable__init(&mut msg as *mut _) {
        panic!("Call to baxter_maintenance_msgs__msg__TareEnable__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TareEnable {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { baxter_maintenance_msgs__msg__TareEnable__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { baxter_maintenance_msgs__msg__TareEnable__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { baxter_maintenance_msgs__msg__TareEnable__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TareEnable {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TareEnable where Self: Sized {
  const TYPE_NAME: &'static str = "baxter_maintenance_msgs/msg/TareEnable";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__baxter_maintenance_msgs__msg__TareEnable() }
  }
}


#[link(name = "baxter_maintenance_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__baxter_maintenance_msgs__msg__UpdateSource() -> *const std::ffi::c_void;
}

#[link(name = "baxter_maintenance_msgs__rosidl_generator_c")]
extern "C" {
    fn baxter_maintenance_msgs__msg__UpdateSource__init(msg: *mut UpdateSource) -> bool;
    fn baxter_maintenance_msgs__msg__UpdateSource__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<UpdateSource>, size: usize) -> bool;
    fn baxter_maintenance_msgs__msg__UpdateSource__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<UpdateSource>);
    fn baxter_maintenance_msgs__msg__UpdateSource__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<UpdateSource>, out_seq: *mut rosidl_runtime_rs::Sequence<UpdateSource>) -> bool;
}

// Corresponds to baxter_maintenance_msgs__msg__UpdateSource
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct UpdateSource {

    // This member is not documented.
    #[allow(missing_docs)]
    pub devname: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub filename: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub version: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub uuid: rosidl_runtime_rs::String,

}



impl Default for UpdateSource {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !baxter_maintenance_msgs__msg__UpdateSource__init(&mut msg as *mut _) {
        panic!("Call to baxter_maintenance_msgs__msg__UpdateSource__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for UpdateSource {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { baxter_maintenance_msgs__msg__UpdateSource__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { baxter_maintenance_msgs__msg__UpdateSource__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { baxter_maintenance_msgs__msg__UpdateSource__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for UpdateSource {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for UpdateSource where Self: Sized {
  const TYPE_NAME: &'static str = "baxter_maintenance_msgs/msg/UpdateSource";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__baxter_maintenance_msgs__msg__UpdateSource() }
  }
}


#[link(name = "baxter_maintenance_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__baxter_maintenance_msgs__msg__UpdateSources() -> *const std::ffi::c_void;
}

#[link(name = "baxter_maintenance_msgs__rosidl_generator_c")]
extern "C" {
    fn baxter_maintenance_msgs__msg__UpdateSources__init(msg: *mut UpdateSources) -> bool;
    fn baxter_maintenance_msgs__msg__UpdateSources__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<UpdateSources>, size: usize) -> bool;
    fn baxter_maintenance_msgs__msg__UpdateSources__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<UpdateSources>);
    fn baxter_maintenance_msgs__msg__UpdateSources__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<UpdateSources>, out_seq: *mut rosidl_runtime_rs::Sequence<UpdateSources>) -> bool;
}

// Corresponds to baxter_maintenance_msgs__msg__UpdateSources
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct UpdateSources {

    // This member is not documented.
    #[allow(missing_docs)]
    pub uuid: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub sources: rosidl_runtime_rs::Sequence<super::super::msg::rmw::UpdateSource>,

}



impl Default for UpdateSources {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !baxter_maintenance_msgs__msg__UpdateSources__init(&mut msg as *mut _) {
        panic!("Call to baxter_maintenance_msgs__msg__UpdateSources__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for UpdateSources {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { baxter_maintenance_msgs__msg__UpdateSources__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { baxter_maintenance_msgs__msg__UpdateSources__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { baxter_maintenance_msgs__msg__UpdateSources__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for UpdateSources {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for UpdateSources where Self: Sized {
  const TYPE_NAME: &'static str = "baxter_maintenance_msgs/msg/UpdateSources";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__baxter_maintenance_msgs__msg__UpdateSources() }
  }
}


#[link(name = "baxter_maintenance_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__baxter_maintenance_msgs__msg__UpdateStatus() -> *const std::ffi::c_void;
}

#[link(name = "baxter_maintenance_msgs__rosidl_generator_c")]
extern "C" {
    fn baxter_maintenance_msgs__msg__UpdateStatus__init(msg: *mut UpdateStatus) -> bool;
    fn baxter_maintenance_msgs__msg__UpdateStatus__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<UpdateStatus>, size: usize) -> bool;
    fn baxter_maintenance_msgs__msg__UpdateStatus__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<UpdateStatus>);
    fn baxter_maintenance_msgs__msg__UpdateStatus__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<UpdateStatus>, out_seq: *mut rosidl_runtime_rs::Sequence<UpdateStatus>) -> bool;
}

// Corresponds to baxter_maintenance_msgs__msg__UpdateStatus
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// See the class UpdateRunner()
/// status:           One-word description of the current action being performed
/// long_description: Details pertaining to status if any.  Used for verbose error messages.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct UpdateStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub progress: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub long_description: rosidl_runtime_rs::String,

}

impl UpdateStatus {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STS_IDLE: u16 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STS_INVALID: u16 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STS_BUSY: u16 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STS_CANCELLED: u16 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STS_ERR: u16 = 4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STS_MOUNT_UPDATE: u16 = 5;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STS_VERIFY_UPDATE: u16 = 6;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STS_PREP_STAGING: u16 = 7;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STS_MOUNT_STAGING: u16 = 8;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STS_EXTRACT_UPDATE: u16 = 9;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STS_LOAD_KEXEC: u16 = 10;

}


impl Default for UpdateStatus {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !baxter_maintenance_msgs__msg__UpdateStatus__init(&mut msg as *mut _) {
        panic!("Call to baxter_maintenance_msgs__msg__UpdateStatus__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for UpdateStatus {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { baxter_maintenance_msgs__msg__UpdateStatus__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { baxter_maintenance_msgs__msg__UpdateStatus__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { baxter_maintenance_msgs__msg__UpdateStatus__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for UpdateStatus {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for UpdateStatus where Self: Sized {
  const TYPE_NAME: &'static str = "baxter_maintenance_msgs/msg/UpdateStatus";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__baxter_maintenance_msgs__msg__UpdateStatus() }
  }
}


