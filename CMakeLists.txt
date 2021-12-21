# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.8)
add_compile_options(-std=c++11)

project ("DesignPatterns")

# Include sub-projects.
add_subdirectory ("FactoryMethod")
add_subdirectory ("AbstractFactory")
add_subdirectory ("Builder")
add_subdirectory("Prototype")
