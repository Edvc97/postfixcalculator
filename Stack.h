//Edward Carter
//stack.h

#include <iostream>
#include "List.h"
#include "ListNode.h"
#include "ListItr.h"
#include <cstdlib>
using namespace std;

#ifndef STACK_H
#define STACK_H

class Stack{

private: 
	List stacks;
	int counter;
	friend class ListNode;
	friend class List;
	friend class ListItr;

public:
	Stack();
	int top();
	void push(int num);
	void pop();
	bool empty();

};

#endif