/*
 * Square.cpp
 *
 *  Created on: Apr 17, 2021
 *      Author: user
 */

#include "../include/Square.h"

namespace Cpp_OOP {

	Square::Square(float side) : Parallelogram(side, side, 90) {
		// TODO Auto-generated constructor stub
	};

	float Square::area() const {
		return m_side_1 * m_side_2;
	};

	Square::~Square() {
		// TODO Auto-generated destructor stub
	}

} /* namespace Cpp_OOP */
