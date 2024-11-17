cmake_minimum_required(VERSION 3.5)

# Define the project
project(BlaisePascal)

# Add subdirectory for the "remainder" library
add_subdirectory(lib/remainder)

# Include the library headers
include_directories(lib/remainder/include)

# Add the main source file
set(SOURCE_FILES src/main.c)

# Create an executable for the main application
add_executable(main_app ${SOURCE_FILES})

# Link the "remainder" library to the executable
target_link_libraries(main_app remainder)