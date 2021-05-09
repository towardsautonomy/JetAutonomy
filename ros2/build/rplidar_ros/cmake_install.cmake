# Install script for directory: /home/jetson/JetAutonomy/ros2/src/rplidar

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/jetson/JetAutonomy/ros2/install/rplidar_ros")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/rplidar_ros/rplidarNode" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/rplidar_ros/rplidarNode")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/rplidar_ros/rplidarNode"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/rplidar_ros" TYPE EXECUTABLE FILES "/home/jetson/JetAutonomy/ros2/build/rplidar_ros/rplidarNode")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/rplidar_ros/rplidarNode" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/rplidar_ros/rplidarNode")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/rplidar_ros/rplidarNode"
         OLD_RPATH "/home/jetson/ros2_dashing/install/geometry_msgs/lib:/home/jetson/ros2_dashing/install/std_msgs/lib:/home/jetson/ros2_dashing/install/sensor_msgs/lib:/home/jetson/ros2_dashing/install/std_srvs/lib:/home/jetson/ros2_dashing/install/class_loader/lib:/home/jetson/ros2_dashing/install/rclcpp/lib:/home/jetson/ros2_dashing/install/rcl/lib:/home/jetson/ros2_dashing/install/rcl_interfaces/lib:/home/jetson/ros2_dashing/install/rmw_implementation/lib:/home/jetson/ros2_dashing/install/rmw/lib:/home/jetson/ros2_dashing/install/rcutils/lib:/home/jetson/ros2_dashing/install/rcl_logging_noop/lib:/home/jetson/ros2_dashing/install/builtin_interfaces/lib:/home/jetson/ros2_dashing/install/rosidl_typesupport_introspection_cpp/lib:/home/jetson/ros2_dashing/install/rosidl_typesupport_introspection_c/lib:/home/jetson/ros2_dashing/install/rosgraph_msgs/lib:/home/jetson/ros2_dashing/install/rosidl_typesupport_cpp/lib:/home/jetson/ros2_dashing/install/rosidl_typesupport_c/lib:/home/jetson/ros2_dashing/install/rosidl_generator_c/lib:/home/jetson/ros2_dashing/install/rcl_yaml_param_parser/lib:/home/jetson/ros2_dashing/install/console_bridge_vendor/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/rplidar_ros/rplidarNode")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/rplidar_ros/rplidarNodeClient" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/rplidar_ros/rplidarNodeClient")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/rplidar_ros/rplidarNodeClient"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/rplidar_ros" TYPE EXECUTABLE FILES "/home/jetson/JetAutonomy/ros2/build/rplidar_ros/rplidarNodeClient")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/rplidar_ros/rplidarNodeClient" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/rplidar_ros/rplidarNodeClient")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/rplidar_ros/rplidarNodeClient"
         OLD_RPATH "/home/jetson/ros2_dashing/install/geometry_msgs/lib:/home/jetson/ros2_dashing/install/std_msgs/lib:/home/jetson/ros2_dashing/install/sensor_msgs/lib:/home/jetson/ros2_dashing/install/std_srvs/lib:/home/jetson/ros2_dashing/install/class_loader/lib:/home/jetson/ros2_dashing/install/rclcpp/lib:/home/jetson/ros2_dashing/install/rcl/lib:/home/jetson/ros2_dashing/install/rcl_interfaces/lib:/home/jetson/ros2_dashing/install/rmw_implementation/lib:/home/jetson/ros2_dashing/install/rmw/lib:/home/jetson/ros2_dashing/install/rcutils/lib:/home/jetson/ros2_dashing/install/rcl_logging_noop/lib:/home/jetson/ros2_dashing/install/builtin_interfaces/lib:/home/jetson/ros2_dashing/install/rosidl_typesupport_introspection_cpp/lib:/home/jetson/ros2_dashing/install/rosidl_typesupport_introspection_c/lib:/home/jetson/ros2_dashing/install/rosgraph_msgs/lib:/home/jetson/ros2_dashing/install/rosidl_typesupport_cpp/lib:/home/jetson/ros2_dashing/install/rosidl_typesupport_c/lib:/home/jetson/ros2_dashing/install/rosidl_generator_c/lib:/home/jetson/ros2_dashing/install/rcl_yaml_param_parser/lib:/home/jetson/ros2_dashing/install/console_bridge_vendor/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/rplidar_ros/rplidarNodeClient")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/rplidar_ros/rplidar_composition" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/rplidar_ros/rplidar_composition")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/rplidar_ros/rplidar_composition"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/rplidar_ros" TYPE EXECUTABLE FILES "/home/jetson/JetAutonomy/ros2/build/rplidar_ros/rplidar_composition")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/rplidar_ros/rplidar_composition" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/rplidar_ros/rplidar_composition")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/rplidar_ros/rplidar_composition"
         OLD_RPATH "/home/jetson/ros2_dashing/install/geometry_msgs/lib:/home/jetson/ros2_dashing/install/std_msgs/lib:/home/jetson/ros2_dashing/install/sensor_msgs/lib:/home/jetson/ros2_dashing/install/std_srvs/lib:/home/jetson/ros2_dashing/install/class_loader/lib:/home/jetson/ros2_dashing/install/rclcpp/lib:/home/jetson/ros2_dashing/install/rcl/lib:/home/jetson/ros2_dashing/install/rcl_interfaces/lib:/home/jetson/ros2_dashing/install/rmw_implementation/lib:/home/jetson/ros2_dashing/install/rmw/lib:/home/jetson/ros2_dashing/install/rcutils/lib:/home/jetson/ros2_dashing/install/rcl_logging_noop/lib:/home/jetson/ros2_dashing/install/builtin_interfaces/lib:/home/jetson/ros2_dashing/install/rosidl_typesupport_introspection_cpp/lib:/home/jetson/ros2_dashing/install/rosidl_typesupport_introspection_c/lib:/home/jetson/ros2_dashing/install/rosgraph_msgs/lib:/home/jetson/ros2_dashing/install/rosidl_typesupport_cpp/lib:/home/jetson/ros2_dashing/install/rosidl_typesupport_c/lib:/home/jetson/ros2_dashing/install/rosidl_generator_c/lib:/home/jetson/ros2_dashing/install/rcl_yaml_param_parser/lib:/home/jetson/JetAutonomy/ros2/build/rplidar_ros:/home/jetson/ros2_dashing/install/console_bridge_vendor/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/rplidar_ros/rplidar_composition")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rplidar_ros" TYPE DIRECTORY FILES
    "/home/jetson/JetAutonomy/ros2/src/rplidar/launch"
    "/home/jetson/JetAutonomy/ros2/src/rplidar/rviz"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librplidar_composition_node.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librplidar_composition_node.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librplidar_composition_node.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/jetson/JetAutonomy/ros2/build/rplidar_ros/librplidar_composition_node.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librplidar_composition_node.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librplidar_composition_node.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librplidar_composition_node.so"
         OLD_RPATH "/home/jetson/ros2_dashing/install/geometry_msgs/lib:/home/jetson/ros2_dashing/install/std_msgs/lib:/home/jetson/ros2_dashing/install/sensor_msgs/lib:/home/jetson/ros2_dashing/install/std_srvs/lib:/home/jetson/ros2_dashing/install/console_bridge_vendor/lib:/home/jetson/ros2_dashing/install/class_loader/lib:/home/jetson/ros2_dashing/install/rclcpp/lib:/home/jetson/ros2_dashing/install/rcl/lib:/home/jetson/ros2_dashing/install/rcl_interfaces/lib:/home/jetson/ros2_dashing/install/rmw_implementation/lib:/home/jetson/ros2_dashing/install/rmw/lib:/home/jetson/ros2_dashing/install/rcutils/lib:/home/jetson/ros2_dashing/install/rcl_logging_noop/lib:/home/jetson/ros2_dashing/install/builtin_interfaces/lib:/home/jetson/ros2_dashing/install/rosidl_typesupport_introspection_cpp/lib:/home/jetson/ros2_dashing/install/rosidl_typesupport_introspection_c/lib:/home/jetson/ros2_dashing/install/rosgraph_msgs/lib:/home/jetson/ros2_dashing/install/rosidl_typesupport_cpp/lib:/home/jetson/ros2_dashing/install/rosidl_typesupport_c/lib:/home/jetson/ros2_dashing/install/rosidl_generator_c/lib:/home/jetson/ros2_dashing/install/rcl_yaml_param_parser/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/librplidar_composition_node.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/jetson/JetAutonomy/ros2/src/rplidar/include/")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/rplidar_ros/rplidarNode" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/rplidar_ros/rplidarNode")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/rplidar_ros/rplidarNode"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/rplidar_ros" TYPE EXECUTABLE FILES "/home/jetson/JetAutonomy/ros2/build/rplidar_ros/rplidarNode")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/rplidar_ros/rplidarNode" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/rplidar_ros/rplidarNode")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/rplidar_ros/rplidarNode"
         OLD_RPATH "/home/jetson/ros2_dashing/install/geometry_msgs/lib:/home/jetson/ros2_dashing/install/std_msgs/lib:/home/jetson/ros2_dashing/install/sensor_msgs/lib:/home/jetson/ros2_dashing/install/std_srvs/lib:/home/jetson/ros2_dashing/install/class_loader/lib:/home/jetson/ros2_dashing/install/rclcpp/lib:/home/jetson/ros2_dashing/install/rcl/lib:/home/jetson/ros2_dashing/install/rcl_interfaces/lib:/home/jetson/ros2_dashing/install/rmw_implementation/lib:/home/jetson/ros2_dashing/install/rmw/lib:/home/jetson/ros2_dashing/install/rcutils/lib:/home/jetson/ros2_dashing/install/rcl_logging_noop/lib:/home/jetson/ros2_dashing/install/builtin_interfaces/lib:/home/jetson/ros2_dashing/install/rosidl_typesupport_introspection_cpp/lib:/home/jetson/ros2_dashing/install/rosidl_typesupport_introspection_c/lib:/home/jetson/ros2_dashing/install/rosgraph_msgs/lib:/home/jetson/ros2_dashing/install/rosidl_typesupport_cpp/lib:/home/jetson/ros2_dashing/install/rosidl_typesupport_c/lib:/home/jetson/ros2_dashing/install/rosidl_generator_c/lib:/home/jetson/ros2_dashing/install/rcl_yaml_param_parser/lib:/home/jetson/ros2_dashing/install/console_bridge_vendor/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/rplidar_ros/rplidarNode")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/rplidar_ros/rplidarNodeClient" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/rplidar_ros/rplidarNodeClient")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/rplidar_ros/rplidarNodeClient"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/rplidar_ros" TYPE EXECUTABLE FILES "/home/jetson/JetAutonomy/ros2/build/rplidar_ros/rplidarNodeClient")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/rplidar_ros/rplidarNodeClient" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/rplidar_ros/rplidarNodeClient")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/rplidar_ros/rplidarNodeClient"
         OLD_RPATH "/home/jetson/ros2_dashing/install/geometry_msgs/lib:/home/jetson/ros2_dashing/install/std_msgs/lib:/home/jetson/ros2_dashing/install/sensor_msgs/lib:/home/jetson/ros2_dashing/install/std_srvs/lib:/home/jetson/ros2_dashing/install/class_loader/lib:/home/jetson/ros2_dashing/install/rclcpp/lib:/home/jetson/ros2_dashing/install/rcl/lib:/home/jetson/ros2_dashing/install/rcl_interfaces/lib:/home/jetson/ros2_dashing/install/rmw_implementation/lib:/home/jetson/ros2_dashing/install/rmw/lib:/home/jetson/ros2_dashing/install/rcutils/lib:/home/jetson/ros2_dashing/install/rcl_logging_noop/lib:/home/jetson/ros2_dashing/install/builtin_interfaces/lib:/home/jetson/ros2_dashing/install/rosidl_typesupport_introspection_cpp/lib:/home/jetson/ros2_dashing/install/rosidl_typesupport_introspection_c/lib:/home/jetson/ros2_dashing/install/rosgraph_msgs/lib:/home/jetson/ros2_dashing/install/rosidl_typesupport_cpp/lib:/home/jetson/ros2_dashing/install/rosidl_typesupport_c/lib:/home/jetson/ros2_dashing/install/rosidl_generator_c/lib:/home/jetson/ros2_dashing/install/rcl_yaml_param_parser/lib:/home/jetson/ros2_dashing/install/console_bridge_vendor/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/rplidar_ros/rplidarNodeClient")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/rplidar_ros/rplidar_composition" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/rplidar_ros/rplidar_composition")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/rplidar_ros/rplidar_composition"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/rplidar_ros" TYPE EXECUTABLE FILES "/home/jetson/JetAutonomy/ros2/build/rplidar_ros/rplidar_composition")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/rplidar_ros/rplidar_composition" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/rplidar_ros/rplidar_composition")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/rplidar_ros/rplidar_composition"
         OLD_RPATH "/home/jetson/ros2_dashing/install/geometry_msgs/lib:/home/jetson/ros2_dashing/install/std_msgs/lib:/home/jetson/ros2_dashing/install/sensor_msgs/lib:/home/jetson/ros2_dashing/install/std_srvs/lib:/home/jetson/ros2_dashing/install/class_loader/lib:/home/jetson/ros2_dashing/install/rclcpp/lib:/home/jetson/ros2_dashing/install/rcl/lib:/home/jetson/ros2_dashing/install/rcl_interfaces/lib:/home/jetson/ros2_dashing/install/rmw_implementation/lib:/home/jetson/ros2_dashing/install/rmw/lib:/home/jetson/ros2_dashing/install/rcutils/lib:/home/jetson/ros2_dashing/install/rcl_logging_noop/lib:/home/jetson/ros2_dashing/install/builtin_interfaces/lib:/home/jetson/ros2_dashing/install/rosidl_typesupport_introspection_cpp/lib:/home/jetson/ros2_dashing/install/rosidl_typesupport_introspection_c/lib:/home/jetson/ros2_dashing/install/rosgraph_msgs/lib:/home/jetson/ros2_dashing/install/rosidl_typesupport_cpp/lib:/home/jetson/ros2_dashing/install/rosidl_typesupport_c/lib:/home/jetson/ros2_dashing/install/rosidl_generator_c/lib:/home/jetson/ros2_dashing/install/rcl_yaml_param_parser/lib:/home/jetson/JetAutonomy/ros2/build/rplidar_ros:/home/jetson/ros2_dashing/install/console_bridge_vendor/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/rplidar_ros/rplidar_composition")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/package_run_dependencies" TYPE FILE FILES "/home/jetson/JetAutonomy/ros2/build/rplidar_ros/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/rplidar_ros")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/parent_prefix_path" TYPE FILE FILES "/home/jetson/JetAutonomy/ros2/build/rplidar_ros/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/rplidar_ros")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rplidar_ros/environment" TYPE FILE FILES "/home/jetson/ros2_dashing/install/ament_cmake_core/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rplidar_ros/environment" TYPE FILE FILES "/home/jetson/ros2_dashing/install/ament_cmake_core/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rplidar_ros" TYPE FILE FILES "/home/jetson/JetAutonomy/ros2/build/rplidar_ros/ament_cmake_environment_hooks/local_setup.bash")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rplidar_ros" TYPE FILE FILES "/home/jetson/JetAutonomy/ros2/build/rplidar_ros/ament_cmake_environment_hooks/local_setup.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rplidar_ros" TYPE FILE FILES "/home/jetson/JetAutonomy/ros2/build/rplidar_ros/ament_cmake_environment_hooks/local_setup.zsh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/packages" TYPE FILE FILES "/home/jetson/JetAutonomy/ros2/build/rplidar_ros/ament_cmake_index/share/ament_index/resource_index/packages/rplidar_ros")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rplidar_ros/cmake" TYPE FILE FILES "/home/jetson/JetAutonomy/ros2/build/rplidar_ros/ament_cmake_export_dependencies/ament_cmake_export_dependencies-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rplidar_ros/cmake" TYPE FILE FILES "/home/jetson/JetAutonomy/ros2/build/rplidar_ros/ament_cmake_export_include_directories/ament_cmake_export_include_directories-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rplidar_ros/cmake" TYPE FILE FILES
    "/home/jetson/JetAutonomy/ros2/build/rplidar_ros/ament_cmake_core/rplidar_rosConfig.cmake"
    "/home/jetson/JetAutonomy/ros2/build/rplidar_ros/ament_cmake_core/rplidar_rosConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rplidar_ros" TYPE FILE FILES "/home/jetson/JetAutonomy/ros2/src/rplidar/package.xml")
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/jetson/JetAutonomy/ros2/build/rplidar_ros/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")