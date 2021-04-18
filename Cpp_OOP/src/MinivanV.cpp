/*
 * MinivanV.cpp
 *
 *  Created on: Apr 17, 2021
 *      Author: user
 */

#include <iostream>
#include "../include/MinivanV.h"

using namespace std;

namespace Cpp_OOP {

	MinivanV::MinivanV() : MinivanV("UnKnownMinivanVCompany", "UnKnownMinivanVModel") {
		// TODO Auto-generated constructor stub
	};

	MinivanV::MinivanV(const string& company, const string& model) : PassengerCar(company, model), Bus(company, model) {
		cout << "Constructed MinivanV { company: '" << PassengerCar::m_company << " / " << Bus::m_company << "', model: '" <<  PassengerCar::m_model << " / " << Bus::m_model << "' }" << endl;
	};

	MinivanV::~MinivanV() {
		// TODO Auto-generated destructor stub
		cout << "Destructed MinivanV { company: '" << PassengerCar::m_company << " / " << Bus::m_company << "', model: '" <<  PassengerCar::m_model << " / " << Bus::m_model << "' }" << endl;
	};
} /* namespace Cpp_OOP */
