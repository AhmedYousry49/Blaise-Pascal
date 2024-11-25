cmake_minimum_required(VERSION 3.10)

project(power)

#set(CMAKE_GENERATOR "MinGW Makefiles" CACHE INTERNAL "" FORCE)
set(SOURCE_FILES src/power.c)
set(INCLUDE_DIR ${CMAKE_SOURCE_DIR}/inc)

#add_library(${PROJECT_NAME} STATIC ${SOURCE_FILES})
add_library(${PROJECT_NAME} src/power.c)

# Include the inc directory and configuration files
target_include_directories(${PROJECT_NAME} PUBLIC inc)
target_include_directories(${PROJECT_NAME} PUBLIC ${INCLUDE_DIR})
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_BINARY_DIR})  # Include the generated config.h file

# Use the configFeature macro to configure this library
#configFeature(${PROJECT_NAME} "POW")
#configFeature(${PROJECT_NAME} "${POWER_FEATURES}")