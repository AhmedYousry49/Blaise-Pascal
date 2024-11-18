cmake_minimum_required(VERSION 3.5)

# Define the project
project(BlaisePascal)

set(CMAKE_GENERATOR "Ninja" CACHE INTERNAL "" FORCE)

# Add subdirectory for the "remainder" library
add_subdirectory(lib/remainder)
add_subdirectory(lib/addition)
add_subdirectory(lib/divsion)
add_subdirectory(lib/multiplication)
add_subdirectory(lib/power)
add_subdirectory(lib/subtraction)

# Include the library headers
include_directories(
    lib/remainder/include
    lib/addition/include
    lib/divsion/inc
    lib/multiplication/inc
    lib/power/inc
    lib/subtraction/include
)

# Add the main source file
set(SOURCE_FILES src/main.c)

# Create an executable for the main application
add_executable(main_app ${SOURCE_FILES})

# Link the "remainder" library to the executable
target_link_libraries(main_app 
    remainder
    addition
    division
    multiplication
    power
    subtraction
)

