//Edward Carter
//postfixCalculator.cpp


using namespace std;
#include "postfixCalculator.h"
#include <iostream>

postfixCalculator::postfixCalculator(){

	nstk = new Stack;
}

void postfixCalculator::add(){
	int x,y = 0;
	x = nstk -> top();
	nstk -> pop();
	y = nstk -> top();
	nstk -> pop();
	nstk -> push(y+x);

}

void postfixCalculator::subtract(){
	int x,y = 0;
	x = nstk -> top();
	nstk -> pop();
	y = nstk -> top();
	nstk -> pop();
	nstk -> push(y-x);

}

void postfixCalculator::multiply(){
	int x,y = 0;
	x = nstk -> top();
	nstk -> pop();
	y = nstk -> top();
	nstk -> pop();
	nstk -> push(y*x);

}

void postfixCalculator::divide(){
	int x,y = 0;
	x = nstk -> top();
	nstk -> pop();
	y = nstk -> top();
	nstk -> pop();
	nstk -> push(y/x);

}

void postfixCalculator::negatate(){
	int x = 0;
	x = nstk -> top();
	nstk -> pop();
	nstk -> push((-1)*x);
}

int postfixCalculator::getTop(){
	return(nstk -> top());
}

void postfixCalculator::pushNum(int a){
	nstk -> push(a);
}