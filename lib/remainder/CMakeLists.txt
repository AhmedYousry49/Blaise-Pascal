cmake_minimum_required(VERSION 3.10)


project(remainder)


set(CMAKE_GENERATOR "MinGW Makefiles" CACHE INTERNAL "" FORCE)


include_directories(include)


set(SOURCE_FILES src/remainder.c)


add_library(remainder STATIC ${SOURCE_FILES})
