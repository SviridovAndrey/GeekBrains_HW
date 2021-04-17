/*
 * Circle.cpp
 *
 *  Created on: Apr 17, 2021
 *      Author: user
 */

#include "../include/Circle.h"

namespace Cpp_OOP {

	Circle::Circle(float radius) : m_radius(radius) {
		// TODO Auto-generated constructor stub

	}
	float Circle::area() const {
		return m_radius * m_radius * PI;
	};

	Circle::~Circle() {
		// TODO Auto-generated destructor stub
	}

} /* namespace Cpp_OOP */
