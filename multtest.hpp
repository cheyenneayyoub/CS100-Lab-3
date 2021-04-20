#ifndef _MULT_TEST_HPP
#define _MULT_TEST_HPP

#include "gtest/gtest.h"
#include "mult.hpp"

using namespace std:

	TEST(MultTest, MultEval1_1) {
		Op* num1 = new Op(1);
		Op* num2 = new Op(1);
		Mult* Mtest = new Mult(num1, num2);
		EXPECT_EQ(Mtest->evaluate(), 1);
}

	 TEST(MultTest, MultEvalN2_3) {
                Op* num1 = new Op(-2);
                Op* num2 = new Op(3);
                Mult* Mtest = new Mult(num1, num2);
                EXPECT_EQ(Mtest->evaluate(), -6);
}

	TEST(MultTest, MultEval3_50) {
                Op* num1 = new Op(3);
                Op* num2 = new Op(50);
                Mult* Mtest = new Mult(num1, num2);
                EXPECT_EQ(Mtest->stringify(), "3 * 50");
}

	TEST(MultTest, MultEvalZ_10) {
                Op* num1 = new Op(0);
                Op* num2 = new Op(10);
                Mult* Mtest = new Mult(num1, num2);
                EXPECT_EQ(Mtest->evaluate(), 0);
}

