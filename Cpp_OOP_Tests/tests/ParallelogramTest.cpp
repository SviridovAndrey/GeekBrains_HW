/*
 * ParallelogramTest.cpp
 *
 *  Created on: Apr 17, 2021
 *      Author: user
 */

#include "gtest/gtest.h"
#include "../include/Parallelogram.h"

namespace Cpp_OOP {
	class ParallelogramTest : public ::testing::Test {
	protected:
		Parallelogram parallelogram{10, 50, 90};
	};

	TEST_F(ParallelogramTest, Parallelogram) {
		ASSERT_EQ((float)500, parallelogram.area());
		Parallelogram parallelogram1{10, 50, 30};
		ASSERT_EQ((float)250, parallelogram1.area());
	}
} /* namespace Cpp_OOP */



