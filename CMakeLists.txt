# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.8)
add_compile_options(-std=c++17)

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
add_subdirectory("Composite")
add_subdirectory("Decorator")
add_subdirectory("Facade")
add_subdirectory("Flyweight")
add_subdirectory("Proxy")
add_subdirectory("COR")
add_subdirectory("Command")
add_subdirectory("Iterator")
add_subdirectory("Mediator")
add_subdirectory("Memento")
add_subdirectory("Observer")
add_subdirectory("State")



