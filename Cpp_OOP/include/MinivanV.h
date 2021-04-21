/*
 * MinivanV.h
 *
 *  Created on: Apr 17, 2021
 *      Author: user
 */

#ifndef INCLUDE_MINIVANV_H_
#define INCLUDE_MINIVANV_H_

#include "Bus.h"
#include "PassengerCar.h"

namespace Cpp_OOP {

	class MinivanV: virtual public PassengerCar, virtual public Bus {
	public:
		MinivanV();
		MinivanV(const string& company, const string& model);
		virtual ~MinivanV();
	};

} /* namespace Cpp_OOP */

#endif /* INCLUDE_MINIVANV_H_ */
