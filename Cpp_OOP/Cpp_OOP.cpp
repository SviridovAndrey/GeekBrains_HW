/*
 * Cpp_OOP.cpp
 *
 *  Created on: Apr 13, 2021
 *      Author: user
 */

#include <iostream>
#include <cstdint>

using namespace std;

int main(){

	int taskNumber = 0;
	cout << "Выберите номер задачи:" << endl;

	cin >> taskNumber;

	switch(taskNumber) {
	default:
		cout << "Нет задания с таким номером..." << endl;
		break;
	}

	return 0;
}
