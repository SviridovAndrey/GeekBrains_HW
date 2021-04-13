/*
 * Stack.cpp
 *
 *  Created on: Apr 13, 2021
 *      Author: user
 */

#include "../include/Stack.h"
#include <iostream>
#include <cassert>

using namespace Cpp_OOP;
using namespace std;

Stack::Stack():count(0), head(0){
	// TODO Auto-generated constructor stub
	//head = new StackItem { 0, 0 };
}
void Stack::push(int value) {
	StackItem* newItem = new StackItem{ value, 0 };
	if(count > 0) {
		StackItem* tmp = &(*head);
		newItem->prevItem = tmp;
	}
	head = newItem;
	count++;
};

int Stack::pop() {
	assert(count > 0);
	int value = head->value;
	StackItem* tmp = head;
	head = tmp->prevItem;
	delete tmp;
	count--;
	return value;
};

void Stack::print() {
	StackItem* tmp = head;
	cout << "( ";
	while(tmp != 0) {
		cout << tmp->value << " ";
		tmp = tmp->prevItem;
	}
	cout << ")" << endl;
};

void Stack::reset() {
	while(count > 0){
		pop();
	}
};

Stack::~Stack() {
	// TODO Auto-generated destructor stub
	reset();
}

