/*
 * Stack.h
 *
 *  Created on: Apr 13, 2021
 *      Author: user
 */

#ifndef STACK_H_
#define STACK_H_

namespace Cpp_OOP
{
	struct StackItem {
		int value;
		StackItem* prevItem;
	};

	class Stack {
	private:
		StackItem* head;
		int count;
	public:
		Stack();
		void push(int value);
		int pop();
		void print();
		void reset();
		bool test();
		virtual ~Stack();
	};
}
#endif /* STACK_H_ */
