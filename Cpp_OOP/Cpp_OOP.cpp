/*
 * Cpp_OOP.cpp
 *
 *  Created on: Apr 13, 2021
 *      Author: user
 */

#include <iostream>
#include <cstdint>

using namespace std;

void task_1();
void task_2();

int main(){

	int taskNumber = 0;
	cout << "Выберите номер задачи:" << endl;
	cout << "1. Создать класс Person;" << endl;
	cout << "2. Создать классы Apple (яблоко) и Banana (банан), которые наследуют класс Fruit (фрукт);" << endl;
	cin >> taskNumber;

	switch(taskNumber) {
	case 1:
		task_1();
		break;
	case 2:
		task_2();
		break;
	default:
		cout << "Нет задания с таким номером..." << endl;
		break;
	}

	return 0;
}

void task_1() {

};

void task_2() {

};
