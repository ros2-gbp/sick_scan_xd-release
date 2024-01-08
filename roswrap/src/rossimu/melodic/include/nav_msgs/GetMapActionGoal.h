#include "sick_scan/sick_scan_base.h" /* Base definitions included in all header files, added by add_sick_scan_base_header.py. Do not edit this line. */
// Generated by gencpp from file nav_msgs/GetMapActionGoal.msg
// DO NOT EDIT!


#ifndef NAV_MSGS_MESSAGE_GETMAPACTIONGOAL_H
#define NAV_MSGS_MESSAGE_GETMAPACTIONGOAL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <actionlib_msgs/GoalID.h>
#include <nav_msgs/GetMapGoal.h>

namespace nav_msgs
{
template <class ContainerAllocator>
struct GetMapActionGoal_
{
  typedef GetMapActionGoal_<ContainerAllocator> Type;

  GetMapActionGoal_()
    : header()
    , goal_id()
    , goal()  {
    }
  GetMapActionGoal_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , goal_id(_alloc)
    , goal(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::actionlib_msgs::GoalID_<ContainerAllocator>  _goal_id_type;
  _goal_id_type goal_id;

   typedef  ::nav_msgs::GetMapGoal_<ContainerAllocator>  _goal_type;
  _goal_type goal;





  typedef std::shared_ptr< ::nav_msgs::GetMapActionGoal_<ContainerAllocator> > Ptr;
  typedef std::shared_ptr< ::nav_msgs::GetMapActionGoal_<ContainerAllocator> const> ConstPtr;

}; // struct GetMapActionGoal_

typedef ::nav_msgs::GetMapActionGoal_<std::allocator<void> > GetMapActionGoal;

typedef std::shared_ptr< ::nav_msgs::GetMapActionGoal > GetMapActionGoalPtr;
typedef std::shared_ptr< ::nav_msgs::GetMapActionGoal const> GetMapActionGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::nav_msgs::GetMapActionGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::nav_msgs::GetMapActionGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::nav_msgs::GetMapActionGoal_<ContainerAllocator1> & lhs, const ::nav_msgs::GetMapActionGoal_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.goal_id == rhs.goal_id &&
    lhs.goal == rhs.goal;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::nav_msgs::GetMapActionGoal_<ContainerAllocator1> & lhs, const ::nav_msgs::GetMapActionGoal_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace nav_msgs

namespace roswrap
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::nav_msgs::GetMapActionGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::nav_msgs::GetMapActionGoal_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nav_msgs::GetMapActionGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nav_msgs::GetMapActionGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nav_msgs::GetMapActionGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nav_msgs::GetMapActionGoal_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::nav_msgs::GetMapActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4b30be6cd12b9e72826df56b481f40e0";
  }

  static const char* value(const ::nav_msgs::GetMapActionGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4b30be6cd12b9e72ULL;
  static const uint64_t static_value2 = 0x826df56b481f40e0ULL;
};

template<class ContainerAllocator>
struct DataType< ::nav_msgs::GetMapActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "nav_msgs/GetMapActionGoal";
  }

  static const char* value(const ::nav_msgs::GetMapActionGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::nav_msgs::GetMapActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"\n"
"Header header\n"
"actionlib_msgs/GoalID goal_id\n"
"GetMapGoal goal\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: actionlib_msgs/GoalID\n"
"# The stamp should store the time at which this goal was requested.\n"
"# It is used by an action server when it tries to preempt all\n"
"# goals that were requested before a certain time\n"
"time stamp\n"
"\n"
"# The id provides a way to associate feedback and\n"
"# result message with specific goal requests. The id\n"
"# specified must be unique.\n"
"string id\n"
"\n"
"\n"
"================================================================================\n"
"MSG: nav_msgs/GetMapGoal\n"
"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"# Get the map as a nav_msgs/OccupancyGrid\n"
;
  }

  static const char* value(const ::nav_msgs::GetMapActionGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace roswrap

namespace roswrap
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::nav_msgs::GetMapActionGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.goal_id);
      stream.next(m.goal);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetMapActionGoal_

} // namespace serialization
} // namespace roswrap

namespace roswrap
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::nav_msgs::GetMapActionGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::nav_msgs::GetMapActionGoal_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "goal_id: ";
    s << std::endl;
    Printer< ::actionlib_msgs::GoalID_<ContainerAllocator> >::stream(s, indent + "  ", v.goal_id);
    s << indent << "goal: ";
    s << std::endl;
    Printer< ::nav_msgs::GetMapGoal_<ContainerAllocator> >::stream(s, indent + "  ", v.goal);
  }
};

} // namespace message_operations
} // namespace roswrap

#endif // NAV_MSGS_MESSAGE_GETMAPACTIONGOAL_H