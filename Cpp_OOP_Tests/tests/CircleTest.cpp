/*
 * CircleTest.cpp
 *
 *  Created on: Apr 17, 2021
 *      Author: user
 */
#include "gtest/gtest.h"
#include "../include/Circle.h"

namespace Cpp_OOP {
	class CircleTest : public ::testing::Test {
	protected:
		Circle circle{10};
	};

	TEST_F(CircleTest, Circle) {
		ASSERT_EQ(circle.getPI() * 10 * 10, circle.area());
	}
} /* namespace Cpp_OOP */
