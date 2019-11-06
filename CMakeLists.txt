cmake_minimum_required(VERSION 3.15)
project(LeetCod)

set(CMAKE_CXX_STANDARD 14)
set(Boost_USE_STATIC_LIBS OFF)
set(Boost_USE_MULTITHREADED ON)

find_package(Boost REQUIRED)
#set(GTEST ../Lib/googletest)

include_directories(${Boost_INCLUDE_DIRS})

add_subdirectory(Google_tests)