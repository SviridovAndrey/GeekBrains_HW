/*
 * Cpp_OOP.cpp
 *
 *  Created on: Apr 13, 2021
 *      Author: user
 */


#include "include/Power.h"
#include "include/RGBA.h"
#include "include/Stack.h"
#include <iostream>
#include <cstdint>

using namespace Cpp_OOP;
using namespace std;

void task_1();
void task_2();
void task_3();

int main(){

	int taskNumber = 0;
	cout << "Выберите номер задачи:" << endl;
	cout << "1. класс Power;" << endl;
	cout << "2. класс RGBA;" << endl;
	cout << "3. Stack." << endl;
	cin >> taskNumber;
	switch(taskNumber) {
	case 1:
		task_1();
		break;
	case 2:
		task_2();
		break;
	case 3:
		task_3();
		break;
	default:
		cout << "Нет задания с таким номером..." << endl;
		break;
	}

	return 0;
}

void task_1() {
	Power power;
	int num = 0;
	int pow = 0;
	while(num >= 0 && pow >= 0) {
		cout << "Input number (for quit input negative value): ";
		cin >> num;
		cout << "Input power: ";
		cin >> pow;
		power.set(num, pow);
		power.calculate();
	}
};

void task_2() {
	RGBA* rgba = new RGBA();
	rgba->print();
	int ch_red, ch_green, ch_blue, ch_alpha;
	std::uint8_t m_red, m_green, m_blue, m_alpha;
	cout << "Input Red: ";
	cin >> ch_red;
	m_red = (uint8_t)ch_red;
	cout << "Input Green: ";
	cin >> ch_green;
	m_green = (uint8_t)ch_green;
	cout << "Input Blue: ";
	cin >> ch_blue;
	m_blue = (uint8_t)ch_blue;
	cout << "Input Alpha: ";
	cin >> ch_alpha;
	m_alpha = (uint8_t)ch_alpha;
	rgba = new RGBA(m_red, m_green, m_blue, m_alpha);
	rgba->print();
};

void task_3() {
	Stack stack;
	stack.reset();
	stack.print();

	stack.push(3);
	stack.push(7);
	stack.push(5);
	stack.print();

	stack.pop();
	stack.print();

	stack.pop();
	stack.pop();
	stack.print();

};
