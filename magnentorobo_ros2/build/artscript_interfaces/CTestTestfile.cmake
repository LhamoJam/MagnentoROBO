# CMake generated Testfile for 
# Source directory: /home/artscript/Desktop/WorkSpace/MagnentoROBO/magnentorobo_ros2/src/artscript_interfaces
# Build directory: /home/artscript/Desktop/WorkSpace/MagnentoROBO/magnentorobo_ros2/build/artscript_interfaces
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(copyright "/usr/bin/python3" "-u" "/opt/ros/foxy/share/ament_cmake_test/cmake/run_test.py" "/home/artscript/Desktop/WorkSpace/MagnentoROBO/magnentorobo_ros2/build/artscript_interfaces/test_results/artscript_interfaces/copyright.xunit.xml" "--package-name" "artscript_interfaces" "--output-file" "/home/artscript/Desktop/WorkSpace/MagnentoROBO/magnentorobo_ros2/build/artscript_interfaces/ament_copyright/copyright.txt" "--command" "/opt/ros/foxy/bin/ament_copyright" "--xunit-file" "/home/artscript/Desktop/WorkSpace/MagnentoROBO/magnentorobo_ros2/build/artscript_interfaces/test_results/artscript_interfaces/copyright.xunit.xml")
set_tests_properties(copyright PROPERTIES  LABELS "copyright;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/artscript/Desktop/WorkSpace/MagnentoROBO/magnentorobo_ros2/src/artscript_interfaces" _BACKTRACE_TRIPLES "/opt/ros/foxy/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/opt/ros/foxy/share/ament_cmake_copyright/cmake/ament_copyright.cmake;41;ament_add_test;/opt/ros/foxy/share/ament_cmake_copyright/cmake/ament_cmake_copyright_lint_hook.cmake;18;ament_copyright;/opt/ros/foxy/share/ament_cmake_copyright/cmake/ament_cmake_copyright_lint_hook.cmake;0;;/opt/ros/foxy/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/foxy/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/foxy/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/foxy/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/foxy/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/artscript/Desktop/WorkSpace/MagnentoROBO/magnentorobo_ros2/src/artscript_interfaces/CMakeLists.txt;41;ament_package;/home/artscript/Desktop/WorkSpace/MagnentoROBO/magnentorobo_ros2/src/artscript_interfaces/CMakeLists.txt;0;")
add_test(lint_cmake "/usr/bin/python3" "-u" "/opt/ros/foxy/share/ament_cmake_test/cmake/run_test.py" "/home/artscript/Desktop/WorkSpace/MagnentoROBO/magnentorobo_ros2/build/artscript_interfaces/test_results/artscript_interfaces/lint_cmake.xunit.xml" "--package-name" "artscript_interfaces" "--output-file" "/home/artscript/Desktop/WorkSpace/MagnentoROBO/magnentorobo_ros2/build/artscript_interfaces/ament_lint_cmake/lint_cmake.txt" "--command" "/opt/ros/foxy/bin/ament_lint_cmake" "--xunit-file" "/home/artscript/Desktop/WorkSpace/MagnentoROBO/magnentorobo_ros2/build/artscript_interfaces/test_results/artscript_interfaces/lint_cmake.xunit.xml")
set_tests_properties(lint_cmake PROPERTIES  LABELS "lint_cmake;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/artscript/Desktop/WorkSpace/MagnentoROBO/magnentorobo_ros2/src/artscript_interfaces" _BACKTRACE_TRIPLES "/opt/ros/foxy/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/opt/ros/foxy/share/ament_cmake_lint_cmake/cmake/ament_lint_cmake.cmake;41;ament_add_test;/opt/ros/foxy/share/ament_cmake_lint_cmake/cmake/ament_cmake_lint_cmake_lint_hook.cmake;21;ament_lint_cmake;/opt/ros/foxy/share/ament_cmake_lint_cmake/cmake/ament_cmake_lint_cmake_lint_hook.cmake;0;;/opt/ros/foxy/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/foxy/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/foxy/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/foxy/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/foxy/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/artscript/Desktop/WorkSpace/MagnentoROBO/magnentorobo_ros2/src/artscript_interfaces/CMakeLists.txt;41;ament_package;/home/artscript/Desktop/WorkSpace/MagnentoROBO/magnentorobo_ros2/src/artscript_interfaces/CMakeLists.txt;0;")
add_test(xmllint "/usr/bin/python3" "-u" "/opt/ros/foxy/share/ament_cmake_test/cmake/run_test.py" "/home/artscript/Desktop/WorkSpace/MagnentoROBO/magnentorobo_ros2/build/artscript_interfaces/test_results/artscript_interfaces/xmllint.xunit.xml" "--package-name" "artscript_interfaces" "--output-file" "/home/artscript/Desktop/WorkSpace/MagnentoROBO/magnentorobo_ros2/build/artscript_interfaces/ament_xmllint/xmllint.txt" "--command" "/opt/ros/foxy/bin/ament_xmllint" "--xunit-file" "/home/artscript/Desktop/WorkSpace/MagnentoROBO/magnentorobo_ros2/build/artscript_interfaces/test_results/artscript_interfaces/xmllint.xunit.xml")
set_tests_properties(xmllint PROPERTIES  LABELS "xmllint;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/artscript/Desktop/WorkSpace/MagnentoROBO/magnentorobo_ros2/src/artscript_interfaces" _BACKTRACE_TRIPLES "/opt/ros/foxy/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/opt/ros/foxy/share/ament_cmake_xmllint/cmake/ament_xmllint.cmake;50;ament_add_test;/opt/ros/foxy/share/ament_cmake_xmllint/cmake/ament_cmake_xmllint_lint_hook.cmake;18;ament_xmllint;/opt/ros/foxy/share/ament_cmake_xmllint/cmake/ament_cmake_xmllint_lint_hook.cmake;0;;/opt/ros/foxy/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/foxy/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/foxy/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/foxy/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/foxy/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/artscript/Desktop/WorkSpace/MagnentoROBO/magnentorobo_ros2/src/artscript_interfaces/CMakeLists.txt;41;ament_package;/home/artscript/Desktop/WorkSpace/MagnentoROBO/magnentorobo_ros2/src/artscript_interfaces/CMakeLists.txt;0;")
subdirs("artscript_interfaces__py")
