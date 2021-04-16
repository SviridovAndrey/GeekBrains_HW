/*
 * AppleTest.cpp
 *
 *  Created on: Apr 16, 2021
 *      Author: user
 */

#include "gtest/gtest.h"
#include "../include/Apple.h"

namespace Cpp_OOP {
	class AppleTest : public ::testing::Test {
	protected:
		Apple apple;
	};
	TEST_F(AppleTest, Apple) {

		ASSERT_EQ("apple", apple.getName());
		ASSERT_EQ("green", apple.getColor());
		Apple* _apple = new Apple("red");
		apple = *_apple;
		ASSERT_EQ("apple", apple.getName());
		ASSERT_EQ("red", apple.getColor());
	}
} /* namespace Cpp_OOP */
