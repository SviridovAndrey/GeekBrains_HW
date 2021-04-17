/*
 * AllTests.cpp
 *
 *  Created on: Apr 14, 2021
 *      Author: user
 */

#include "gtest/gtest.h"
#include "CircleTest.cpp"
#include "SquareTest.cpp"
#include "RectangleTest.cpp"
#include "ParallelogramTest.cpp"
#include "RhombusTest.cpp"

int main(int argc, char** argv) {

	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
