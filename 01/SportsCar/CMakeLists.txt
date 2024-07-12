cmake_minimum_required(VERSION 3.5)

project(SportsCar LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(${CMAKE_SOURCE_DIR})

set(SOURCES
    ${CMAKE_SOURCE_DIR}/main.cpp
    ${CMAKE_SOURCE_DIR}/car.cpp
    ${CMAKE_SOURCE_DIR}/sportscar.cpp
)

add_executable(SportsCar ${SOURCES})
