cmake_minimum_required(VERSION 3.5)

# Define the library
project(remainder)

# Include the header files
include_directories(include)

# Add source files for the library
set(SOURCE_FILES src/remainder.c)

# Create a static library
add_library(remainder STATIC ${SOURCE_FILES})