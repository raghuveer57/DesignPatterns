# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.8)

project ("MiscProblems")

# Include sub-projects.
add_subdirectory ("DeathBirth")
add_subdirectory ("FisherYatesShuffle")
add_subdirectory ("GCD")
add_subdirectory ("TicTac")