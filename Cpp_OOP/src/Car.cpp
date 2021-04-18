/*
 * Car.cpp
 *
 *  Created on: Apr 17, 2021
 *      Author: user
 */

#include "../include/Car.h"
#include <iostream>

namespace Cpp_OOP {

Car::Car() : Car("UnKnownCompany", "UnKnownModel") {
	// TODO Auto-generated constructor stub
};

Car::Car(const string& company, const string& model)
	:m_company(company), m_model(model){
	cout << "Constructed Car { company: '" << m_company << "', model: '" <<  m_model << "' }" << endl;
}

Car::~Car() {
	// TODO Auto-generated destructor stub
	cout << "Destructed Car { company: '" << m_company << "', model: '" <<  m_model << "' }" << endl;
}

} /* namespace Cpp_OOP */
