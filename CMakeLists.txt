cmake_minimum_required(VERSION 3.1...3.22)

# Define the project
project(BlaisePascal)
message(${CMAKE_SYSTEM_NAME})

if(${CMAKE_SYSTEM_NAME} STREQUAL "Windows")    
    message("You are on Windows")
    set(CMAKE_GENERATOR "MinGW Makefiles" CACHE INTERNAL "" FORCE)
elseif(${CMAKE_SYSTEM_NAME} STREQUAL "Linux")
    message("You are on Linux")
    set(CMAKE_GENERATOR "Unix Makefiles" CACHE INTERNAL "" FORCE)
endif()

# Include the custom script for generating configuration
include(${CMAKE_SOURCE_DIR}/CmakeScript.cmake)

# Add subdirectories for the libraries
add_subdirectory(lib/remainder)
add_subdirectory(lib/addition)
add_subdirectory(lib/divsion)  # Make sure this directory exists
add_subdirectory(lib/multiplication)
add_subdirectory(lib/power)
add_subdirectory(lib/subtraction)

# Pass the FEATURES option to the configFeature macro
#message(${FEATURES})
if(DEFINED FEATURES)
      configFeature(${FEATURES})
else()
    message(STATUS "No features specified. Building with all features enabled.")
    configFeature("ADD SUB MUL DIV POW REM") # Default: All features
endif()
#message(${FEATURES})
# Add the main source file
set(SOURCE_FILES src/main.c)

# Create an executable for the main application
add_executable(${PROJECT_NAME} ${SOURCE_FILES})

# Link the libraries
target_link_libraries(${PROJECT_NAME} 
    PRIVATE remainder
    PRIVATE addition
    PRIVATE division
    PRIVATE multiplication
    PRIVATE power
    PRIVATE subtraction
)
