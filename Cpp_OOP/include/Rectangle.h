/*
 * Rectangle.h
 *
 *  Created on: Apr 17, 2021
 *      Author: user
 */

#ifndef INCLUDE_RECTANGLE_H_
#define INCLUDE_RECTANGLE_H_

#include "Parallelogram.h"

namespace Cpp_OOP {

class Rectangle: public Parallelogram {
public:
	Rectangle(float side_1, float side_2);
	virtual float area() const override;
	virtual ~Rectangle();
};

} /* namespace Cpp_OOP */

#endif /* INCLUDE_RECTANGLE_H_ */
