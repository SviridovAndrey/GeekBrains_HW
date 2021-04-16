/*
 * Cpp_OOP.cpp
 *
 *  Created on: Apr 13, 2021
 *      Author: user
 */

#include <iostream>
#include <cstdint>
#include "include/Student.h"
#include "include/Apple.h"
#include "include/Banana.h"
#include "include/GrannySmith.h"

using namespace std;
using namespace Cpp_OOP;

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
	cout << "Created " << Student::getStudentCount() << " student(s)." << endl;
	Student *student1 = new Student("Anton", 18, "male", 75.5, 2020 );

	cout << "Added " << student1->getName() << " " << student1->getAge() << " year old " << student1->getSex() << endl;
	cout << "Created " << Student::getStudentCount() << " student(s)." << endl;

	Student *student2 = new Student("Maria", 19, "female", 63.8, 2019 );

	cout << "Added " << student2->getName() << " " << student2->getAge() << " year old " << student2->getSex() << endl;
	cout << "Created " << Student::getStudentCount() << " student(s)." << endl;

	Student student3("Mark", 21, "male", 79.2, 2018 );

	cout << "Added " << student3.getName() << " " << student3.getAge() << " year old " << student3.getSex() << endl;
	cout << "Created " << Student::getStudentCount() << " student(s)." << endl;

	Student student4("Jone", 22, "male", 90, 2017 );

	cout << "Added " << student4.getName() << " " << student4.getAge() << " year old " << student4.getSex() << endl;
	cout << "Created " << Student::getStudentCount() << " student(s)." << endl;

	Student student5("Klare", 17, "female", 58.3, 2021 );

	cout << "Added " << student5.getName() << " " << student5.getAge() << " year old " << student5.getSex() << endl;
	cout << "Created " << Student::getStudentCount() << " student(s)." << endl;

	cout << "Removing " << student1->getName() << " " << student1->getAge() << " year old " << student1->getSex() << endl;
	delete student1;
	cout << "Created " << Student::getStudentCount() << " student(s)." << endl;

	cout << "Removed " << student2->getName() << " " << student2->getAge() << " year old " << student2->getSex() << endl;
	delete student2;
	cout << "Created " << Student::getStudentCount() << " student(s)." << endl;
};

void task_2() {
	Apple a("red");
	Banana b;
	GrannySmith c;

	std::cout << "My " << a.getName() << " is " << a.getColor() << ".\n";
	std::cout << "My " << b.getName() << " is " << b.getColor() << ".\n";
	std::cout << "My " << c.getName() << " is " << c.getColor() << ".\n";

};
