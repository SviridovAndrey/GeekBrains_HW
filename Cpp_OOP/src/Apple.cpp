/*
 * Apple.cpp
 *
 *  Created on: Apr 16, 2021
 *      Author: user
 */

#include "../include/Apple.h"

namespace Cpp_OOP {

Apple::Apple() : Fruit("apple", "green") {
	// TODO Auto-generated constructor stub
}

Apple::Apple(const string& color) : Fruit("apple", color) {};

Apple::Apple(const string& name, const string& color) : Fruit(name, color) {};

Apple::~Apple() {
	// TODO Auto-generated destructor stub
}

} /* namespace Cpp_OOP */
