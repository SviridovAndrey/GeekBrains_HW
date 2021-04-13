/*
 * RGBA.h
 *
 *  Created on: Apr 13, 2021
 *      Author: user
 */

#ifndef RGBA_H_
#define RGBA_H_

#include <iostream>
#include <cstdint>

using namespace std;

class RGBA {
private:
	 std::uint8_t m_red, m_green, m_blue, m_alpha;
public:
	 RGBA():m_red(0), m_green(0), m_blue(0), m_alpha(255){};

	 RGBA(std::uint8_t m_red, std::uint8_t m_green, std::uint8_t m_blue, std::uint8_t m_alpha)
	 :m_red(m_red), m_green(m_green), m_blue(m_blue), m_alpha(m_alpha){};

	void print(){
		cout << "Red: " << m_red <<  endl;
		cout << "Green: " << m_green << endl;
		cout << "Blue: " << m_blue << endl;
		cout << "Alpha: " << m_alpha << endl;
	}

	~RGBA(){};
};

#endif /* RGBA_H_ */
