/*
 * RhombusTest.cpp
 *
 *  Created on: Apr 17, 2021
 *      Author: user
 */
#include "gtest/gtest.h"
#include "../include/Rhombus.h"

namespace Cpp_OOP {
	class RhombusTest : public ::testing::Test {
	protected:
		Rhombus rhombus{10, 90};
	};

	TEST_F(RhombusTest, Rhombus) {
		ASSERT_EQ((float)100, rhombus.area());
		Rhombus rhombus1{10, 30};
		ASSERT_EQ((float)50, rhombus1.area());
	}
} /* namespace Cpp_OOP */
