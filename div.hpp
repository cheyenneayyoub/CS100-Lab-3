#ifndef _DIV_HPP_
#define _DIV_HPP_

#include "op.hpp"
#include <iostream>
#include <string>

using namespace std;

class Div : public Base {

	public:
	Div( Base* lnode, Base* rnode) : Base() {}


	virtual double evaluate() { return ((lnode->evaluate()) / (rnode->evaluate())) ;}
	virtual string stringify() { return ((lnode->stringify()) + " / " +  (rnode->stringify())) ;}


};


#endif

