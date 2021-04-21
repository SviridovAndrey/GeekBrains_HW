/*
 * PassengerCar.cpp
 *
 *  Created on: Apr 17, 2021
 *      Author: user
 */
#include <iostream>
#include "../include/PassengerCar.h"

using namespace std;

namespace Cpp_OOP {

PassengerCar::PassengerCar() : PassengerCar("UnKnownPassengerCarCompany", "UnKnownPassengerCarModel") {
	// TODO Auto-generated constructor stub
}

PassengerCar::PassengerCar(const string& company, const string& model) : Car(company, model) {
	cout << "Constructed PassengerCar { company: '" << m_company << "', model: '" <<  m_model << "' }" << endl;
}

PassengerCar::~PassengerCar() {
	// TODO Auto-generated destructor stub
	cout << "Destructed PassengerCar { company: '" << m_company << "', model: '" <<  m_model << "' }" << endl;
}

} /* namespace Cpp_OOP */
