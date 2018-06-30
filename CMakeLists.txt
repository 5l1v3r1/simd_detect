cmake_minimum_required(VERSION 3.4)

project(simd_detect CXX)

include_directories(include)

add_subdirectory(src/x86)

target_include_directories(simd_detect PUBLIC src)

if(CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME)
    add_executable(simd_detect_main src/main.cxx)
    target_link_libraries(simd_detect_main PUBLIC simd_detect)
endif()
