/*
 * Power.cpp
 *
 *  Created on: Apr 13, 2021
 *      Author: user
 */


#include "include/Power.h"
#include <iostream>

using namespace std;
int main(){
	Power power;
	int num = 0;
	int pow = 0;
	while(num >= 0 && pow >= 0){
		cout << "Input number: ";
		cin >> num;
		cout << "Input power: ";
		cin >> pow;
		power.set(num, pow);
		power.calculate();
	}

	return 0;
}

