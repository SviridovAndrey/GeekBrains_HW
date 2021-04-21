/*
 * Minivan.h
 *
 *  Created on: Apr 17, 2021
 *      Author: user
 */

#ifndef INCLUDE_MINIVAN_H_
#define INCLUDE_MINIVAN_H_

#include "Bus.h"
#include "PassengerCar.h"

namespace Cpp_OOP {

	class Minivan: public PassengerCar, public Bus {
	public:
		Minivan();
		Minivan(const string& company, const string& model);
		virtual ~Minivan();
	};

} /* namespace Cpp_OOP */

#endif /* INCLUDE_MINIVAN_H_ */
