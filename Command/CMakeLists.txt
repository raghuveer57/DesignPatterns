# CMakeList.txt : CMake project for MiscProblems, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable (Command "client.cpp" "command.h" "command.cpp" "editor.h" "application.h" "application.cpp" "copy.h" "copy.cpp" "cut.h" "cut.cpp" "commandhistory.h" "paste.h" "undo.h")

# TODO: Add tests and install targets if needed.
