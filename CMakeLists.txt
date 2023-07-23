cmake_minimum_required(VERSION 3.0.0)
project(signal_generator VERSION 0.1.0)

include(CTest)
enable_testing()

add_definitions(
    "-Wall"
    "-Wextra"
    "-Werror"
    "-Wfatal-errors"
    "--std=c++11"
)

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin/lib/share)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin/lib/archive)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin/)

include_directories(${PROJECT_SOURCE_DIR}/code/core/public)
add_subdirectory(code)
add_subdirectory(case)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
