/*
 * Cpp_OOP.cpp
 *
 *  Created on: Apr 13, 2021
 *      Author: user
 */

#include <iostream>
#include <cstdint>
#include "include/Circle.h"
#include "include/Parallelogram.h"
#include "include/Rectangle.h"
#include "include/Rhombus.h"
#include "include/Square.h"
#include "include/Car.h"
#include "include/PassengerCar.h"
#include "include/Bus.h"
#include "include/Minivan.h"
#include "include/MinivanV.h"

using namespace std;
using namespace Cpp_OOP;

void task_1();
void task_2();

int main(){

	int taskNumber = 0;
	cout << "Выберите номер задачи:" << endl;
	cout << "1. Посчитать площади геометрических фигур;" << endl;
	cout << "2. Создать классы с множественным наслндованием;" << endl;
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
	char userChoice;
	do {
		cout << "Выберите фигуру:" << endl;
		cout << "1 - параллепипед;" << endl;
		cout << "2 - ромб;" << endl;
		cout << "3 - прямоугольник;" << endl;
		cout << "4 - квадрат;" << endl;
		cout << "5 - круг." << endl;
		cin >> userChoice;

		float side_1 = 0, side_2 = 0, angle = 0;
		Figure *figure;
		switch(userChoice){
			case '1':
				cout << "Введите две стороны и угол (20.5 15 45):" << endl;
				cin >> side_1 >> side_2 >> angle;
				figure = new Parallelogram(side_1, side_2, angle);
				cout << "Площадь параллепипеда со сторонами " << side_1 << ", " << side_2 << " и углом " << angle << " равна:" << figure->area() << endl;
				delete figure;
				break;
			case '2':
				cout << "Введите сторону и угол (20.5 45):" << endl;
				cin >> side_1 >> angle;
				figure = new Rhombus(side_1, angle);
				cout << "Площадь ромба со стороной " << side_1 << " и углом " << angle << " равна:" << figure->area() << endl;
				delete figure;
				break;
			case '3':
				cout << "Введите две стороны (20.5 15):" << endl;
				cin >> side_1 >> side_2;
				figure = new Rectangle(side_1, side_2);
				cout << "Площадь рямоугольника со сторонами " << side_1 << ", " << side_2 << " равна:" << figure->area() << endl;
				delete figure;
				break;
			case '4':
				cout << "Введите сторону (20.5):" << endl;
				cin >> side_1;
				figure = new Square(side_1);
				cout << "Площадь вадрата со стороной " << side_1 << " равна:" << figure->area() << endl;
				delete figure;
				break;
			case '5':
				cout << "Введите радиус (20.5):" << endl;
				cin >> side_1;
				figure = new Circle(side_1);
				cout << "Площадь круга с радиусом " << side_1 << " равна:" << figure->area() << endl;
				delete figure;
				break;
			default:
				cout << "Выбор не определен" << endl;
				break;
		}
		cout << "Продолжить (y/n)?:";
		cin >> userChoice;
	} while (userChoice == 'y');
};

void task_2() {
	Car car{"Some Car Company", "Some Car Model"};
	PassengerCar passengerCar{"Some PassengerCar Company", "Some PassengerCar Model"};
	Bus bus{"Some Bus Company", "Some Bus Model"};
	Minivan minivan{"Some Minivan Company", "Some Minivan Model"};
	MinivanV minivanV{"Some MinivanV Company", "Some MinivanV Model"};
};
