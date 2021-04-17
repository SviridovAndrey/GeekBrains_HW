/*
 * Square.h
 *
 *  Created on: Apr 17, 2021
 *      Author: user
 */

#ifndef INCLUDE_SQUARE_H_
#define INCLUDE_SQUARE_H_

#include "Parallelogram.h"

namespace Cpp_OOP {

	class Square: public Parallelogram {
	public:
		Square(float side);
		virtual float area() const override;
		virtual ~Square();
	};
}

#endif /* INCLUDE_SQUARE_H_ */
