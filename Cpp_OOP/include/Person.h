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
		Person(const string& name, int age, const string& sex, float weight);
		void setName(const string& name);
		string getName() const;
		void setAge(int age);
		int getAge() const;
		void setSex(const string& sex);
		string getSex() const;
		void setWeight(float weight);
		float getWeight() const;
		virtual ~Person();
		friend class PersonTest;
	};

} /* namespace Cpp_OOP */

#endif /* INCLUDE_PERSON_H_ */
