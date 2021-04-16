/*
 * Person.h
 *
 *  Created on: Apr 16, 2021
 *      Author: user
 */

#ifndef INCLUDE_PERSON_H_
#define INCLUDE_PERSON_H_
#include <string>

using namespace std;
namespace Cpp_OOP {

	class Person {
	private:
		string m_name;	// имя
		int m_age;		// возраст
		string m_sex;	// пол
		float m_weight;	// вес
	public:
		Person();
		Person(string& name, int age, string& sex, float weight);
		void setName(string& name);
		void setAge(int age);
		void setSex(string& sex);
		void setWeight(float weight);
		virtual ~Person();
	};

} /* namespace Cpp_OOP */

#endif /* INCLUDE_PERSON_H_ */
