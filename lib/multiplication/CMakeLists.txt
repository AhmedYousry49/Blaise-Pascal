cmake_minimum_required(VERSION 3.10)

project(multiplication)

set(CMAKE_GENERATOR "MinGW Makefiles" CACHE INTERNAL "" FORCE)

set(SOURCE_FILES src/multiplication.c)

add_library(${PROJECT_NAME} STATIC ${SOURCE_FILES})

target_include_directories(${PROJECT_NAME} PUBLIC  inc)

target_include_directories(${PROJECT_NAME} PUBLIC  ${CONFIGRATION_FILES})

