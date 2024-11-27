cmake_minimum_required(VERSION 3.10)

project(division)

#set(CMAKE_GENERATOR "MinGW Makefiles" CACHE INTERNAL "" FORCE)
set(SOURCE_FILES src/division.c)
set(INCLUDE_DIR ${CMAKE_SOURCE_DIR}/inc)

#add_library(${PROJECT_NAME} STATIC ${SOURCE_FILES})
add_library(${PROJECT_NAME} src/division.c)
# Include the inc directory and configuration files
target_include_directories(${PROJECT_NAME} PUBLIC inc)
target_include_directories(${PROJECT_NAME} PUBLIC ${INCLUDE_DIR})
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_BINARY_DIR})  # Include the generated config.h file

