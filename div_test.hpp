#ifndef __DIV_TEST_HPP__
#define __DIV_TEST_HPP__

#include "gtest/gtest.h"
#include "op.hpp"
#include "div.hpp"

TEST(DivTest, DivEvaluateNonZero) {
    Op* test1 = new Op(8);
    Op* test2 = new Op(2);
    Div* insideTest = new Div(test1,test2);
    Div* testend = new Div(test1,insideTest);
    EXPECT_EQ(testend->evaluate(),2);
}

#endif //__DIV_TEST_HPP__


