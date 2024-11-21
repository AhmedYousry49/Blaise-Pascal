cmake_minimum_required(VERSION 3.10)


project(multiplication)


set(CMAKE_GENERATOR "MinGW Makefiles" CACHE INTERNAL "" FORCE)


include_directories(inc)


set(SOURCE_FILES src/multiplication.c)


add_library(multiplication STATIC ${SOURCE_FILES})



