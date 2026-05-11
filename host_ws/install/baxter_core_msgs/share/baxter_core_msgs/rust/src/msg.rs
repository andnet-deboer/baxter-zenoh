#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to baxter_core_msgs__msg__AnalogIOState

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AnalogIOState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub timestamp: builtin_interfaces::msg::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub value: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub is_input_only: bool,

}



impl Default for AnalogIOState {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::AnalogIOState::default())
  }
}

impl rosidl_runtime_rs::Message for AnalogIOState {
  type RmwMsg = super::msg::rmw::AnalogIOState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.timestamp)).into_owned(),
        value: msg.value,
        is_input_only: msg.is_input_only,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.timestamp)).into_owned(),
      value: msg.value,
      is_input_only: msg.is_input_only,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: builtin_interfaces::msg::Time::from_rmw_message(msg.timestamp),
      value: msg.value,
      is_input_only: msg.is_input_only,
    }
  }
}


// Corresponds to baxter_core_msgs__msg__AnalogIOStates

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AnalogIOStates {

    // This member is not documented.
    #[allow(missing_docs)]
    pub names: Vec<std::string::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub states: Vec<super::msg::AnalogIOState>,

}



impl Default for AnalogIOStates {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::AnalogIOStates::default())
  }
}

impl rosidl_runtime_rs::Message for AnalogIOStates {
  type RmwMsg = super::msg::rmw::AnalogIOStates;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        names: msg.names
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        states: msg.states
          .into_iter()
          .map(|elem| super::msg::AnalogIOState::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        names: msg.names
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        states: msg.states
          .iter()
          .map(|elem| super::msg::AnalogIOState::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      names: msg.names
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      states: msg.states
          .into_iter()
          .map(super::msg::AnalogIOState::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to baxter_core_msgs__msg__AnalogOutputCommand
/// the name of the output

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AnalogOutputCommand {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: std::string::String,

    /// the value to set output
    pub value: u16,

}



impl Default for AnalogOutputCommand {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::AnalogOutputCommand::default())
  }
}

impl rosidl_runtime_rs::Message for AnalogOutputCommand {
  type RmwMsg = super::msg::rmw::AnalogOutputCommand;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
        value: msg.value,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
      value: msg.value,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      name: msg.name.to_string(),
      value: msg.value,
    }
  }
}


// Corresponds to baxter_core_msgs__msg__AssemblyState

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::AssemblyState::default())
  }
}

impl rosidl_runtime_rs::Message for AssemblyState {
  type RmwMsg = super::msg::rmw::AssemblyState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        ready: msg.ready,
        enabled: msg.enabled,
        stopped: msg.stopped,
        error: msg.error,
        estop_button: msg.estop_button,
        estop_source: msg.estop_source,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      ready: msg.ready,
      enabled: msg.enabled,
      stopped: msg.stopped,
      error: msg.error,
      estop_button: msg.estop_button,
      estop_source: msg.estop_source,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      ready: msg.ready,
      enabled: msg.enabled,
      stopped: msg.stopped,
      error: msg.error,
      estop_button: msg.estop_button,
      estop_source: msg.estop_source,
    }
  }
}


// Corresponds to baxter_core_msgs__msg__AssemblyStates

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AssemblyStates {

    // This member is not documented.
    #[allow(missing_docs)]
    pub names: Vec<std::string::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub states: Vec<super::msg::AssemblyState>,

}



impl Default for AssemblyStates {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::AssemblyStates::default())
  }
}

impl rosidl_runtime_rs::Message for AssemblyStates {
  type RmwMsg = super::msg::rmw::AssemblyStates;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        names: msg.names
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        states: msg.states
          .into_iter()
          .map(|elem| super::msg::AssemblyState::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        names: msg.names
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        states: msg.states
          .iter()
          .map(|elem| super::msg::AssemblyState::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      names: msg.names
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      states: msg.states
          .into_iter()
          .map(super::msg::AssemblyState::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to baxter_core_msgs__msg__CameraControl

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::CameraControl::default())
  }
}

impl rosidl_runtime_rs::Message for CameraControl {
  type RmwMsg = super::msg::rmw::CameraControl;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        id: msg.id,
        value: msg.value,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      id: msg.id,
      value: msg.value,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      id: msg.id,
      value: msg.value,
    }
  }
}


// Corresponds to baxter_core_msgs__msg__CameraSettings

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    pub controls: Vec<super::msg::CameraControl>,

}



impl Default for CameraSettings {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::CameraSettings::default())
  }
}

impl rosidl_runtime_rs::Message for CameraSettings {
  type RmwMsg = super::msg::rmw::CameraSettings;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        width: msg.width,
        height: msg.height,
        fps: msg.fps,
        controls: msg.controls
          .into_iter()
          .map(|elem| super::msg::CameraControl::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      width: msg.width,
      height: msg.height,
      fps: msg.fps,
        controls: msg.controls
          .iter()
          .map(|elem| super::msg::CameraControl::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      width: msg.width,
      height: msg.height,
      fps: msg.fps,
      controls: msg.controls
          .into_iter()
          .map(super::msg::CameraControl::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to baxter_core_msgs__msg__CollisionAvoidanceState

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CollisionAvoidanceState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub other_arm: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub collision_object: Vec<std::string::String>,

}



impl Default for CollisionAvoidanceState {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::CollisionAvoidanceState::default())
  }
}

impl rosidl_runtime_rs::Message for CollisionAvoidanceState {
  type RmwMsg = super::msg::rmw::CollisionAvoidanceState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        other_arm: msg.other_arm,
        collision_object: msg.collision_object
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      other_arm: msg.other_arm,
        collision_object: msg.collision_object
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      other_arm: msg.other_arm,
      collision_object: msg.collision_object
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
    }
  }
}


// Corresponds to baxter_core_msgs__msg__CollisionDetectionState

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CollisionDetectionState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub collision_state: bool,

}



impl Default for CollisionDetectionState {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::CollisionDetectionState::default())
  }
}

impl rosidl_runtime_rs::Message for CollisionDetectionState {
  type RmwMsg = super::msg::rmw::CollisionDetectionState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        collision_state: msg.collision_state,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      collision_state: msg.collision_state,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      collision_state: msg.collision_state,
    }
  }
}


// Corresponds to baxter_core_msgs__msg__DigitalIOState

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::DigitalIOState::default())
  }
}

impl rosidl_runtime_rs::Message for DigitalIOState {
  type RmwMsg = super::msg::rmw::DigitalIOState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        state: msg.state,
        is_input_only: msg.is_input_only,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      state: msg.state,
      is_input_only: msg.is_input_only,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      state: msg.state,
      is_input_only: msg.is_input_only,
    }
  }
}


// Corresponds to baxter_core_msgs__msg__DigitalIOStates

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DigitalIOStates {

    // This member is not documented.
    #[allow(missing_docs)]
    pub names: Vec<std::string::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub states: Vec<super::msg::DigitalIOState>,

}



impl Default for DigitalIOStates {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::DigitalIOStates::default())
  }
}

impl rosidl_runtime_rs::Message for DigitalIOStates {
  type RmwMsg = super::msg::rmw::DigitalIOStates;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        names: msg.names
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        states: msg.states
          .into_iter()
          .map(|elem| super::msg::DigitalIOState::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        names: msg.names
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        states: msg.states
          .iter()
          .map(|elem| super::msg::DigitalIOState::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      names: msg.names
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      states: msg.states
          .into_iter()
          .map(super::msg::DigitalIOState::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to baxter_core_msgs__msg__DigitalOutputCommand
/// the name of the output

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DigitalOutputCommand {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: std::string::String,

    /// the value to set output
    pub value: bool,

}



impl Default for DigitalOutputCommand {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::DigitalOutputCommand::default())
  }
}

impl rosidl_runtime_rs::Message for DigitalOutputCommand {
  type RmwMsg = super::msg::rmw::DigitalOutputCommand;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
        value: msg.value,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
      value: msg.value,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      name: msg.name.to_string(),
      value: msg.value,
    }
  }
}


// Corresponds to baxter_core_msgs__msg__EndEffectorCommand
/// Command to be sent to an end effector

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct EndEffectorCommand {
    /// target end effector id
    pub id: u32,

    /// operation to perform
    pub command: std::string::String,

    /// JSON arguments to the command
    pub args: std::string::String,

    /// optional identifier, returned in state when the command is handled
    pub sender: std::string::String,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::EndEffectorCommand::default())
  }
}

impl rosidl_runtime_rs::Message for EndEffectorCommand {
  type RmwMsg = super::msg::rmw::EndEffectorCommand;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        id: msg.id,
        command: msg.command.as_str().into(),
        args: msg.args.as_str().into(),
        sender: msg.sender.as_str().into(),
        sequence: msg.sequence,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      id: msg.id,
        command: msg.command.as_str().into(),
        args: msg.args.as_str().into(),
        sender: msg.sender.as_str().into(),
      sequence: msg.sequence,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      id: msg.id,
      command: msg.command.to_string(),
      args: msg.args.to_string(),
      sender: msg.sender.to_string(),
      sequence: msg.sequence,
    }
  }
}


// Corresponds to baxter_core_msgs__msg__EndEffectorProperties

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct EndEffectorProperties {
    /// EndEffectorId
    pub id: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ui_type: u8,

    /// Manufacturer name
    pub manufacturer: std::string::String,

    /// Product name
    pub product: std::string::String,

    /// Serial number, optional
    pub serial_number: std::string::String,

    /// Hardware revision, optional
    pub hardware_rev: std::string::String,

    /// Firmware revision, optional
    pub firmware_rev: std::string::String,

    /// Firmware date, optional
    pub firmware_date: std::string::String,

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
    pub properties: std::string::String,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::EndEffectorProperties::default())
  }
}

impl rosidl_runtime_rs::Message for EndEffectorProperties {
  type RmwMsg = super::msg::rmw::EndEffectorProperties;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        id: msg.id,
        ui_type: msg.ui_type,
        manufacturer: msg.manufacturer.as_str().into(),
        product: msg.product.as_str().into(),
        serial_number: msg.serial_number.as_str().into(),
        hardware_rev: msg.hardware_rev.as_str().into(),
        firmware_rev: msg.firmware_rev.as_str().into(),
        firmware_date: msg.firmware_date.as_str().into(),
        has_calibration: msg.has_calibration,
        controls_grip: msg.controls_grip,
        senses_grip: msg.senses_grip,
        reverses_grip: msg.reverses_grip,
        controls_force: msg.controls_force,
        senses_force: msg.senses_force,
        controls_position: msg.controls_position,
        senses_position: msg.senses_position,
        properties: msg.properties.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      id: msg.id,
      ui_type: msg.ui_type,
        manufacturer: msg.manufacturer.as_str().into(),
        product: msg.product.as_str().into(),
        serial_number: msg.serial_number.as_str().into(),
        hardware_rev: msg.hardware_rev.as_str().into(),
        firmware_rev: msg.firmware_rev.as_str().into(),
        firmware_date: msg.firmware_date.as_str().into(),
      has_calibration: msg.has_calibration,
      controls_grip: msg.controls_grip,
      senses_grip: msg.senses_grip,
      reverses_grip: msg.reverses_grip,
      controls_force: msg.controls_force,
      senses_force: msg.senses_force,
      controls_position: msg.controls_position,
      senses_position: msg.senses_position,
        properties: msg.properties.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      id: msg.id,
      ui_type: msg.ui_type,
      manufacturer: msg.manufacturer.to_string(),
      product: msg.product.to_string(),
      serial_number: msg.serial_number.to_string(),
      hardware_rev: msg.hardware_rev.to_string(),
      firmware_rev: msg.firmware_rev.to_string(),
      firmware_date: msg.firmware_date.to_string(),
      has_calibration: msg.has_calibration,
      controls_grip: msg.controls_grip,
      senses_grip: msg.senses_grip,
      reverses_grip: msg.reverses_grip,
      controls_force: msg.controls_force,
      senses_force: msg.senses_force,
      controls_position: msg.controls_position,
      senses_position: msg.senses_position,
      properties: msg.properties.to_string(),
    }
  }
}


// Corresponds to baxter_core_msgs__msg__EndEffectorState

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct EndEffectorState {
    /// time when state was updated
    pub timestamp: builtin_interfaces::msg::Time,

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
    pub state: std::string::String,

    /// from the last command message
    pub command: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub command_sender: std::string::String,


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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::EndEffectorState::default())
  }
}

impl rosidl_runtime_rs::Message for EndEffectorState {
  type RmwMsg = super::msg::rmw::EndEffectorState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.timestamp)).into_owned(),
        id: msg.id,
        enabled: msg.enabled,
        calibrated: msg.calibrated,
        ready: msg.ready,
        moving: msg.moving,
        gripping: msg.gripping,
        missed: msg.missed,
        error: msg.error,
        reverse: msg.reverse,
        position: msg.position,
        force: msg.force,
        state: msg.state.as_str().into(),
        command: msg.command.as_str().into(),
        command_sender: msg.command_sender.as_str().into(),
        command_sequence: msg.command_sequence,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        timestamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.timestamp)).into_owned(),
      id: msg.id,
      enabled: msg.enabled,
      calibrated: msg.calibrated,
      ready: msg.ready,
      moving: msg.moving,
      gripping: msg.gripping,
      missed: msg.missed,
      error: msg.error,
      reverse: msg.reverse,
      position: msg.position,
      force: msg.force,
        state: msg.state.as_str().into(),
        command: msg.command.as_str().into(),
        command_sender: msg.command_sender.as_str().into(),
      command_sequence: msg.command_sequence,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      timestamp: builtin_interfaces::msg::Time::from_rmw_message(msg.timestamp),
      id: msg.id,
      enabled: msg.enabled,
      calibrated: msg.calibrated,
      ready: msg.ready,
      moving: msg.moving,
      gripping: msg.gripping,
      missed: msg.missed,
      error: msg.error,
      reverse: msg.reverse,
      position: msg.position,
      force: msg.force,
      state: msg.state.to_string(),
      command: msg.command.to_string(),
      command_sender: msg.command_sender.to_string(),
      command_sequence: msg.command_sequence,
    }
  }
}


// Corresponds to baxter_core_msgs__msg__EndpointState

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct EndpointState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pose: geometry_msgs::msg::Pose,


    // This member is not documented.
    #[allow(missing_docs)]
    pub twist: geometry_msgs::msg::Twist,


    // This member is not documented.
    #[allow(missing_docs)]
    pub wrench: geometry_msgs::msg::Wrench,

}



impl Default for EndpointState {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::EndpointState::default())
  }
}

impl rosidl_runtime_rs::Message for EndpointState {
  type RmwMsg = super::msg::rmw::EndpointState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        pose: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Owned(msg.pose)).into_owned(),
        twist: geometry_msgs::msg::Twist::into_rmw_message(std::borrow::Cow::Owned(msg.twist)).into_owned(),
        wrench: geometry_msgs::msg::Wrench::into_rmw_message(std::borrow::Cow::Owned(msg.wrench)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        pose: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Borrowed(&msg.pose)).into_owned(),
        twist: geometry_msgs::msg::Twist::into_rmw_message(std::borrow::Cow::Borrowed(&msg.twist)).into_owned(),
        wrench: geometry_msgs::msg::Wrench::into_rmw_message(std::borrow::Cow::Borrowed(&msg.wrench)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      pose: geometry_msgs::msg::Pose::from_rmw_message(msg.pose),
      twist: geometry_msgs::msg::Twist::from_rmw_message(msg.twist),
      wrench: geometry_msgs::msg::Wrench::from_rmw_message(msg.wrench),
    }
  }
}


// Corresponds to baxter_core_msgs__msg__EndpointStates

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct EndpointStates {

    // This member is not documented.
    #[allow(missing_docs)]
    pub names: Vec<std::string::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub states: Vec<super::msg::EndpointState>,

}



impl Default for EndpointStates {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::EndpointStates::default())
  }
}

impl rosidl_runtime_rs::Message for EndpointStates {
  type RmwMsg = super::msg::rmw::EndpointStates;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        names: msg.names
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        states: msg.states
          .into_iter()
          .map(|elem| super::msg::EndpointState::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        names: msg.names
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        states: msg.states
          .iter()
          .map(|elem| super::msg::EndpointState::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      names: msg.names
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      states: msg.states
          .into_iter()
          .map(super::msg::EndpointState::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to baxter_core_msgs__msg__HeadPanCommand

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::HeadPanCommand::default())
  }
}

impl rosidl_runtime_rs::Message for HeadPanCommand {
  type RmwMsg = super::msg::rmw::HeadPanCommand;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        target: msg.target,
        speed_ratio: msg.speed_ratio,
        enable_pan_request: msg.enable_pan_request,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      target: msg.target,
      speed_ratio: msg.speed_ratio,
      enable_pan_request: msg.enable_pan_request,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      target: msg.target,
      speed_ratio: msg.speed_ratio,
      enable_pan_request: msg.enable_pan_request,
    }
  }
}


// Corresponds to baxter_core_msgs__msg__HeadState

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::HeadState::default())
  }
}

impl rosidl_runtime_rs::Message for HeadState {
  type RmwMsg = super::msg::rmw::HeadState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        pan: msg.pan,
        is_turning: msg.is_turning,
        is_nodding: msg.is_nodding,
        is_pan_enabled: msg.is_pan_enabled,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      pan: msg.pan,
      is_turning: msg.is_turning,
      is_nodding: msg.is_nodding,
      is_pan_enabled: msg.is_pan_enabled,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      pan: msg.pan,
      is_turning: msg.is_turning,
      is_nodding: msg.is_nodding,
      is_pan_enabled: msg.is_pan_enabled,
    }
  }
}


// Corresponds to baxter_core_msgs__msg__JointCommand

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JointCommand {

    // This member is not documented.
    #[allow(missing_docs)]
    pub mode: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub command: Vec<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub names: Vec<std::string::String>,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::JointCommand::default())
  }
}

impl rosidl_runtime_rs::Message for JointCommand {
  type RmwMsg = super::msg::rmw::JointCommand;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        mode: msg.mode,
        command: msg.command.into(),
        names: msg.names
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      mode: msg.mode,
        command: msg.command.as_slice().into(),
        names: msg.names
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      mode: msg.mode,
      command: msg.command
          .into_iter()
          .collect(),
      names: msg.names
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
    }
  }
}


// Corresponds to baxter_core_msgs__msg__NavigatorState
/// buttons

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigatorState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub button_names: Vec<std::string::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub buttons: Vec<bool>,

    /// wheel position
    pub wheel: u8,

    /// true if the light is on, false if not
    /// lights map to button names
    pub light_names: Vec<std::string::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub lights: Vec<bool>,

}



impl Default for NavigatorState {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::NavigatorState::default())
  }
}

impl rosidl_runtime_rs::Message for NavigatorState {
  type RmwMsg = super::msg::rmw::NavigatorState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        button_names: msg.button_names
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        buttons: msg.buttons.into(),
        wheel: msg.wheel,
        light_names: msg.light_names
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        lights: msg.lights.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        button_names: msg.button_names
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        buttons: msg.buttons.as_slice().into(),
      wheel: msg.wheel,
        light_names: msg.light_names
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        lights: msg.lights.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      button_names: msg.button_names
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      buttons: msg.buttons
          .into_iter()
          .collect(),
      wheel: msg.wheel,
      light_names: msg.light_names
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      lights: msg.lights
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to baxter_core_msgs__msg__NavigatorStates
/// used when publishing multiple navigators

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NavigatorStates {

    // This member is not documented.
    #[allow(missing_docs)]
    pub names: Vec<std::string::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub states: Vec<super::msg::NavigatorState>,

}



impl Default for NavigatorStates {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::NavigatorStates::default())
  }
}

impl rosidl_runtime_rs::Message for NavigatorStates {
  type RmwMsg = super::msg::rmw::NavigatorStates;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        names: msg.names
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        states: msg.states
          .into_iter()
          .map(|elem| super::msg::NavigatorState::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        names: msg.names
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        states: msg.states
          .iter()
          .map(|elem| super::msg::NavigatorState::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      names: msg.names
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      states: msg.states
          .into_iter()
          .map(super::msg::NavigatorState::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to baxter_core_msgs__msg__RobustControllerStatus
/// True if the RC is enabled and running, false if not.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    pub control_uid: std::string::String,

    /// Set to true when the RC self-disables as a result of too much time elapsing
    /// without receiving an Enable message.
    pub timed_out: bool,

    /// A list of relevant error codes.  Error codes are defined by the individual
    /// robust controllers, consult a robust controller's documentation to see what
    /// error codes it generates.
    pub error_codes: Vec<std::string::String>,

    /// A list of current labels for the RC's current state. For example, "fastapproach",
    /// "slowapproach", etc. Used primarily for the blended RCs, other RCs can leave this
    /// blank. This will probably contains just one label, but it could contain multiple labels
    /// in the future.
    pub labels: Vec<std::string::String>,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::RobustControllerStatus::default())
  }
}

impl rosidl_runtime_rs::Message for RobustControllerStatus {
  type RmwMsg = super::msg::rmw::RobustControllerStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        is_enabled: msg.is_enabled,
        complete: msg.complete,
        control_uid: msg.control_uid.as_str().into(),
        timed_out: msg.timed_out,
        error_codes: msg.error_codes
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        labels: msg.labels
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      is_enabled: msg.is_enabled,
      complete: msg.complete,
        control_uid: msg.control_uid.as_str().into(),
      timed_out: msg.timed_out,
        error_codes: msg.error_codes
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        labels: msg.labels
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      is_enabled: msg.is_enabled,
      complete: msg.complete,
      control_uid: msg.control_uid.to_string(),
      timed_out: msg.timed_out,
      error_codes: msg.error_codes
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      labels: msg.labels
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
    }
  }
}


// Corresponds to baxter_core_msgs__msg__SEAJointState
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

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SEAJointState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub name: Vec<std::string::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub commanded_position: Vec<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub commanded_velocity: Vec<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub commanded_acceleration: Vec<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub commanded_effort: Vec<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub actual_position: Vec<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub actual_velocity: Vec<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub actual_effort: Vec<f64>,

    /// This includes the inertial feed forward torques when applicable.
    pub gravity_model_effort: Vec<f64>,

    /// This is the torque required to hold the arm against gravity returned by KDL
    /// if the arm was stationary.  This does not include inertial feed forward
    /// torques (even when we have them) or any of the corrections (i.e. spring
    /// hysteresis, crosstalk, etc) we make to the KDL model.
    pub gravity_only: Vec<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub hysteresis_model_effort: Vec<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub crosstalk_model_effort: Vec<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub hyst_state: f64,

}



impl Default for SEAJointState {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::SEAJointState::default())
  }
}

impl rosidl_runtime_rs::Message for SEAJointState {
  type RmwMsg = super::msg::rmw::SEAJointState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        name: msg.name
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        commanded_position: msg.commanded_position.into(),
        commanded_velocity: msg.commanded_velocity.into(),
        commanded_acceleration: msg.commanded_acceleration.into(),
        commanded_effort: msg.commanded_effort.into(),
        actual_position: msg.actual_position.into(),
        actual_velocity: msg.actual_velocity.into(),
        actual_effort: msg.actual_effort.into(),
        gravity_model_effort: msg.gravity_model_effort.into(),
        gravity_only: msg.gravity_only.into(),
        hysteresis_model_effort: msg.hysteresis_model_effort.into(),
        crosstalk_model_effort: msg.crosstalk_model_effort.into(),
        hyst_state: msg.hyst_state,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        name: msg.name
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        commanded_position: msg.commanded_position.as_slice().into(),
        commanded_velocity: msg.commanded_velocity.as_slice().into(),
        commanded_acceleration: msg.commanded_acceleration.as_slice().into(),
        commanded_effort: msg.commanded_effort.as_slice().into(),
        actual_position: msg.actual_position.as_slice().into(),
        actual_velocity: msg.actual_velocity.as_slice().into(),
        actual_effort: msg.actual_effort.as_slice().into(),
        gravity_model_effort: msg.gravity_model_effort.as_slice().into(),
        gravity_only: msg.gravity_only.as_slice().into(),
        hysteresis_model_effort: msg.hysteresis_model_effort.as_slice().into(),
        crosstalk_model_effort: msg.crosstalk_model_effort.as_slice().into(),
      hyst_state: msg.hyst_state,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      name: msg.name
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      commanded_position: msg.commanded_position
          .into_iter()
          .collect(),
      commanded_velocity: msg.commanded_velocity
          .into_iter()
          .collect(),
      commanded_acceleration: msg.commanded_acceleration
          .into_iter()
          .collect(),
      commanded_effort: msg.commanded_effort
          .into_iter()
          .collect(),
      actual_position: msg.actual_position
          .into_iter()
          .collect(),
      actual_velocity: msg.actual_velocity
          .into_iter()
          .collect(),
      actual_effort: msg.actual_effort
          .into_iter()
          .collect(),
      gravity_model_effort: msg.gravity_model_effort
          .into_iter()
          .collect(),
      gravity_only: msg.gravity_only
          .into_iter()
          .collect(),
      hysteresis_model_effort: msg.hysteresis_model_effort
          .into_iter()
          .collect(),
      crosstalk_model_effort: msg.crosstalk_model_effort
          .into_iter()
          .collect(),
      hyst_state: msg.hyst_state,
    }
  }
}


// Corresponds to baxter_core_msgs__msg__URDFConfiguration
/// URDF Configuration

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct URDFConfiguration {
    /// time the message was created, serves as a sequence number
    /// time should be changed only when the content changes.
    pub time: builtin_interfaces::msg::Time,

    /// parent link name
    pub link: std::string::String,

    /// joint to configure
    /// link + joint + time uniquely identifies a configuration.
    pub joint: std::string::String,

    /// XML or JSON-encoded URDF data.  This should be a URDF fragment
    /// describing the entire subtree for the given joint attached
    /// to the given parent link. If this field is empty the joint
    /// is removed from the parent link.
    pub urdf: std::string::String,

}



impl Default for URDFConfiguration {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::URDFConfiguration::default())
  }
}

impl rosidl_runtime_rs::Message for URDFConfiguration {
  type RmwMsg = super::msg::rmw::URDFConfiguration;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        time: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.time)).into_owned(),
        link: msg.link.as_str().into(),
        joint: msg.joint.as_str().into(),
        urdf: msg.urdf.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        time: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.time)).into_owned(),
        link: msg.link.as_str().into(),
        joint: msg.joint.as_str().into(),
        urdf: msg.urdf.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      time: builtin_interfaces::msg::Time::from_rmw_message(msg.time),
      link: msg.link.to_string(),
      joint: msg.joint.to_string(),
      urdf: msg.urdf.to_string(),
    }
  }
}


