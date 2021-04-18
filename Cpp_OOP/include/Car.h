/*
 * Car.h
 *
 *  Created on: Apr 17, 2021
 *      Author: user
 */

#ifndef INCLUDE_CAR_H_
#define INCLUDE_CAR_H_

#include <string>

using namespace std;

namespace Cpp_OOP {

class Car {
protected:
	string m_company;
	string m_model;
public:
	Car();
	Car(const string& company, const string& model);
	virtual ~Car();
};

} /* namespace Cpp_OOP */

#endif /* INCLUDE_CAR_H_ */
