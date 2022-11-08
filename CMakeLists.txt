cmake_minimum_required(VERSION 3.0)

project(SOLDIER)

#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_GLAGS} -Wall")

set(CMAKE_BUILD_TYPE Debug)

include_directories(include)

# ${CMAKE_SOURCE_DIR}
add_executable(soldier_cmake main.cpp src/Gun.cpp src/Soldier.cpp)
