/*
 * Rectangle.cpp
 *
 *  Created on: Apr 17, 2021
 *      Author: user
 */

#include "../include/Rectangle.h"

namespace Cpp_OOP {

	Rectangle::Rectangle(float side_1, float side_2)
			: Parallelogram(side_1, side_2, 90) {
		// TODO Auto-generated constructor stub
	};

	float Rectangle::area() const {
		return m_side_1 * m_side_2;
	};

	Rectangle::~Rectangle() {
		// TODO Auto-generated destructor stub
	}

} /* namespace Cpp_OOP */
