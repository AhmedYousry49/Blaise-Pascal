cmake_minimum_required(VERSION 3.10)

project(remainder)

#set(CMAKE_GENERATOR "MinGW Makefiles" CACHE INTERNAL "" FORCE)
#set(CONFIGRATION_FILES ${CMAKE_SOURCE_DIR}/inc)
set(SOURCE_FILES src/remainder.c)
set(INCLUDE_DIR ${CMAKE_SOURCE_DIR}/inc)

#add_library(${PROJECT_NAME} STATIC ${SOURCE_FILES})
add_library(${PROJECT_NAME} src/remainder.c)

# Include the inc directory and configuration files
target_include_directories(${PROJECT_NAME} PUBLIC inc)
target_include_directories(${PROJECT_NAME} PUBLIC ${INCLUDE_DIR})
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_BINARY_DIR})  # Include the generated config.h file

# Use the configFeature macro to configure this library
#configFeature(${PROJECT_NAME} "REM")
#configFeature(${PROJECT_NAME} "${REMAINDER_FEATURES}")