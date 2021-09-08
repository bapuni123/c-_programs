cmake_minimum_required(VERSION 3.20)
project(c__Programs)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(c__Programs
        choprt.cpp
        flow013.cpp
        hello.cpp
        leftro.cpp
        remiss.cpp
        sortpairsum.cpp
        threeq.cpp)
