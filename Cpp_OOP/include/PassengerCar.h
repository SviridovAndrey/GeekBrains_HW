/*
 * PassengerCar.h
 *
 *  Created on: Apr 17, 2021
 *      Author: user
 */

#ifndef INCLUDE_PASSENGERCAR_H_
#define INCLUDE_PASSENGERCAR_H_

#include "Car.h"

namespace Cpp_OOP {

class PassengerCar: public Car {
public:
	PassengerCar();
	PassengerCar(const string& company, const string& model);
	virtual ~PassengerCar();
};

} /* namespace Cpp_OOP */

#endif /* INCLUDE_PASSENGERCAR_H_ */
