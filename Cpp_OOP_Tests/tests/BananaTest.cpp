/*
 * BananaTest.cpp
 *
 *  Created on: Apr 16, 2021
 *      Author: user
 */
#include "gtest/gtest.h"
#include "../include/Banana.h"

namespace Cpp_OOP {
	class BananTest : public ::testing::Test {
	protected:
		Banana banana;
	};
	TEST_F(BananTest, Banana) {

		ASSERT_EQ("banana", banana.getName());
		ASSERT_EQ("yellow", banana.getColor());
	}
} /* namespace Cpp_OOP */
