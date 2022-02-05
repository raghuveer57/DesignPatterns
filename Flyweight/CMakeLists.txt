# CMakeList.txt : CMake project for MiscProblems, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable (Flyweight "client.cpp" "treetype.h" "treefactory.h" "tree.h")

# TODO: Add tests and install targets if needed.
