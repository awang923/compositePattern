
#ifndef __POW_TEST_HPP__
#define __POW_TEST_HPP__

#include "gtest/gtest.h"
#include "op.hpp"
#include "pow.hpp"

TEST(PowTest, PowEvaluateNonZero) {
    Op* test1 = new Op(2);
    Pow* insideTest = new Pow(test1,test1);
    Pow* testend = new Pow(test1,insideTest);
    EXPECT_EQ(testend->evaluate(), 16);
}

#endif //__POW_TEST_HPP__


