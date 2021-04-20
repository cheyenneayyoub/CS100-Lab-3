#ifndef _RANDTEST_HPP_
#define _RANDTEST_HPP

#include "gtest/gtest.h"
#include "base.hpp"
#include "rand.hpp"
#include <iostream>
#include <string>


using namespace std;

TEST(RandTest, RandCheckLE) {
	Rand* test = new Rand ();
	EXPECT_LE(test->evaluate(), 100);
}

TEST(RandTest, RandCheckGE) {
        Rand* test = new Rand ();
        EXPECT_GE(test->evaluate(), 0);
}  

TEST(RandTest, RandCheckString) {
        Rand* test = new Rand ();
        EXPECT_NE(test->evaluate(), -1);
}

#endif


