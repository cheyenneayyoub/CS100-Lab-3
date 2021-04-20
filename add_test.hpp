#include "gtest/gtest.h"
#include "add.hpp"

TEST(AddTest, AddEvalPositive){
	Op* val1 = new Op(1.0);
	Op* val2 = new Op(2.8);
	Add* test = new Add(val1, val2);
	EXPECT_EQ(test->evaluate(),3.8);
}

TEST(AddTest, AddEvalZero){
        Op* val1 = new Op(0.0);
        Op* val2 = new Op(0.0);
        Add* test = new Add(val1, val2);
        EXPECT_EQ(test->evaluate(),0.0);
}

TEST(AddTest, AddEvalNegative){
        Op* val1 = new Op(-1.0);
        Op* val2 = new Op(-2.8);
        Add* test = new Add(val1, val2);
        EXPECT_EQ(test->evaluate(),-3.8);
}

TEST(AddTest, AddStringPos){
	Op* val1 = new Op(1.0);
	Op* val2 = new Op(2.8);
	Add* test = new Add(val1, val2);
	EXPECT_EQ(test->stringify(), "(1.000000+2.800000)");
}

TEST(AddTest, AddStringNeg){
        Op* val1 = new Op(-1.0);
        Op* val2 = new Op(-2.8);
        Add* test = new Add(val1, val2);
        EXPECT_EQ(test->stringify(), "(-1.000000+-2.800000)");
}

TEST(AddTest, AddStringZero){
        Op* val1 = new Op(0.0);
        Op* val2 = new Op(0.0);
        Add* test = new Add(val1, val2);
        EXPECT_EQ(test->stringify(), "(0.000000+0.000000)");
}
