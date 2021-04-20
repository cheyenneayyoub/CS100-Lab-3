#include "base.hpp"
#include "pow.hpp"
#include "add.hpp"
#include "sub.hpp"

using namespace std;

TEST(PowTest, NoBase){
	Base* val1 = NULL;
	Base* val2 = new Op(1.0);
	EXPECT_THROW(invalid_argument,Pow(val1,val2));
	
}

TEST(PowTest, NoPower){
	Base* val2 = NULL;
        Base* val1 = new Op(1.0);
        EXPECT_THROW(invalid_argument,Pow(val1,val2));
    
}

TEST(PowTest, NoArgument){
        Base* val2 = NULL;
        Base* val1 = NULL;
        EXPECT_THROW(invalid_argument,Pow(val1,val2));
}

TEST(PowTest, PowEvalPos){
	Base* val1 = new Op(3.0);
	Base* val2 = new Op(2.0);
	Pow* test = new Pow(val1,val2);
	EXPECT_EQ(test->evaluate(), 9.0);
}

TEST(PowTest, PowEvalNegBase){
        Base* val1 = new Op(-3.0);
        Base* val2 = new Op(2.0);
        Pow* test = new Pow(val1,val2);
        EXPECT_EQ(test->evaluate(), 9.0);
}

TEST(PowTest, PowEvalFractionPow){
        Base* val1 = new Op(9.0);
        Base* val2 = new Op(0.5);
        Pow* test = new Pow(val1,val2);
        EXPECT_EQ(test->evaluate(), 3.0);
}

TEST(PowTest, PowEvalAddSub){
	Base* val1 = new Op(2.0);
        Base* val2 = new Op(2.0);
	Base* val3 = new Op(3.0);
	Add* sum = new Add(val1,val2);
	Sub* sub = new Sub(sum,val3);
	Pow* test = new Pow(sub,val1);
        EXPECT_EQ(test->evaluate(), 1.0);
}

TEST(PowTest, PowStrPos){
        Base* val1 = new Op(3.0);
        Base* val2 = new Op(2.0);
        Pow* test = new Pow(val1,val2);
        EXPECT_EQ(test->stringify(), "(3.000000**2.000000)");
}

TEST(PowTest, PowStrFractionPow){
        Base* val1 = new Op(9.0);
        Base* val2 = new Op(0.5);
        Pow* test = new Pow(val1,val2);
        EXPECT_EQ(test->stringify(), "(9.000000**0.500000)");
}

TEST(PowTest, PowStrAddSub){
        Base* val1 = new Op(2.0);
        Base* val2 = new Op(2.0);
        Base* val3 = new Op(3.0);
        Add* sum = new Add(val1,val2);
        Sub* sub = new Sub(sum,val3);
        Pow* test = new Pow(sub,val1);
        EXPECT_EQ(test->stringify(), "(((2.000000+2.000000)-3.000000)**2.000000)");
}
