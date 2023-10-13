cmake_minimum_required(VERSION 3.15)
cmake_policy(SET CMP0048 NEW)

project(cpp_project_template
        LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++2a -O3")

enable_testing()
set(CMAKE_INSTALL_PREFIX ${PROJECT_SOURCE_DIR})

# third party package
add_subdirectory(thirdparty/gflags)
add_subdirectory(thirdparty/spdlog)
add_subdirectory(thirdparty/googletest)

include_directories(thirdparty/googletest/googletest/include)

# source directory
add_subdirectory(src)
# add gtest directory
add_subdirectory(test)


