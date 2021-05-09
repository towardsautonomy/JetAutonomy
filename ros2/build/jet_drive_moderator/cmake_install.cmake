# Install script for directory: /home/jetson/JetAutonomy/ros2/src/jet_drive_moderator

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/jetson/JetAutonomy/ros2/install/jet_drive_moderator")
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
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/jet_drive_moderator/jet_drive_moderator_node" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/jet_drive_moderator/jet_drive_moderator_node")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/jet_drive_moderator/jet_drive_moderator_node"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/jet_drive_moderator" TYPE EXECUTABLE FILES "/home/jetson/JetAutonomy/ros2/build/jet_drive_moderator/jet_drive_moderator_node")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/jet_drive_moderator/jet_drive_moderator_node" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/jet_drive_moderator/jet_drive_moderator_node")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/jet_drive_moderator/jet_drive_moderator_node"
         OLD_RPATH "/home/jetson/ros2_dashing/install/console_bridge_vendor/lib:/home/jetson/ros2_dashing/install/class_loader/lib:/home/jetson/ros2_dashing/install/rclcpp/lib:/home/jetson/ros2_dashing/install/rcl/lib:/home/jetson/ros2_dashing/install/rcl_interfaces/lib:/home/jetson/ros2_dashing/install/rmw_implementation/lib:/home/jetson/ros2_dashing/install/rmw/lib:/home/jetson/ros2_dashing/install/rcutils/lib:/home/jetson/ros2_dashing/install/rcl_logging_noop/lib:/home/jetson/ros2_dashing/install/rosgraph_msgs/lib:/home/jetson/ros2_dashing/install/rcl_yaml_param_parser/lib:/home/jetson/ros2_dashing/install/builtin_interfaces/lib:/home/jetson/ros2_dashing/install/std_msgs/lib:/home/jetson/ros2_dashing/install/rosidl_typesupport_cpp/lib:/home/jetson/ros2_dashing/install/rosidl_typesupport_c/lib:/home/jetson/ros2_dashing/install/rosidl_typesupport_introspection_cpp/lib:/home/jetson/ros2_dashing/install/rosidl_typesupport_introspection_c/lib:/home/jetson/ros2_dashing/install/rosidl_generator_c/lib:/home/jetson/JetAutonomy/ros2/install/jet_autonomy_msgs/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/jet_drive_moderator/jet_drive_moderator_node")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/jet_drive_moderator/" TYPE DIRECTORY FILES "/home/jetson/JetAutonomy/ros2/src/jet_drive_moderator/launch")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/package_run_dependencies" TYPE FILE FILES "/home/jetson/JetAutonomy/ros2/build/jet_drive_moderator/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/jet_drive_moderator")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/parent_prefix_path" TYPE FILE FILES "/home/jetson/JetAutonomy/ros2/build/jet_drive_moderator/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/jet_drive_moderator")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/jet_drive_moderator/environment" TYPE FILE FILES "/home/jetson/ros2_dashing/install/ament_cmake_core/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/jet_drive_moderator/environment" TYPE FILE FILES "/home/jetson/ros2_dashing/install/ament_cmake_core/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/jet_drive_moderator" TYPE FILE FILES "/home/jetson/JetAutonomy/ros2/build/jet_drive_moderator/ament_cmake_environment_hooks/local_setup.bash")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/jet_drive_moderator" TYPE FILE FILES "/home/jetson/JetAutonomy/ros2/build/jet_drive_moderator/ament_cmake_environment_hooks/local_setup.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/jet_drive_moderator" TYPE FILE FILES "/home/jetson/JetAutonomy/ros2/build/jet_drive_moderator/ament_cmake_environment_hooks/local_setup.zsh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/packages" TYPE FILE FILES "/home/jetson/JetAutonomy/ros2/build/jet_drive_moderator/ament_cmake_index/share/ament_index/resource_index/packages/jet_drive_moderator")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/jet_drive_moderator/cmake" TYPE FILE FILES
    "/home/jetson/JetAutonomy/ros2/build/jet_drive_moderator/ament_cmake_core/jet_drive_moderatorConfig.cmake"
    "/home/jetson/JetAutonomy/ros2/build/jet_drive_moderator/ament_cmake_core/jet_drive_moderatorConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/jet_drive_moderator" TYPE FILE FILES "/home/jetson/JetAutonomy/ros2/src/jet_drive_moderator/package.xml")
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/jetson/JetAutonomy/ros2/build/jet_drive_moderator/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
