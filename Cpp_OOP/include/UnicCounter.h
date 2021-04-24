/*
 * UnicCounter.h
 *
 *  Created on: Apr 24, 2021
 *      Author: user
 */

#ifndef INCLUDE_UNICCOUNTER_H_
#define INCLUDE_UNICCOUNTER_H_

#include <vector>

using namespace std;

namespace Cpp_OOP {

class UnicCounter {
public:
	UnicCounter();
	int getUnicCount(const vector<int>& v);
	virtual ~UnicCounter();
};

} /* namespace Cpp_OOP */

#endif /* INCLUDE_UNICCOUNTER_H_ */
