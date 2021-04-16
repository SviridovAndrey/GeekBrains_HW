/*
 * Student_test.cpp
 *
 *  Created on: Apr 16, 2021
 *      Author: user
 */

#include "gtest/gtest.h"
#include "../include/Student.h"

namespace Cpp_OOP {
	class StudentTest : public ::testing::Test {
	protected:
		Student student;
	};

	TEST_F(StudentTest, Student) {
//		ASSERT_EQ(1, Student::getStudentCount());
//		delete &student;

		ASSERT_EQ(1, Student::getStudentCount());

		Student *student1 = new Student("Anton", 18, "male", 75.5, 2020 );
		ASSERT_EQ(2, Student::getStudentCount());
		ASSERT_EQ("Anton", student1->getName());
		student1->setName("Kirill");
		ASSERT_EQ("Kirill", student1->getName());

		ASSERT_EQ(18, student1->getAge());
		student1->setAge(25);
		ASSERT_EQ(25, student1->getAge());

		ASSERT_EQ("male", student1->getSex());
		student1->setSex("female");
		ASSERT_EQ("female", student1->getSex());

		ASSERT_EQ((float)75.5, student1->getWeight());
		student1->setWeight(95.9);
		ASSERT_EQ((float)95.9, student1->getWeight());

		Student *student2 = new Student("Maria", 19, "female", 63.8, 2019 );

		ASSERT_EQ(3, Student::getStudentCount());

		ASSERT_EQ("Maria", student2->getName());
		student2->setName("Ann");
		ASSERT_EQ("Ann", student2->getName());

		ASSERT_EQ(19, student2->getAge());
		student2->setAge(45);
		ASSERT_EQ(45, student2->getAge());

		ASSERT_EQ("female", student2->getSex());
		student2->setSex("male");
		ASSERT_EQ("male", student2->getSex());

		ASSERT_EQ((float)63.8, student2->getWeight());
		student2->setWeight(12.3);
		ASSERT_EQ((float)12.3, student2->getWeight());

		delete student1;
		ASSERT_EQ(2, Student::getStudentCount());

		delete student2;
		ASSERT_EQ(1, Student::getStudentCount());

	}
} /* namespace Cpp_OOP */
