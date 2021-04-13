/*
 * Cpp_OOP.cpp
 *
 *  Created on: Apr 13, 2021
 *      Author: user
 */


#include "include/Power.h"
#include "include/RGBA.h"
#include <iostream>
#include <cstdint>

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

	RGBA* rgba = new RGBA();
	rgba->print();
	std::uint8_t m_red, m_green, m_blue, m_alpha;
	cout << "Input Red: ";
	cin >> m_red;
	cout << "Input Green: ";
	cin >> m_green;
	cout << "Input Blue: ";
	cin >> m_blue;
	cout << "Input Alpha: ";
	cin >> m_alpha;
	rgba = new RGBA(m_red, m_green, m_blue, m_alpha);
	rgba->print();

	return 0;
}

