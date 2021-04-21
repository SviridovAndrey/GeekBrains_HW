/*
 * Parallelogram.cpp
 *
 *  Created on: Apr 17, 2021
 *      Author: user
 */

#include <cmath>
#include "../include/Parallelogram.h"

namespace Cpp_OOP {

	Parallelogram::Parallelogram(float side_1, float side_2, float angle)
			:Figure(), m_side_1(side_1), m_side_2(side_2), m_angle(angle) {
		// TODO Auto-generated constructor stub
	};

	float Parallelogram::area() const {
		return m_side_1 * m_side_2 * (float)sin(m_angle * PI / 180);
	}

	Parallelogram::~Parallelogram() {
		// TODO Auto-generated destructor stub
	}

} /* namespace Cpp_OOP */
