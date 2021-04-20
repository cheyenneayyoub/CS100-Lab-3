
#ifndef _DIV_TEST_HPP
#define _DIV_TEST_HPP

#include "gtest/gtest.h"
#include "div.hpp"

using namespace std;

	TEST(DivTest, DivEval1_1) {
		Op* num1 = new Op(1);
		Op* num2 = new Op(1);
		Div* Dtest = new Div(num1, num2);
		EXPECT_EQ(Dtest->evaluate(), 1);
}

	 TEST(DivTest, DivEvalN18_3) {
                Op* num1 = new Op(-18);
                Op* num2 = new Op(3);
                Div* Dtest = new Div(num1, num2);
                EXPECT_EQ(Dtest->evaluate(),-6 );
}

	TEST(DivTest, DivEval30_3) {
                Op* num1 = new Op(30);
                Op* num2 = new Op(3);
                Div* Dtest = new Div(num1, num2);
                EXPECT_EQ(Dtest->stringify(), "(30.000000/3.000000)");
}

	TEST(DivTest, DivEval100_10) {
                Op* num1 = new Op(100);
                Op* num2 = new Op(10);
                Div* Dtest = new Div(num1, num2);
                EXPECT_EQ(Dtest->evaluate(), 10);
}


#endif 

