cmake_minimum_required(VERSION 3.10)
project(TuringMachine VERSION 0.1.0 LANGUAGES CXX)

include(CTest)
enable_testing()

# Automatically include all .cpp files in the project directory
file(GLOB SOURCES "*.cpp")

add_executable(TuringMachine ${SOURCES})

set_property(TARGET TuringMachine PROPERTY CXX_STANDARD 20)