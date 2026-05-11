#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to baxter_maintenance_msgs__msg__CalibrateArmData

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CalibrateArmData {

    // This member is not documented.
    #[allow(missing_docs)]
    pub suppress_write_to_file: bool,

}



impl Default for CalibrateArmData {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::CalibrateArmData::default())
  }
}

impl rosidl_runtime_rs::Message for CalibrateArmData {
  type RmwMsg = super::msg::rmw::CalibrateArmData;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        suppress_write_to_file: msg.suppress_write_to_file,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      suppress_write_to_file: msg.suppress_write_to_file,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      suppress_write_to_file: msg.suppress_write_to_file,
    }
  }
}


// Corresponds to baxter_maintenance_msgs__msg__CalibrateArmEnable

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CalibrateArmEnable {

    // This member is not documented.
    #[allow(missing_docs)]
    pub is_enabled: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub uid: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub data: super::msg::CalibrateArmData,

}



impl Default for CalibrateArmEnable {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::CalibrateArmEnable::default())
  }
}

impl rosidl_runtime_rs::Message for CalibrateArmEnable {
  type RmwMsg = super::msg::rmw::CalibrateArmEnable;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        is_enabled: msg.is_enabled,
        uid: msg.uid.as_str().into(),
        data: super::msg::CalibrateArmData::into_rmw_message(std::borrow::Cow::Owned(msg.data)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      is_enabled: msg.is_enabled,
        uid: msg.uid.as_str().into(),
        data: super::msg::CalibrateArmData::into_rmw_message(std::borrow::Cow::Borrowed(&msg.data)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      is_enabled: msg.is_enabled,
      uid: msg.uid.to_string(),
      data: super::msg::CalibrateArmData::from_rmw_message(msg.data),
    }
  }
}


// Corresponds to baxter_maintenance_msgs__msg__TareData

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TareData {

    // This member is not documented.
    #[allow(missing_docs)]
    pub tune_gravity_spring: bool,

}



impl Default for TareData {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::TareData::default())
  }
}

impl rosidl_runtime_rs::Message for TareData {
  type RmwMsg = super::msg::rmw::TareData;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        tune_gravity_spring: msg.tune_gravity_spring,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      tune_gravity_spring: msg.tune_gravity_spring,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      tune_gravity_spring: msg.tune_gravity_spring,
    }
  }
}


// Corresponds to baxter_maintenance_msgs__msg__TareEnable

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TareEnable {

    // This member is not documented.
    #[allow(missing_docs)]
    pub is_enabled: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub uid: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub data: super::msg::TareData,

}



impl Default for TareEnable {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::TareEnable::default())
  }
}

impl rosidl_runtime_rs::Message for TareEnable {
  type RmwMsg = super::msg::rmw::TareEnable;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        is_enabled: msg.is_enabled,
        uid: msg.uid.as_str().into(),
        data: super::msg::TareData::into_rmw_message(std::borrow::Cow::Owned(msg.data)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      is_enabled: msg.is_enabled,
        uid: msg.uid.as_str().into(),
        data: super::msg::TareData::into_rmw_message(std::borrow::Cow::Borrowed(&msg.data)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      is_enabled: msg.is_enabled,
      uid: msg.uid.to_string(),
      data: super::msg::TareData::from_rmw_message(msg.data),
    }
  }
}


// Corresponds to baxter_maintenance_msgs__msg__UpdateSource

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct UpdateSource {

    // This member is not documented.
    #[allow(missing_docs)]
    pub devname: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub filename: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub version: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub uuid: std::string::String,

}



impl Default for UpdateSource {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::UpdateSource::default())
  }
}

impl rosidl_runtime_rs::Message for UpdateSource {
  type RmwMsg = super::msg::rmw::UpdateSource;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        devname: msg.devname.as_str().into(),
        filename: msg.filename.as_str().into(),
        version: msg.version.as_str().into(),
        uuid: msg.uuid.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        devname: msg.devname.as_str().into(),
        filename: msg.filename.as_str().into(),
        version: msg.version.as_str().into(),
        uuid: msg.uuid.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      devname: msg.devname.to_string(),
      filename: msg.filename.to_string(),
      version: msg.version.to_string(),
      uuid: msg.uuid.to_string(),
    }
  }
}


// Corresponds to baxter_maintenance_msgs__msg__UpdateSources

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct UpdateSources {

    // This member is not documented.
    #[allow(missing_docs)]
    pub uuid: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub sources: Vec<super::msg::UpdateSource>,

}



impl Default for UpdateSources {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::UpdateSources::default())
  }
}

impl rosidl_runtime_rs::Message for UpdateSources {
  type RmwMsg = super::msg::rmw::UpdateSources;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        uuid: msg.uuid.as_str().into(),
        sources: msg.sources
          .into_iter()
          .map(|elem| super::msg::UpdateSource::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        uuid: msg.uuid.as_str().into(),
        sources: msg.sources
          .iter()
          .map(|elem| super::msg::UpdateSource::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      uuid: msg.uuid.to_string(),
      sources: msg.sources
          .into_iter()
          .map(super::msg::UpdateSource::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to baxter_maintenance_msgs__msg__UpdateStatus
/// See the class UpdateRunner()
/// status:           One-word description of the current action being performed
/// long_description: Details pertaining to status if any.  Used for verbose error messages.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    pub long_description: std::string::String,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::UpdateStatus::default())
  }
}

impl rosidl_runtime_rs::Message for UpdateStatus {
  type RmwMsg = super::msg::rmw::UpdateStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        status: msg.status,
        progress: msg.progress,
        long_description: msg.long_description.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      status: msg.status,
      progress: msg.progress,
        long_description: msg.long_description.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      status: msg.status,
      progress: msg.progress,
      long_description: msg.long_description.to_string(),
    }
  }
}


