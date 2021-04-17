/*
 * SquareTest.cpp
 *
 *  Created on: Apr 17, 2021
 *      Author: user
 */
#include "gtest/gtest.h"
#include "../include/Square.h"

namespace Cpp_OOP {
	class SquareTest : public ::testing::Test {
	protected:
		Square square{10};
	};

	TEST_F(SquareTest, Square) {
		ASSERT_EQ((float)100, square.area());
	}
} /* namespace Cpp_OOP */
