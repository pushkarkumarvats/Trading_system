cmake_minimum_required(VERSION 3.10)
project(trading_system)
set(CMAKE_CXX_STANDARD 20)
file(GLOB SOURCES "src/*.cpp")
add_executable(trading-system ${SOURCES})
include_directories(${CMAKE_SOURCE_DIR}/src)  # or wherever httplib.h is
