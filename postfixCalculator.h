//Edward Carter
//postfixCalculator.h


#ifndef POSTFIXCALCULATOR_H
#define POSTFIXCALCULATOR_H

using namespace std;
#include "Stack.h"

class postfixCalculator{
private: 
	friend class Stack;
	Stack *nstk;

public:
	postfixCalculator(); // Constructor
	void add(); // addition
	void subtract(); //subtraction
	void multiply(); //multiplication
	void divide(); //division
	void negatate(); //unary negation
	void pushNum(int a); //adds the passed element to the top of the stack.
	int getTop(); // gets the top element
	



};




#endif