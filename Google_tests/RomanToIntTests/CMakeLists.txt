project(RomanToIntTests)

add_executable(Google_Tests_run Test.cpp main.cpp
        ../../Progects/RomanToInt/RomanToInt.h
        ../../Progects/RomanToInt/RomanToInt.cpp)

target_link_libraries(Google_Tests_run gtest gtest_main)