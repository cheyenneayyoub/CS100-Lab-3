#include "gtest/gtest.h"
#include "sub.hpp"
#include "add.hpp"


TEST(SubTest, SubEvalPos){
	Op* val1 = new Op(2.8);
	Op* val2 = new Op(1.0);
	Sub* test = new Sub(val1, val2);
	EXPECT_EQ(test->evaluate(), 1.8);
}

TEST(SubTest, SubEvalNeg){
        Op* val1 = new Op(-2.8);
        Op* val2 = new Op(-1.0);
        Sub* test = new Sub(val1, val2);
        EXPECT_EQ(test->evaluate(), -3.8);
}

TEST(SubTest, SubEvalZero){
        Op* val1 = new Op(0.0);
        Op* val2 = new Op(0.0);
        Sub* test = new Sub(val1, val2);
        EXPECT_EQ(test->evaluate(), 0.0);
}

TEST(SubTest, SubEvalAdd){
        Op* val1 = new Op(2.8);
        Op* val2 = new Op(1.0);
	Op* val3 = new Op(5.0);
        Add* num  = new Add(val1, val2);
	Sub* test = new Sub(val3, num);
        EXPECT_EQ(test->evaluate(), 1.2);
}

TEST(SubTest, SubStringPos){
        Op* val1 = new Op(2.8);
        Op* val2 = new Op(1.0);
        Sub* test = new Sub(val1, val2);
        EXPECT_EQ(test->stringify(), "1.800000");
}

TEST(SubTest, SubStringNeg){
        Op* val1 = new Op(-2.8);
        Op* val2 = new Op(-1.0);
        Sub* test = new Sub(val1, val2);
        EXPECT_EQ(test->stringify(), "-3.800000");
} 

TEST(SubTest, SubStringZero){
        Op* val1 = new Op(0.0);
        Op* val2 = new Op(0.0);
        Sub* test = new Sub(val1, val2);
        EXPECT_EQ(test->stringify(), "0.000000");
}

TEST(SubTest, SubStringAdd){
        Op* val1 = new Op(2.8);
        Op* val2 = new Op(1.0);
        Op* val3 = new Op(5.0);
        Add* num  = new Add(val1, val2);
        Sub* test = new Sub(val3, num);
        EXPECT_EQ(test->stringify(), "(5.000000-(2.800000+1.000000))");
}
