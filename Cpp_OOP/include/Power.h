/*
 * Power.h
 *
 *  Created on: Apr 13, 2021
 *      Author: user
 */

#ifndef POWER_H_
#define POWER_H_

#include <iostream>
#include <cmath>

using namespace std;

class Power {
private:
	int num = 0;
	int pow = 0;
public:
	Power(){};

	Power(int number, int power)
		:num(number), pow(power)
	{};

	void set(int number, int power)
	{
		num = number;
		pow = power;
	}

	void calculate(){
		cout << "The number " << num << " to the power of " << pow << " is " << std::pow(num, pow) << endl;
	}

	~Power(){};
};

#endif /* POWER_H_ */
