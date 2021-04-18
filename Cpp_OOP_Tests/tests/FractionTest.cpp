/*
 * FractionTest.cpp
 *
 *  Created on: Apr 17, 2021
 *      Author: user
 */
#include "gtest/gtest.h"
#include "../include/Fraction.h"
#include <iostream>

namespace Cpp_OOP {
	TEST(FractionTest, FRACTION_ADDITION_TEST1) {
		Fraction fr1{1,2};
		ASSERT_EQ(1, 1);
	}

	TEST(FractionTest, FRACTION_ADDITION_TEST2) {
		ASSERT_EQ(1, 1);
	}

	TEST(FractionTest, FRACTION_TOSIMPLE_TEST) {
		Fraction fr1{2,1,2};
		fr1.toSimple();
		ASSERT_EQ(0, fr1.getIntegerPart());
		ASSERT_EQ(5, fr1.getNumerator());
		ASSERT_EQ(2, fr1.getDenominator());
	}

	TEST(FractionTest, FRACTION_TOMIXED_TEST) {
		Fraction fr1{5,2};
		std::cout << fr1 << std::endl;
		fr1.toMixed();
		std::cout << fr1 << std::endl;
		ASSERT_EQ(2, fr1.getIntegerPart());
		ASSERT_EQ(1, fr1.getNumerator());
		ASSERT_EQ(2, fr1.getDenominator());
	}

	TEST(FractionTest, FRACTION_EQUAL_TEST) {
		Fraction fr1{1,2};
		Fraction fr2{1,2};
		ASSERT_TRUE(fr1 == fr2);
		ASSERT_FALSE(fr1 != fr2);
	}

	TEST(FractionTest, FRACTION_NOTEQUAL_TEST) {
		Fraction fr1{1,2};
		Fraction fr2{1,3};
		ASSERT_FALSE(fr1 == fr2);
		ASSERT_TRUE(fr1 != fr2);
	}
} /* namespace Cpp_OOP */
