/*
 * UnicCounterTest.cpp
 *
 *  Created on: Apr 24, 2021
 *      Author: user
 */
#include "gtest/gtest.h"
#include "../include/UnicCounter.h"
#include <vector>

namespace Cpp_OOP {
	TEST(UnicCounter, UNICCOUNTER_TEST) {
		std::vector<int> v = { 1, 2, 2, 3, 3, 4, 6 };
		UnicCounter uc;
		ASSERT_EQ(5, uc.getUnicCount(v));
	}
} /* namespace Cpp_OOP */
