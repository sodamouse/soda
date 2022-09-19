cmake_minimum_required(VERSION 3.20)

project(soda)

add_library(project-standards INTERFACE)
target_compile_features(project-standards INTERFACE cxx_std_20)

set(SOURCE_FILES
    src/strings.cpp
    src/strings.hpp
    src/seqs.hpp
)

add_library(soda ${SOURCE_FILES})
target_link_libraries(soda project-standards)
