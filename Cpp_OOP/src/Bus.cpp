/*
 * Bus.cpp
 *
 *  Created on: Apr 17, 2021
 *      Author: user
 */
#include <iostream>
#include "../include/Bus.h"

using namespace std;

namespace Cpp_OOP {

Bus::Bus() : Bus("UnKnownBusCompany", "UnKnownBusModel") {
	// TODO Auto-generated constructor stub

}

Bus::Bus(const string& company, const string& model) : Car(company, model) {
	cout << "Constructed Bus { company: '" << m_company << "', model: '" <<  m_model << "' }" << endl;
}

Bus::~Bus() {
	// TODO Auto-generated destructor stub
	cout << "Destructed Bus { company: '" << m_company << "', model: '" <<  m_model << "' }" << endl;
}

} /* namespace Cpp_OOP */
