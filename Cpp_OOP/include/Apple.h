/*
 * Apple.h
 *
 *  Created on: Apr 16, 2021
 *      Author: user
 */

#ifndef APPLE_H_
#define APPLE_H_

#include "Fruit.h"

namespace Cpp_OOP {

class Apple: public Fruit {
public:
	Apple();
	Apple(const string& color);
	Apple(const string& name, const string& color);
	virtual ~Apple();
};

} /* namespace Cpp_OOP */

#endif /* APPLE_H_ */
