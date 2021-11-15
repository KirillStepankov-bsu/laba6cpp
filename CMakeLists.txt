cmake_minimum_required(VERSION 3.20)
project(laba6)

set(CMAKE_CXX_STANDARD 17)
add_executable(lab6 main.cpp NormalFraction.cpp NormalFraction.h)
include(FetchContent)
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

add_executable(Google_Test_Run NormalFraction.cpp NormalFraction.h tests.cpp )

target_link_libraries(Google_Test_Run gtest_main)


