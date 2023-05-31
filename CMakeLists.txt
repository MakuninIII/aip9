cmake_minimum_required(VERSION 3.10)
project(OperationsProgram)

add_executable(Program "test.cpp")

target_include_directories(Program PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
