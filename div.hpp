#ifndef _DIV_HPP_
#define _DIV_HPP_

#include "base.hpp"
#include "op.hpp"
#include <iostream>
#include <string>

using namespace std;

class Div : public Base {

	public:
	Div( Base* left, Base* right) : Base() {

	double lval = left->evaluate();
	double rval = right->evaluate();
	string lstr = left->stringify();
	string rstr = right->stringify();

}
	virtual double evaluate() { return lval / rval ;}
	virtual string stringify() { return lstr + " / " + rstr ;}


	private:
	double lval;
	double rval;
	string lstr;
	string rstr;

};

#endif


