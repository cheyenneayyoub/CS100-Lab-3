#ifndef _MULT_HPP_
#define _MULT_HPP_

#include "op.hpp"
#include <iostream>
#include <string>

using namespace std;

class Mult : public Base {

	public:
	Mult( Base* lnode, Base* rnode) : Base() {
	
}
	virtual double evaluate() { return ((lnode->evaluate()) * (rnode->evaluate())) ;}
	virtual string stringify() { return ("(" + (lnode->stringify()) + " * " +  (rnode->stringify())+ ")" ) ;}

};

#endif


