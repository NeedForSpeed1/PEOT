cmake_minimum_required(VERSION 3.25)
project(PEOT)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(PEOT
        Particle.cpp
        Particle.h)
