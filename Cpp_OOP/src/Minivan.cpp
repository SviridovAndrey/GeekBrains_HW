/*
 * Minivan.cpp
 *
 *  Created on: Apr 17, 2021
 *      Author: user
 */
#include <iostream>
#include "../include/Minivan.h"

using namespace std;

namespace Cpp_OOP {

	Minivan::Minivan() : Minivan("UnKnownMinivanCompany", "UnKnownMinivanModel") {
		// TODO Auto-generated constructor stub
	};

	Minivan::Minivan(const string& company, const string& model) : PassengerCar(company, model), Bus(company, model) {
		cout << "Constructed Minivan { company: '" << PassengerCar::m_company << " / " << Bus::m_company << "', model: '" <<  PassengerCar::m_model << " / " << Bus::m_model << "' }" << endl;
	};

	Minivan::~Minivan() {
		// TODO Auto-generated destructor stub
		cout << "Destructed Minivan { company: '" << PassengerCar::m_company << " / " << Bus::m_company << "', model: '" <<  PassengerCar::m_model << " / " << Bus::m_model << "' }" << endl;
	};

} /* namespace Cpp_OOP */
