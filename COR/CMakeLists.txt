# CMakeList.txt : CMake project for MiscProblems, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable (COR "client.cpp" "componenttooltip.h" "button.h" "component.h" "container.h" "dialog.h" "panel.h")

# TODO: Add tests and install targets if needed.
