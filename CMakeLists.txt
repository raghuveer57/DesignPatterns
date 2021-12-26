# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.8)
add_compile_options(-std=c++11)

set(CMAKE_BUILD_TYPE Debug)

project ("DesignPatterns")

# Include sub-projects.
add_subdirectory ("FactoryMethod")
add_subdirectory ("AbstractFactory")
add_subdirectory ("Builder")
add_subdirectory("Prototype")
add_subdirectory("Singleton")
add_subdirectory("Adapter")
add_subdirectory("Bridge")
