cmake_minimum_required(VERSION 3.10)


project(subtraction)


set(CMAKE_GENERATOR "MinGW Makefiles" CACHE INTERNAL "" FORCE)


include_directories(include)


set(SOURCE_FILES src/subtraction.c)


add_library(subtraction STATIC ${SOURCE_FILES})



