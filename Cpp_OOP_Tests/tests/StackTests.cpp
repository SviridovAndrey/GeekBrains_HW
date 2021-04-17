/*
 * StackTests.cpp
 *
 *  Created on: Apr 14, 2021
 *      Author: user
 */

#include "gtest/gtest.h"
#include "Stack.h"

using namespace Cpp_OOP;

namespace
{
	class StackTests : public ::testing::Test {
	protected:
		Stack stack;
	};
	TEST_F(StackTests, Stack) {
		ASSERT_EQ(0, stack.getCount());
		stack.push(8);
		ASSERT_EQ(1, stack.getCount());
		ASSERT_EQ(8, stack.peak());
		stack.push(5);
		ASSERT_EQ(2, stack.getCount());
		ASSERT_EQ(5, stack.peak());
		stack.push(103);
		ASSERT_EQ(3, stack.getCount());
		ASSERT_EQ(103, stack.peak());
		ASSERT_EQ(103, stack.pop());
		ASSERT_EQ(2, stack.getCount());
		ASSERT_EQ(5, stack.pop());
		ASSERT_EQ(1, stack.getCount());
		ASSERT_EQ(8, stack.pop());
		ASSERT_EQ(0, stack.getCount());
		stack.push(6);
		stack.push(5);
		stack.push(8);
		stack.push(90);
		ASSERT_EQ(4, stack.getCount());
		stack.reset();
		ASSERT_EQ(0, stack.getCount());
//		ASSERT_TRUE(stack.test());
//		ASSERT_TRUE(true);
	}
}


