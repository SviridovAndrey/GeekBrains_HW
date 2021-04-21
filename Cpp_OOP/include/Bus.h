/*
 * Bus.h
 *
 *  Created on: Apr 17, 2021
 *      Author: user
 */

#ifndef INCLUDE_BUS_H_
#define INCLUDE_BUS_H_

#include "Car.h"

namespace Cpp_OOP {

class Bus: public Car {
public:
	Bus();
	Bus(const string& company, const string& model);
	virtual ~Bus();
};

} /* namespace Cpp_OOP */

#endif /* INCLUDE_BUS_H_ */
