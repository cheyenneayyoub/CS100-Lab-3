#ifndef POW_HPP_
#define POW_HPP_

#include "base.hpp"
#include <stdexcept>
#include <limits>
#include <cmath>

using namespace std;
class Pow : public Base{
	private:
		Base* lhs;
		Base* rhs;
	public:
		Pow(Base* left, Base* right) : Base() {
			lhs = left;
			rhs = right;
		}
		double evaluate() {
			return pow(lhs->evaluate(), rhs->evaluate());
		}
		string stringify(){
			return "(" + lhs->stringify() + "**" + rhs->stringify() + ")";
		}

};

#endif
