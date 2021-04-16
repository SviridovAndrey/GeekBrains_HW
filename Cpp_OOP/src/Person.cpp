/*
 * Person.cpp
 *
 *  Created on: Apr 16, 2021
 *      Author: user
 */

#include "../include/Person.h"

namespace Cpp_OOP {

	Person::Person(const string& name, int age, const string& sex, float weight)
			:m_name(name), m_age(age), m_sex(sex), m_weight(weight) {
		// TODO Auto-generated constructor stub
	};

	Person::Person() : m_name("undefined"), m_age(0), m_sex(""), m_weight(0) {
		// TODO Auto-generated constructor stub
	};

	void Person::setName(const string& name) {
		m_name = name;
	};

	string Person::getName() const {
		return m_name;
	};

	void Person::setAge(int age) {
		m_age = age;
	};

	int Person::getAge() const {
		return m_age;
	};

	void Person::setSex(const string& sex) {
		m_sex = sex;
	};

	string Person::getSex() const {
		return m_sex;
	};

	void Person::setWeight(float weight) {
		m_weight = weight;
	};

	float Person::getWeight() const {
		return m_weight;
	};

	Person::~Person() {
		// TODO Auto-generated destructor stub
	}

} /* namespace Cpp_OOP */
