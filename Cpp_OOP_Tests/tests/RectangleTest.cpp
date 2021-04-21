/*
 * RectangleTest.cpp
 *
 *  Created on: Apr 17, 2021
 *      Author: user
 */
#include "gtest/gtest.h"
#include "../include/Rectangle.h"

namespace Cpp_OOP {
	class RectangleTest : public ::testing::Test {
	protected:
		Rectangle rectangle{10, 50};
	};

	TEST_F(RectangleTest, Rectangle) {
		ASSERT_EQ((float)500, rectangle.area());
	}
} /* namespace Cpp_OOP */
