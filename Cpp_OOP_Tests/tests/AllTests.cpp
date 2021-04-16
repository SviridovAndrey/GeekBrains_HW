/*
 * AllTests.cpp
 *
 *  Created on: Apr 14, 2021
 *      Author: user
 */

#include "gtest/gtest.h"
#include "StudentTest.cpp"
#include "AppleTest.cpp"
#include "BananaTest.cpp"

int main(int argc, char** argv) {

	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
