/*
 * PowerTests.cpp
 *
 *  Created on: Apr 14, 2021
 *      Author: user
 */

#include "gtest/gtest.h"
#include "Power.h"

using namespace Cpp_OOP;

namespace
{
	class PowerTests : public ::testing::Test {
	protected:
		Power power;
	};
	TEST_F(PowerTests, Power) {
		power.set(3, 2);
		ASSERT_EQ(9, power.calculate());
	}
}
