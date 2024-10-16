cmake_minimum_required(VERSION 3.28)
project(aquecimentoCplusplus)

set(CMAKE_CXX_STANDARD 11)

if (WIN32)
    add_definitions(-DOS_WINDOWS)
endif ()

if (APPLE)
    add_definitions(-DOS_MAC)
endif ()

if (UNIX AND NOT APPLE)
    add_definitions(-DOS_LINUX)
endif ()

add_executable(teste main.cpp)