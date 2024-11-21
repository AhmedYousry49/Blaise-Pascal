cmake_minimum_required(VERSION 3.10)


project(power)


set(CMAKE_GENERATOR "MinGW Makefiles" CACHE INTERNAL "" FORCE)


include_directories(inc)


set(SOURCE_FILES src/power.c)


add_library(power STATIC ${SOURCE_FILES})



