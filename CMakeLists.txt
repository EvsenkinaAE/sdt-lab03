cmake_minimum_required(VERSION 3.6)
project(bulenok)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_EXE_LINKER_FLAGS -static)
set(SOURCE_FILES main.cpp Temperature.сс)
add_executable(bulenok ${SOURCE_FILES})