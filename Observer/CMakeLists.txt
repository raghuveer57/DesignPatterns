﻿# CMakeList.txt : CMake project for MiscProblems, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable (Observer "client.cpp" "eventmanager.h" "eventlisteners.h" )

# TODO: Add tests and install targets if needed.
 