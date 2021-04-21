/*
 * Parallelogram.h
 *
 *  Created on: Apr 17, 2021
 *      Author: user
 */

#ifndef INCLUDE_PARALLELOGRAM_H_
#define INCLUDE_PARALLELOGRAM_H_
#include "Figure.h"

namespace Cpp_OOP {

	class Parallelogram : public Figure {
	protected:
		float m_side_1;
		float m_side_2;
		float m_angle;
	public:
		Parallelogram(float side_1, float side_2, float angle);
		virtual float area() const override;
		virtual ~Parallelogram();
	};

} /* namespace Cpp_OOP */

#endif /* INCLUDE_PARALLELOGRAM_H_ */
