execute_process(COMMAND "/home/miki/catkin_ws/build/eufs_launcher/catkin_generated/python_distutils_install.sh" RESULT_VARIABLE res)

if(NOT res EQUAL 0)
  message(FATAL_ERROR "execute_process(/home/miki/catkin_ws/build/eufs_launcher/catkin_generated/python_distutils_install.sh) returned error code ")
endif()