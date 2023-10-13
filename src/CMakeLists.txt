
set(SOURCE_FILE main.cpp)
set(EXECUTABLE_NAME ${PROJECT_NAME}_exec)

add_executable(${EXECUTABLE_NAME} ${SOURCE_FILE})

if (GFLAGS_USE_TARGET_NAMESPACE)
    if (TARGET gflags::gflags)
        target_link_libraries(${EXECUTABLE_NAME} gflags::gflags)
    else ()
        message(FATAL_ERROR "gflags::gflags target not defined")
    endif ()
else ()
    if (TARGET gflags)
        target_link_libraries(${EXECUTABLE_NAME} gflags)
    else ()
        message(FATAL_ERROR "gflags target not defined")
    endif ()
endif ()

target_link_libraries(${EXECUTABLE_NAME} spdlog::spdlog $<$<BOOL:${MINGW}>:ws2_32>)
