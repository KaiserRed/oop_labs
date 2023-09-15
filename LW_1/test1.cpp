#include <gtest/gtest.h>
#include "time.hpp"

TEST(test_01, basic_test_set)
{
    std::string s = "8:30 am";
    ASSERT_TRUE(time(s)== "0830");
}

TEST(test_02, basic_test_set)
{
    std::string s = "8:30 pm";
    ASSERT_TRUE(time(s)== "2030");
}

TEST(test_03, basic_test_set)
{
    std::string s = "12:49 pm";
    ASSERT_TRUE(time(s)== "0049");
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}