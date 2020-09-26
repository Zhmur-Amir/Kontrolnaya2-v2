cmake_minimum_required(VERSION 3.1)

project(ClntN)

include_directories(${PROJECT_SOURCE_DIR})

set (ClntN_SRC  Main.cpp auto.cpp ClntN.cpp)
set (ClntN_VECTOR_HDR class.h)

add_executable (${PROJECT_NAME} ${ClntN_SRC} ${ClntN_HDR})