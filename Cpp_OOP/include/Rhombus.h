/*
 * Rhombus.h
 *
 *  Created on: Apr 17, 2021
 *      Author: user
 */

#ifndef INCLUDE_RHOMBUS_H_
#define INCLUDE_RHOMBUS_H_

#include "Parallelogram.h"

namespace Cpp_OOP {

class Rhombus: public Parallelogram {
public:
	Rhombus(float side, float angle);
	virtual ~Rhombus();
};

} /* namespace Cpp_OOP */

#endif /* INCLUDE_RHOMBUS_H_ */
