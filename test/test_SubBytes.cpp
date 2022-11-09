#include "AES.hpp"
#include "gtest/gtest.h"
#include <fstream>

using namespace std;

TEST(SubBytes, test1)
{
    ifstream infile("test_SubBytes_test1.hex");
    char input[16];
    infile.read(input, 16);
    char expected[16];
    infile.read(expected,16);
    //SubBytes(input);
    ASSERT_EQ(input, expected);
}