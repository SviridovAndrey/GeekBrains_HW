/*
 * Student.cpp
 *
 *  Created on: Apr 16, 2021
 *      Author: user
 */

#include "../include/Student.h"

namespace Cpp_OOP {

	Student::Student() : Person(), m_year(0) {
		// TODO Auto-generated constructor stub
		m_count++;
	}

	Student::Student(const string& name, int age, const string& sex, float weight, int year):
			Person(name, age, sex, weight), m_year(year) {
		m_count++;
	};

	int Student::getYear() const {
		return m_year;
	};

	void Student::setYear(int year) {
		m_year = year;
	};

	int Student::getStudentCount() {
		return m_count;
	};

	Student::~Student() {
		// TODO Auto-generated destructor stub
		m_count--;
	};

	int Student::m_count = 0;

} /* namespace Cpp_OOP */
