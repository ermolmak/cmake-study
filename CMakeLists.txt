cmake_minimum_required(VERSION 3.8)

project(cmake-study)

set(CMAKE_CXX_STANDARD 11)

add_subdirectory(A)
include_directories(${PROJECT_SOURCE_DIR})

file(GLOB SRC_FILES B/*.cpp)
add_executable(fact ${SRC_FILES})
target_link_libraries(fact A)
