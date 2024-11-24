cmake_minimum_required(VERSION 3.1...3.22)

# Define the project
project(BlaisePascal)

set(CMAKE_GENERATOR "MinGW Makefiles" CACHE INTERNAL "" FORCE)

# Include the custom script for generating configuration
include(${CMAKE_SOURCE_DIR}/CmakeScript.cmake)

# Add subdirectories for the libraries
add_subdirectory(lib/remainder)
add_subdirectory(lib/addition)
add_subdirectory(lib/divsion)  # Make sure this directory exists
add_subdirectory(lib/multiplication)
add_subdirectory(lib/power)
add_subdirectory(lib/subtraction)

# Split the FEATURES argument passed from the command line into a list
#if (DEFINED FEATURES)
#    string(REPLACE "," ";" FEATURE_LIST ${FEATURES})

    # Configure only the requested features
#    foreach(FEATURE ${FEATURE_LIST})
#        if (FEATURE STREQUAL "MUL")
#            configFeature("multiplication" "MUL")
#        elseif (FEATURE STREQUAL "ADD")
#        configFeature("addition" "ADD")
#        elseif (FEATURE STREQUAL "SUB")
#            configFeature("subtraction" "SUB")
#        elseif (FEATURE STREQUAL "DIV")
#            configFeature("division" "DIV")
#        elseif (FEATURE STREQUAL "POW")
#            configFeature("power" "POW")
#        elseif (FEATURE STREQUAL "REM")
#            configFeature("remainder" "REM")
#        endif()
#    endforeach()
#endif()

# Include the generated config.h file (from config.h generation script)
include_directories(
    lib/addition/inc
    lib/divsion/inc
    lib/multiplication/inc
    lib/power/inc
    lib/remainder/inc
    lib/subtraction/inc
    ${CMAKE_BINARY_DIR}  # Include the generated config.h
)

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
