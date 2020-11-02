#ifndef __SUB_TEST_HPP__
#define __SUB_TEST_HPP__

#include "gtest/gtest.h"
#include "op.hpp"
#include "sub.hpp"

TEST(SubTest, SubEvaluateNonZero) {
    Op* test1 = new Op(8);
    Op* test2 = new Op(7);
    Sub* insideTest = new Sub(test1,test2);
    Sub* testend = new Sub(test2,insideTest);
    EXPECT_EQ(testend->evaluate(), 6);
}

#endif //__SUB_TEST_HPP__

