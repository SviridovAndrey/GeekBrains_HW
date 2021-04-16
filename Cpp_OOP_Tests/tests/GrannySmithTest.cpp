/*
 * GrannySmithTest.cpp
 *
 *  Created on: Apr 16, 2021
 *      Author: user
 */
#include "gtest/gtest.h"
#include "../include/GrannySmith.h"

namespace Cpp_OOP {
	class GrannySmithTest : public ::testing::Test {
	protected:
		GrannySmith grannySmith;
	};
	TEST_F(GrannySmithTest, GrannySmith) {

		ASSERT_EQ("Granny Smith apple", grannySmith.getName());
		ASSERT_EQ("green", grannySmith.getColor());
	}
} /* namespace Cpp_OOP */
