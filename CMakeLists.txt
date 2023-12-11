cmake_minimum_required(VERSION 3.0.0...3.5.0)
project(Scarlett)

#Safety measure for imbeciles.
if(PROJECT_SOURCE_DIR STREQUAL PROJECT_BINARY_DIR)
  message(FATAL_ERROR "In-source builds not allowed. Please make a new directory (called a build directory) and run CMake from there.\n")
endif()

#Everything to do with building the library.
set(SCARLETT_SOURCE_DIRECTORY "${CMAKE_CURRENT_LIST_DIR}/Source")
set(SCARLETT_INCLUDE_DIRECTORY "${SCARLETT_SOURCE_DIRECTORY}/Include")
set(SCARLETT_BUILD_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}/Engine")

#Scrictly for dependencies...
set(SCARLETT_DEPENDENCIES_DIRECTORY "${CMAKE_CURRENT_LIST_DIR}/External")
set(SCARLETT_DEPENDENCIES_BUILD_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}/Dependencies")

#
add_subdirectory(${SCARLETT_SOURCE_DIRECTORY} ${SCARLETT_BUILD_DIRECTORY})

enable_testing()
