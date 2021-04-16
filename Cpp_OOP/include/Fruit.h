/*
 * Fruit.h
 *
 *  Created on: Apr 16, 2021
 *      Author: user
 */

#ifndef INCLUDE_FRUIT_H_
#define INCLUDE_FRUIT_H_
#include <string>

using namespace std;

namespace Cpp_OOP {

	class Fruit {
	private:
		string m_name;
		string m_color;
	public:
		Fruit();
		Fruit(const string& name, const string& color);
		string getName() const;
		string getColor() const;
		virtual ~Fruit();
	};

} /* namespace Cpp_OOP */

#endif /* INCLUDE_FRUIT_H_ */
