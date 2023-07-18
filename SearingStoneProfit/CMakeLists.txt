cmake_minimum_required(VERSION 3.16)
project(SearingStoneProfit)

set(CMAKE_TOOLCHAIN_FILE [C:\Users\elopi\Desktop\vcpkg]/scripts/buildsystems/vcpkg.cmake)

add_executable(SearingStoneProfit.exe your-source-files.cpp)

find_package(CURL REQUIRED)
target_link_libraries(SearingStoneProfit.exe PRIVATE [curl])
target_link_libraries(SearingStoneProfit.exe PRIVATE [libcurl])