/*
 * Power.cpp
 *
 *  Created on: Apr 13, 2021
 *      Author: user
 */

#include "../include/Power.h"
#include <iostream>
#include <cmath>

using namespace Cpp_OOP;
using namespace std;

Power::Power() {
	// TODO Auto-generated constructor stub
}
Power::Power(int number, int power)
	:num(number), pow(power) {
};

void Power::set(int number, int power) {
	num = number;
	pow = power;
};

void Power::calculate() {
	cout << "The number " << num << " to the power of " << pow << " is " << std::pow(num, pow) << endl;
};

Power::~Power() {
	// TODO Auto-generated destructor stub
}


