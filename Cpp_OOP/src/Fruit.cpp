/*
 * Fruit.cpp
 *
 *  Created on: Apr 16, 2021
 *      Author: user
 */

#include "../include/Fruit.h"
#include <string>

using namespace std;

namespace Cpp_OOP {

	Fruit::Fruit() : Fruit("UnNamed", "UnKnounColor") {
		// TODO Auto-generated constructor stub
	};

	Fruit::Fruit(const string& name, const string& color) : m_name(name), m_color(color) {
	};

	string Fruit::getName() const {
		return m_name;
	};

	string Fruit::getColor() const {
		return m_color;
	};

	Fruit::~Fruit() {
		// TODO Auto-generated destructor stub
	};

} /* namespace Cpp_OOP */
