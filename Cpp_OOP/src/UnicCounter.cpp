/*
 * UnicCounter.cpp
 *
 *  Created on: Apr 24, 2021
 *      Author: user
 */

#include "/home/user/Sources/GeekBrains_HW/Cpp_OOP/include/UnicCounter.h"

#include <set>

namespace Cpp_OOP {

UnicCounter::UnicCounter() {
	// TODO Auto-generated constructor stub

}
int UnicCounter::getUnicCount(const vector<int>& v) {
	std::set<int> s;
//	std::iterator search;
	for (int n : v) {
		auto search = s.find(n);
		if (s.empty() || search == s.end()) {
			s.insert(n);
		}
	}
	return s.size();
}

UnicCounter::~UnicCounter() {
	// TODO Auto-generated destructor stub
}

} /* namespace Cpp_OOP */
