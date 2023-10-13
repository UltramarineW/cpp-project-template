//
// Created by wujiayang on 2023/10/13.
//
#include "gflags/gflags.h"
#include "spdlog/spdlog.h"
#include "spdlog/sinks/basic_file_sink.h"
#include <fmt/core.h>


int main(int argc, char*argv[]) {
    // initialize gflags
    gflags::ParseCommandLineFlags(&argc, &argv, true);
    // set spdlog display level (trace debug info warn err critical off)
    // spdlog::level::info for not display trace and debug
    spdlog::set_level(spdlog::level::info);

    int a = 0;
    spdlog::info("Hello world for {}", a);
    return 0;
}
