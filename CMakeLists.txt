cmake_minimum_required(VERSION 3.12)
project(RedwoodOctomap)

find_package(Eigen3 REQUIRED)

set(CMAKE_CXX_STANDARD 17)

set(SOURCES
    src/Main.cpp
)

include_directories(
    include
    ${EIGEN3_INCLUDE_DIR} 
)

add_executable(RedwoodOctomap ${SOURCES})
