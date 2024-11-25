cmake_minimum_required(VERSION 3.10)


project(subtraction)

#include("${CMAKE_CURRENT_SOURCE_DIR}/../../CmakeScript.cmake")
#set(CMAKE_GENERATOR "MinGW Makefiles" CACHE INTERNAL "" FORCE)
set(SOURCE_FILES src/subtraction.c)
set(INCLUDE_DIR ${CMAKE_SOURCE_DIR}/inc)


#add_library(${PROJECT_NAME} STATIC ${SOURCE_FILES})
add_library(${PROJECT_NAME} src/subtraction.c)

# Include the inc directory and configuration files
target_include_directories(${PROJECT_NAME} PUBLIC inc)
target_include_directories(${PROJECT_NAME} PUBLIC ${INCLUDE_DIR})
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_BINARY_DIR})  # Include the generated config.h file

# Use the configFeature macro to configure this library
#configFeature(${PROJECT_NAME} "SUB")

#configFeature(${PROJECT_NAME} "${SUBTRACTION_FEATURES}")
