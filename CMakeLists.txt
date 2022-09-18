cmake_minimum_required(VERSION 3.20)

project(soda)

set(SOURCE_FILES
    src/strings.cpp
    src/strings.hpp
)

add_library(soda ${SOURCE_FILES})

