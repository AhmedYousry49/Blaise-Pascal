cmake_minimum_required(VERSION 3.10)


project(addition)


set(CMAKE_GENERATOR "Ninja" CACHE INTERNAL "" FORCE)


include_directories(include)


set(SOURCE_FILES src/addition.c)


add_library(addition STATIC ${SOURCE_FILES})



