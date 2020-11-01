#ifndef __ADD_TEST_HPP__
#define __ADD_TEST_HPP__

#include "gtest/gtest.h"
#include "op.hpp"
#include "add.hpp"

TEST(addTest, addEvaluateThreeSeven) {
    Base* left = new Op(3);
    Base* right = new Op(7);
    Add* test = new Add(left,right);
    EXPECT_EQ(test->evaluate(), 10.0);
}

#endif //__ADD_TEST_HPP__
