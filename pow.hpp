#ifndef POW_HPP_
#define POW_HPP_

#include "base.hpp"

using namespace std;
Class Pow : public Base{
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
