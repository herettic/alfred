// Generated by gencpp from file segway_rmp/SegwayStatus.msg
// DO NOT EDIT!


#ifndef SEGWAY_RMP_MESSAGE_SEGWAYSTATUS_H
#define SEGWAY_RMP_MESSAGE_SEGWAYSTATUS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace segway_rmp
{
template <class ContainerAllocator>
struct SegwayStatus_
{
  typedef SegwayStatus_<ContainerAllocator> Type;

  SegwayStatus_()
    : pitch_angle(0.0)
    , pitch_rate(0.0)
    , roll_angle(0.0)
    , roll_rate(0.0)
    , left_wheel_velocity(0.0)
    , right_wheel_velocity(0.0)
    , yaw_rate(0.0)
    , servo_frames(0.0)
    , left_wheel_displacement(0.0)
    , right_wheel_displacement(0.0)
    , forward_displacement(0.0)
    , yaw_displacement(0.0)
    , left_motor_torque(0.0)
    , right_motor_torque(0.0)
    , operation_mode(0)
    , gain_schedule(0)
    , ui_battery(0.0)
    , powerbase_battery(0.0)
    , motors_enabled(false)  {
    }
  SegwayStatus_(const ContainerAllocator& _alloc)
    : pitch_angle(0.0)
    , pitch_rate(0.0)
    , roll_angle(0.0)
    , roll_rate(0.0)
    , left_wheel_velocity(0.0)
    , right_wheel_velocity(0.0)
    , yaw_rate(0.0)
    , servo_frames(0.0)
    , left_wheel_displacement(0.0)
    , right_wheel_displacement(0.0)
    , forward_displacement(0.0)
    , yaw_displacement(0.0)
    , left_motor_torque(0.0)
    , right_motor_torque(0.0)
    , operation_mode(0)
    , gain_schedule(0)
    , ui_battery(0.0)
    , powerbase_battery(0.0)
    , motors_enabled(false)  {
    }



   typedef float _pitch_angle_type;
  _pitch_angle_type pitch_angle;

   typedef float _pitch_rate_type;
  _pitch_rate_type pitch_rate;

   typedef float _roll_angle_type;
  _roll_angle_type roll_angle;

   typedef float _roll_rate_type;
  _roll_rate_type roll_rate;

   typedef float _left_wheel_velocity_type;
  _left_wheel_velocity_type left_wheel_velocity;

   typedef float _right_wheel_velocity_type;
  _right_wheel_velocity_type right_wheel_velocity;

   typedef float _yaw_rate_type;
  _yaw_rate_type yaw_rate;

   typedef float _servo_frames_type;
  _servo_frames_type servo_frames;

   typedef float _left_wheel_displacement_type;
  _left_wheel_displacement_type left_wheel_displacement;

   typedef float _right_wheel_displacement_type;
  _right_wheel_displacement_type right_wheel_displacement;

   typedef float _forward_displacement_type;
  _forward_displacement_type forward_displacement;

   typedef float _yaw_displacement_type;
  _yaw_displacement_type yaw_displacement;

   typedef float _left_motor_torque_type;
  _left_motor_torque_type left_motor_torque;

   typedef float _right_motor_torque_type;
  _right_motor_torque_type right_motor_torque;

   typedef int8_t _operation_mode_type;
  _operation_mode_type operation_mode;

   typedef int8_t _gain_schedule_type;
  _gain_schedule_type gain_schedule;

   typedef float _ui_battery_type;
  _ui_battery_type ui_battery;

   typedef float _powerbase_battery_type;
  _powerbase_battery_type powerbase_battery;

   typedef uint8_t _motors_enabled_type;
  _motors_enabled_type motors_enabled;


    enum { LIGHT = 1 };
     enum { TALL = 2 };
     enum { HEAVY = 3 };
     enum { BALANCE = 1 };
     enum { TRACTOR = 2 };
     enum { POWER_DOWN = 3 };
 

  typedef boost::shared_ptr< ::segway_rmp::SegwayStatus_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::segway_rmp::SegwayStatus_<ContainerAllocator> const> ConstPtr;

}; // struct SegwayStatus_

typedef ::segway_rmp::SegwayStatus_<std::allocator<void> > SegwayStatus;

typedef boost::shared_ptr< ::segway_rmp::SegwayStatus > SegwayStatusPtr;
typedef boost::shared_ptr< ::segway_rmp::SegwayStatus const> SegwayStatusConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::segway_rmp::SegwayStatus_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::segway_rmp::SegwayStatus_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace segway_rmp

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'segway_rmp': ['/home/avengineers/ROS/catkin_ws/src/segway-rmp-ros-pkg/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::segway_rmp::SegwayStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::segway_rmp::SegwayStatus_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::segway_rmp::SegwayStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::segway_rmp::SegwayStatus_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::segway_rmp::SegwayStatus_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::segway_rmp::SegwayStatus_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::segway_rmp::SegwayStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "658b68a87a84c7483fa3f522de0a2f66";
  }

  static const char* value(const ::segway_rmp::SegwayStatus_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x658b68a87a84c748ULL;
  static const uint64_t static_value2 = 0x3fa3f522de0a2f66ULL;
};

template<class ContainerAllocator>
struct DataType< ::segway_rmp::SegwayStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "segway_rmp/SegwayStatus";
  }

  static const char* value(const ::segway_rmp::SegwayStatus_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::segway_rmp::SegwayStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# This is the msg definition for the Segway Status struct.\n\
\n\
# Gain Schedule Constants\n\
int8    LIGHT=1\n\
int8    TALL=2\n\
int8    HEAVY=3\n\
\n\
# Operation Mode Constants\n\
int8    BALANCE=1\n\
int8    TRACTOR=2\n\
int8    POWER_DOWN=3\n\
\n\
float32 pitch_angle                 # radians\n\
float32 pitch_rate                  # radians/s\n\
float32 roll_angle                  # radians\n\
float32 roll_rate                   # radians/s\n\
float32 left_wheel_velocity         # meters/s\n\
float32 right_wheel_velocity        # meters/s\n\
float32 yaw_rate                    # radians/s\n\
float32 servo_frames                # frames/second\n\
float32 left_wheel_displacement     # meters\n\
float32 right_wheel_displacement    # meters\n\
float32 forward_displacement        # meters\n\
float32 yaw_displacement            # revolutions\n\
float32 left_motor_torque           # Newton-meters\n\
float32 right_motor_torque          # Newton-meters\n\
int8    operation_mode              # Balance, Tractor, or Powered Down\n\
int8    gain_schedule               # Light, Tall, or Heavy\n\
float32 ui_battery                  # Volts\n\
float32 powerbase_battery           # Volts\n\
\n\
bool    motors_enabled              # Enabled (true) or E-Stopped (false)\n\
";
  }

  static const char* value(const ::segway_rmp::SegwayStatus_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::segway_rmp::SegwayStatus_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.pitch_angle);
      stream.next(m.pitch_rate);
      stream.next(m.roll_angle);
      stream.next(m.roll_rate);
      stream.next(m.left_wheel_velocity);
      stream.next(m.right_wheel_velocity);
      stream.next(m.yaw_rate);
      stream.next(m.servo_frames);
      stream.next(m.left_wheel_displacement);
      stream.next(m.right_wheel_displacement);
      stream.next(m.forward_displacement);
      stream.next(m.yaw_displacement);
      stream.next(m.left_motor_torque);
      stream.next(m.right_motor_torque);
      stream.next(m.operation_mode);
      stream.next(m.gain_schedule);
      stream.next(m.ui_battery);
      stream.next(m.powerbase_battery);
      stream.next(m.motors_enabled);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct SegwayStatus_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::segway_rmp::SegwayStatus_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::segway_rmp::SegwayStatus_<ContainerAllocator>& v)
  {
    s << indent << "pitch_angle: ";
    Printer<float>::stream(s, indent + "  ", v.pitch_angle);
    s << indent << "pitch_rate: ";
    Printer<float>::stream(s, indent + "  ", v.pitch_rate);
    s << indent << "roll_angle: ";
    Printer<float>::stream(s, indent + "  ", v.roll_angle);
    s << indent << "roll_rate: ";
    Printer<float>::stream(s, indent + "  ", v.roll_rate);
    s << indent << "left_wheel_velocity: ";
    Printer<float>::stream(s, indent + "  ", v.left_wheel_velocity);
    s << indent << "right_wheel_velocity: ";
    Printer<float>::stream(s, indent + "  ", v.right_wheel_velocity);
    s << indent << "yaw_rate: ";
    Printer<float>::stream(s, indent + "  ", v.yaw_rate);
    s << indent << "servo_frames: ";
    Printer<float>::stream(s, indent + "  ", v.servo_frames);
    s << indent << "left_wheel_displacement: ";
    Printer<float>::stream(s, indent + "  ", v.left_wheel_displacement);
    s << indent << "right_wheel_displacement: ";
    Printer<float>::stream(s, indent + "  ", v.right_wheel_displacement);
    s << indent << "forward_displacement: ";
    Printer<float>::stream(s, indent + "  ", v.forward_displacement);
    s << indent << "yaw_displacement: ";
    Printer<float>::stream(s, indent + "  ", v.yaw_displacement);
    s << indent << "left_motor_torque: ";
    Printer<float>::stream(s, indent + "  ", v.left_motor_torque);
    s << indent << "right_motor_torque: ";
    Printer<float>::stream(s, indent + "  ", v.right_motor_torque);
    s << indent << "operation_mode: ";
    Printer<int8_t>::stream(s, indent + "  ", v.operation_mode);
    s << indent << "gain_schedule: ";
    Printer<int8_t>::stream(s, indent + "  ", v.gain_schedule);
    s << indent << "ui_battery: ";
    Printer<float>::stream(s, indent + "  ", v.ui_battery);
    s << indent << "powerbase_battery: ";
    Printer<float>::stream(s, indent + "  ", v.powerbase_battery);
    s << indent << "motors_enabled: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.motors_enabled);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SEGWAY_RMP_MESSAGE_SEGWAYSTATUS_H
