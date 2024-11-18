cmake_minimum_required(VERSION 3.10)


project(division)


set(CMAKE_GENERATOR "Ninja" CACHE INTERNAL "" FORCE)


include_directories(inc)


set(SOURCE_FILES src/division.c)


add_library(division STATIC ${SOURCE_FILES})



