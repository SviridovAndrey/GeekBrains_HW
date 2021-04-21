/*
 * Circle.h
 *
 *  Created on: Apr 17, 2021
 *      Author: user
 */

#ifndef INCLUDE_CIRCLE_H_
#define INCLUDE_CIRCLE_H_

#include "Figure.h"

namespace Cpp_OOP {

	class Circle: public Figure {
	private:
		float m_radius;
	public:
		Circle(float radius);
		virtual float area() const override;
		virtual ~Circle();
	};

} /* namespace Cpp_OOP */

#endif /* INCLUDE_CIRCLE_H_ */
