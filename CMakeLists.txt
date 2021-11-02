cmake_minimum_required(VERSION 3.14.7)

project(hello CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# find_package(OpenMP REQUIRED)

set(TARGET_NAME "hello")

add_executable(${TARGET_NAME}
    src/main.cpp
)

target_link_libraries(${TARGET_NAME}
    -static -static-libgcc -static-libstdc++
)

if(CMAKE_BUILD_TYPE STREQUAL "Release")
    target_compile_options(${TARGET_NAME} PRIVATE -Ofast)
endif()
