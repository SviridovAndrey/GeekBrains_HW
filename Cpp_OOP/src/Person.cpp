/*
 * Person.cpp
 *
 *  Created on: Apr 16, 2021
 *      Author: user
 */

#include "../include/Person.h"

namespace Cpp_OOP {

	Person::Person(string& name, int age, string& sex, float weight)
			:m_name(name), m_age(age), m_sex(sex), m_weight(weight) {
		// TODO Auto-generated constructor stub
	}
	Person::Person() : m_name("undefined"), m_age(0), m_sex(""), m_weight(0) {
		// TODO Auto-generated constructor stub
	}

	Person::~Person() {
		// TODO Auto-generated destructor stub
	}

} /* namespace Cpp_OOP */
