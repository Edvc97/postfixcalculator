//Edward Carter
//stack.cpp


#include "Stack.h"
#include "ListItr.h"
#include "List.h"
#include "ListNode.h"
#include "ListItr.h"

using namespace std;

Stack::Stack(){

	stacks = List();
	counter = 0;
}

int Stack::top(){

	return (stacks.first().retrieve());

}

void Stack::push(int num){

	(stacks.insertBefore(num, stacks.first()));
	counter++;

}

void Stack::pop(){

	stacks.remove(stacks.first().retrieve());
	counter--;

}

bool Stack::empty(){

	return stacks.isEmpty();

}