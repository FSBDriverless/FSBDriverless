// Generated by gencpp from file eufs_msgs/PointArray.msg
// DO NOT EDIT!


#ifndef EUFS_MSGS_MESSAGE_POINTARRAY_H
#define EUFS_MSGS_MESSAGE_POINTARRAY_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Point.h>

namespace eufs_msgs
{
template <class ContainerAllocator>
struct PointArray_
{
  typedef PointArray_<ContainerAllocator> Type;

  PointArray_()
    : points()  {
    }
  PointArray_(const ContainerAllocator& _alloc)
    : points(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::geometry_msgs::Point_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::geometry_msgs::Point_<ContainerAllocator> >::other >  _points_type;
  _points_type points;





  typedef boost::shared_ptr< ::eufs_msgs::PointArray_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::eufs_msgs::PointArray_<ContainerAllocator> const> ConstPtr;

}; // struct PointArray_

typedef ::eufs_msgs::PointArray_<std::allocator<void> > PointArray;

typedef boost::shared_ptr< ::eufs_msgs::PointArray > PointArrayPtr;
typedef boost::shared_ptr< ::eufs_msgs::PointArray const> PointArrayConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::eufs_msgs::PointArray_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::eufs_msgs::PointArray_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::eufs_msgs::PointArray_<ContainerAllocator1> & lhs, const ::eufs_msgs::PointArray_<ContainerAllocator2> & rhs)
{
  return lhs.points == rhs.points;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::eufs_msgs::PointArray_<ContainerAllocator1> & lhs, const ::eufs_msgs::PointArray_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace eufs_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::eufs_msgs::PointArray_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::eufs_msgs::PointArray_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::eufs_msgs::PointArray_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::eufs_msgs::PointArray_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::eufs_msgs::PointArray_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::eufs_msgs::PointArray_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::eufs_msgs::PointArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3fb3f9dacc279b964c4c8341122c34df";
  }

  static const char* value(const ::eufs_msgs::PointArray_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3fb3f9dacc279b96ULL;
  static const uint64_t static_value2 = 0x4c4c8341122c34dfULL;
};

template<class ContainerAllocator>
struct DataType< ::eufs_msgs::PointArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "eufs_msgs/PointArray";
  }

  static const char* value(const ::eufs_msgs::PointArray_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::eufs_msgs::PointArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Simple msg for array of points\n"
"geometry_msgs/Point[] points\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
;
  }

  static const char* value(const ::eufs_msgs::PointArray_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::eufs_msgs::PointArray_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.points);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PointArray_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::eufs_msgs::PointArray_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::eufs_msgs::PointArray_<ContainerAllocator>& v)
  {
    s << indent << "points[]" << std::endl;
    for (size_t i = 0; i < v.points.size(); ++i)
    {
      s << indent << "  points[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "    ", v.points[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // EUFS_MSGS_MESSAGE_POINTARRAY_H
