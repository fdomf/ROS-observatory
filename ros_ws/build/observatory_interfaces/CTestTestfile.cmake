# CMake generated Testfile for 
# Source directory: /home/francesc/Escritorio/ROS-observatory/ros_ws/src/observatory_interfaces
# Build directory: /home/francesc/Escritorio/ROS-observatory/ros_ws/build/observatory_interfaces
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(lint_cmake "/usr/bin/python3" "-u" "/opt/ros/dashing/share/ament_cmake_test/cmake/run_test.py" "/home/francesc/Escritorio/ROS-observatory/ros_ws/build/observatory_interfaces/test_results/observatory_interfaces/lint_cmake.xunit.xml" "--package-name" "observatory_interfaces" "--output-file" "/home/francesc/Escritorio/ROS-observatory/ros_ws/build/observatory_interfaces/ament_lint_cmake/lint_cmake.txt" "--command" "/opt/ros/dashing/bin/ament_lint_cmake" "--xunit-file" "/home/francesc/Escritorio/ROS-observatory/ros_ws/build/observatory_interfaces/test_results/observatory_interfaces/lint_cmake.xunit.xml")
set_tests_properties(lint_cmake PROPERTIES  LABELS "lint_cmake;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/francesc/Escritorio/ROS-observatory/ros_ws/src/observatory_interfaces")
add_test(xmllint "/usr/bin/python3" "-u" "/opt/ros/dashing/share/ament_cmake_test/cmake/run_test.py" "/home/francesc/Escritorio/ROS-observatory/ros_ws/build/observatory_interfaces/test_results/observatory_interfaces/xmllint.xunit.xml" "--package-name" "observatory_interfaces" "--output-file" "/home/francesc/Escritorio/ROS-observatory/ros_ws/build/observatory_interfaces/ament_xmllint/xmllint.txt" "--command" "/opt/ros/dashing/bin/ament_xmllint" "--xunit-file" "/home/francesc/Escritorio/ROS-observatory/ros_ws/build/observatory_interfaces/test_results/observatory_interfaces/xmllint.xunit.xml")
set_tests_properties(xmllint PROPERTIES  LABELS "xmllint;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/francesc/Escritorio/ROS-observatory/ros_ws/src/observatory_interfaces")
subdirs("observatory_interfaces__py")
