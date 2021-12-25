# CMakeList.txt : CMake project for MiscProblems, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable (Adapter "application.cpp" "pegadapter.h" "roundhole.h" "pegs.h")

# TODO: Add tests and install targets if needed.
