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

int Power::calculate() {
	int result = std::pow(num, pow);
	cout << "The number " << num << " to the power of " << pow << " is " << result << endl;
	return result;
};

Power::~Power() {
	// TODO Auto-generated destructor stub
}


