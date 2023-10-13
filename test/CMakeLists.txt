cmake_minimum_required(VERSION 3.11)

add_library(GTest::GTest INTERFACE IMPORTED)
target_link_libraries(GTest::GTest INTERFACE gtest_main)

set(TEST_SOURCE_FILE main.cpp)

set(TEST_NAME ${PROJECT_NAME}_tests)

add_executable(${TEST_NAME} ${TEST_SOURCE_FILE})

target_link_libraries(${TEST_NAME} GTest::GTest)