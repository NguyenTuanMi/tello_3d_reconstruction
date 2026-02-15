// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tello_msgs:srv/TelloAction.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "tello_msgs/srv/tello_action.hpp"


#ifndef TELLO_MSGS__SRV__DETAIL__TELLO_ACTION__BUILDER_HPP_
#define TELLO_MSGS__SRV__DETAIL__TELLO_ACTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tello_msgs/srv/detail/tello_action__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tello_msgs
{

namespace srv
{

namespace builder
{

class Init_TelloAction_Request_cmd
{
public:
  Init_TelloAction_Request_cmd()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tello_msgs::srv::TelloAction_Request cmd(::tello_msgs::srv::TelloAction_Request::_cmd_type arg)
  {
    msg_.cmd = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tello_msgs::srv::TelloAction_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tello_msgs::srv::TelloAction_Request>()
{
  return tello_msgs::srv::builder::Init_TelloAction_Request_cmd();
}

}  // namespace tello_msgs


namespace tello_msgs
{

namespace srv
{

namespace builder
{

class Init_TelloAction_Response_rc
{
public:
  Init_TelloAction_Response_rc()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tello_msgs::srv::TelloAction_Response rc(::tello_msgs::srv::TelloAction_Response::_rc_type arg)
  {
    msg_.rc = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tello_msgs::srv::TelloAction_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tello_msgs::srv::TelloAction_Response>()
{
  return tello_msgs::srv::builder::Init_TelloAction_Response_rc();
}

}  // namespace tello_msgs


namespace tello_msgs
{

namespace srv
{

namespace builder
{

class Init_TelloAction_Event_response
{
public:
  explicit Init_TelloAction_Event_response(::tello_msgs::srv::TelloAction_Event & msg)
  : msg_(msg)
  {}
  ::tello_msgs::srv::TelloAction_Event response(::tello_msgs::srv::TelloAction_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tello_msgs::srv::TelloAction_Event msg_;
};

class Init_TelloAction_Event_request
{
public:
  explicit Init_TelloAction_Event_request(::tello_msgs::srv::TelloAction_Event & msg)
  : msg_(msg)
  {}
  Init_TelloAction_Event_response request(::tello_msgs::srv::TelloAction_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_TelloAction_Event_response(msg_);
  }

private:
  ::tello_msgs::srv::TelloAction_Event msg_;
};

class Init_TelloAction_Event_info
{
public:
  Init_TelloAction_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TelloAction_Event_request info(::tello_msgs::srv::TelloAction_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_TelloAction_Event_request(msg_);
  }

private:
  ::tello_msgs::srv::TelloAction_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tello_msgs::srv::TelloAction_Event>()
{
  return tello_msgs::srv::builder::Init_TelloAction_Event_info();
}

}  // namespace tello_msgs

#endif  // TELLO_MSGS__SRV__DETAIL__TELLO_ACTION__BUILDER_HPP_
