/*
 * Student.h
 *
 *  Created on: Apr 16, 2021
 *      Author: user
 */

#ifndef INCLUDE_STUDENT_H_
#define INCLUDE_STUDENT_H_
#include <string>
#include "Person.h"

using namespace std;

namespace Cpp_OOP {

	class Student : public Person {
	private:
		static int m_count;
		int m_year;
	public:
		Student();
		Student(const string& name, int age, const string& sex, float weight, int year);
		int getYear() const;
		void setYear(int year);
		static int getStudentCount();
		virtual ~Student();
		friend class StudentTest;
	};

} /* namespace Cpp_OOP */

#endif /* INCLUDE_STUDENT_H_ */
