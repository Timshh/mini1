cmake_minimum_required (VERSION 3.11)

project(vec3lib LANGUAGES CXX)

add_library(vec3lib SHARED
    code/vec3.cpp
)

target_compile_features(vec3lib PUBLIC cxx_std_20)

target_include_directories(vec3lib PUBLIC
    code
)