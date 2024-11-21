cmake_minimum_required(VERSION 3.1...3.22)

# Define the project
project(BlaisePascal)

set(CMAKE_GENERATOR "MinGW Makefiles" CACHE INTERNAL "" FORCE)

message(STATUS ${CMAKE_HOME_DIRECTORY})

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

#compiler configrations

# read file content and display it
file(READ ${SOURCE_FILES} MAIN_TEXT)
message(${MAIN_TEXT})

# Create an executable for the main application
add_executable(${PROJECT_NAME} ${SOURCE_FILES})

#compiler configrations
target_compile_options(${PROJECT_NAME} PRIVATE "-v" "-g")

# Link the "remainder" library to the executable
target_link_libraries(${PROJECT_NAME} 
    PRIVATE remainder
    PRIVATE addition
    PRIVATE division
    PRIVATE multiplication
    PRIVATE power
    PRIVATE subtraction
)