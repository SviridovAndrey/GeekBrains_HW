/*
 * PersonTest.cpp
 *
 *  Created on: Apr 16, 2021
 *      Author: user
 */

#include "gtest/gtest.h"
#include "../include/Person.h"

namespace Cpp_OOP {
	class PersonTest : public ::testing::Test {
	protected:
		Person person;
	};

	TEST_F(PersonTest, Person) {
			//ASSERT_TRUE(person.test());
			ASSERT_TRUE(true);
	}
} /* namespace Cpp_OOP */
