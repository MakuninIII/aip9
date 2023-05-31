cmake_minimum_required(VERSION 3.10)
project(OperationsProgram)

add_executable(Program "test.cpp")
add_library(Lib operations.cpp operations2.cpp)

target_link_libraries(Program PUBLIC Lib)
target_include_directories(Program PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
