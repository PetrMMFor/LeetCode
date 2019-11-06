#include <gtest/gtest.h>

#include "../Progects/RomanToInt/RomanToInt.h"

class RomanToIntTests : public ::testing::Test{};

TEST(RomanToIntTests, toX){
    int result = romanToInt("III");
    EXPECT_EQ(3, result);
}

TEST(RomanToIntTests, afterX){
    int result = romanToInt("XIII");
    EXPECT_EQ(13, result);

    result = romanToInt("XIV");
    EXPECT_EQ(14, result);

    result = romanToInt("XVIII");
    EXPECT_EQ(18, result);

    result = romanToInt("XIX");
    EXPECT_EQ(19, result);
}

TEST(RomanToIntTests, toL){
    int result = romanToInt("DCXXI");
    EXPECT_EQ(621, result);
}
