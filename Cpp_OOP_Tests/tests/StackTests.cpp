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
		ASSERT_TRUE(stack.test());
		ASSERT_TRUE(true);
	}
}


