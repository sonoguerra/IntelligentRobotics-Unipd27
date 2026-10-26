#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to msg_interfaces__msg__RobotStatus

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RobotStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub room_id: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub room_name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub battery_level: i8,

}



impl Default for RobotStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::RobotStatus::default())
  }
}

impl rosidl_runtime_rs::Message for RobotStatus {
  type RmwMsg = super::msg::rmw::RobotStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        room_id: msg.room_id,
        room_name: msg.room_name.as_str().into(),
        battery_level: msg.battery_level,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      room_id: msg.room_id,
        room_name: msg.room_name.as_str().into(),
      battery_level: msg.battery_level,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      room_id: msg.room_id,
      room_name: msg.room_name.to_string(),
      battery_level: msg.battery_level,
    }
  }
}


