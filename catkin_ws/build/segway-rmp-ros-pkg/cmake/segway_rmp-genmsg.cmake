# generated from genmsg/cmake/pkg-genmsg.cmake.em

message(STATUS "segway_rmp: 2 messages, 0 services")

set(MSG_I_FLAGS "-Isegway_rmp:/home/avengineers/ROS/catkin_ws/src/segway-rmp-ros-pkg/msg;-Istd_msgs:/opt/ros/indigo/share/std_msgs/cmake/../msg")

# Find all generators
find_package(gencpp REQUIRED)
find_package(genlisp REQUIRED)
find_package(genpy REQUIRED)

add_custom_target(segway_rmp_generate_messages ALL)

# verify that message/service dependencies have not changed since configure



get_filename_component(_filename "/home/avengineers/ROS/catkin_ws/src/segway-rmp-ros-pkg/msg/SegwayStatusStamped.msg" NAME_WE)
add_custom_target(_segway_rmp_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "segway_rmp" "/home/avengineers/ROS/catkin_ws/src/segway-rmp-ros-pkg/msg/SegwayStatusStamped.msg" "segway_rmp/SegwayStatus:std_msgs/Header"
)

get_filename_component(_filename "/home/avengineers/ROS/catkin_ws/src/segway-rmp-ros-pkg/msg/SegwayStatus.msg" NAME_WE)
add_custom_target(_segway_rmp_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "segway_rmp" "/home/avengineers/ROS/catkin_ws/src/segway-rmp-ros-pkg/msg/SegwayStatus.msg" ""
)

#
#  langs = gencpp;genlisp;genpy
#

### Section generating for lang: gencpp
### Generating Messages
_generate_msg_cpp(segway_rmp
  "/home/avengineers/ROS/catkin_ws/src/segway-rmp-ros-pkg/msg/SegwayStatusStamped.msg"
  "${MSG_I_FLAGS}"
  "/home/avengineers/ROS/catkin_ws/src/segway-rmp-ros-pkg/msg/SegwayStatus.msg;/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/segway_rmp
)
_generate_msg_cpp(segway_rmp
  "/home/avengineers/ROS/catkin_ws/src/segway-rmp-ros-pkg/msg/SegwayStatus.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/segway_rmp
)

### Generating Services

### Generating Module File
_generate_module_cpp(segway_rmp
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/segway_rmp
  "${ALL_GEN_OUTPUT_FILES_cpp}"
)

add_custom_target(segway_rmp_generate_messages_cpp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_cpp}
)
add_dependencies(segway_rmp_generate_messages segway_rmp_generate_messages_cpp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/avengineers/ROS/catkin_ws/src/segway-rmp-ros-pkg/msg/SegwayStatusStamped.msg" NAME_WE)
add_dependencies(segway_rmp_generate_messages_cpp _segway_rmp_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/avengineers/ROS/catkin_ws/src/segway-rmp-ros-pkg/msg/SegwayStatus.msg" NAME_WE)
add_dependencies(segway_rmp_generate_messages_cpp _segway_rmp_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(segway_rmp_gencpp)
add_dependencies(segway_rmp_gencpp segway_rmp_generate_messages_cpp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS segway_rmp_generate_messages_cpp)

### Section generating for lang: genlisp
### Generating Messages
_generate_msg_lisp(segway_rmp
  "/home/avengineers/ROS/catkin_ws/src/segway-rmp-ros-pkg/msg/SegwayStatusStamped.msg"
  "${MSG_I_FLAGS}"
  "/home/avengineers/ROS/catkin_ws/src/segway-rmp-ros-pkg/msg/SegwayStatus.msg;/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/segway_rmp
)
_generate_msg_lisp(segway_rmp
  "/home/avengineers/ROS/catkin_ws/src/segway-rmp-ros-pkg/msg/SegwayStatus.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/segway_rmp
)

### Generating Services

### Generating Module File
_generate_module_lisp(segway_rmp
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/segway_rmp
  "${ALL_GEN_OUTPUT_FILES_lisp}"
)

add_custom_target(segway_rmp_generate_messages_lisp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_lisp}
)
add_dependencies(segway_rmp_generate_messages segway_rmp_generate_messages_lisp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/avengineers/ROS/catkin_ws/src/segway-rmp-ros-pkg/msg/SegwayStatusStamped.msg" NAME_WE)
add_dependencies(segway_rmp_generate_messages_lisp _segway_rmp_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/avengineers/ROS/catkin_ws/src/segway-rmp-ros-pkg/msg/SegwayStatus.msg" NAME_WE)
add_dependencies(segway_rmp_generate_messages_lisp _segway_rmp_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(segway_rmp_genlisp)
add_dependencies(segway_rmp_genlisp segway_rmp_generate_messages_lisp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS segway_rmp_generate_messages_lisp)

### Section generating for lang: genpy
### Generating Messages
_generate_msg_py(segway_rmp
  "/home/avengineers/ROS/catkin_ws/src/segway-rmp-ros-pkg/msg/SegwayStatusStamped.msg"
  "${MSG_I_FLAGS}"
  "/home/avengineers/ROS/catkin_ws/src/segway-rmp-ros-pkg/msg/SegwayStatus.msg;/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/segway_rmp
)
_generate_msg_py(segway_rmp
  "/home/avengineers/ROS/catkin_ws/src/segway-rmp-ros-pkg/msg/SegwayStatus.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/segway_rmp
)

### Generating Services

### Generating Module File
_generate_module_py(segway_rmp
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/segway_rmp
  "${ALL_GEN_OUTPUT_FILES_py}"
)

add_custom_target(segway_rmp_generate_messages_py
  DEPENDS ${ALL_GEN_OUTPUT_FILES_py}
)
add_dependencies(segway_rmp_generate_messages segway_rmp_generate_messages_py)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/avengineers/ROS/catkin_ws/src/segway-rmp-ros-pkg/msg/SegwayStatusStamped.msg" NAME_WE)
add_dependencies(segway_rmp_generate_messages_py _segway_rmp_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/avengineers/ROS/catkin_ws/src/segway-rmp-ros-pkg/msg/SegwayStatus.msg" NAME_WE)
add_dependencies(segway_rmp_generate_messages_py _segway_rmp_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(segway_rmp_genpy)
add_dependencies(segway_rmp_genpy segway_rmp_generate_messages_py)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS segway_rmp_generate_messages_py)



if(gencpp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/segway_rmp)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/segway_rmp
    DESTINATION ${gencpp_INSTALL_DIR}
  )
endif()
add_dependencies(segway_rmp_generate_messages_cpp std_msgs_generate_messages_cpp)

if(genlisp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/segway_rmp)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/segway_rmp
    DESTINATION ${genlisp_INSTALL_DIR}
  )
endif()
add_dependencies(segway_rmp_generate_messages_lisp std_msgs_generate_messages_lisp)

if(genpy_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/segway_rmp)
  install(CODE "execute_process(COMMAND \"/usr/bin/python\" -m compileall \"${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/segway_rmp\")")
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/segway_rmp
    DESTINATION ${genpy_INSTALL_DIR}
  )
endif()
add_dependencies(segway_rmp_generate_messages_py std_msgs_generate_messages_py)
