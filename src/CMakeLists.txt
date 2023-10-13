
set(EXECUTABLE_NAME ${PROJECT_NAME}_exec)

set(SOURCE_FILE main.cpp
                )

find_package(Threads REQUIRED)

add_executable(${EXECUTABLE_NAME} ${SOURCE_FILE})


target_link_libraries(${EXECUTABLE_NAME} gflags::gflags fmt::fmt Threads::Threads)

target_link_libraries(${EXECUTABLE_NAME} spdlog::spdlog $<$<BOOL:${MINGW}>:ws2_32>)


