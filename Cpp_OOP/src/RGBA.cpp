/*
 * RGBA.cpp
 *
 *  Created on: Apr 13, 2021
 *      Author: user
 */

#include "../include/RGBA.h"
#include <iostream>

using namespace Cpp_OOP;
RGBA::RGBA()
:m_red(0), m_green(0), m_blue(0), m_alpha(255) {
	// TODO Auto-generated constructor stub
}
RGBA::RGBA(std::uint8_t m_red, std::uint8_t m_green, std::uint8_t m_blue, std::uint8_t m_alpha)
:m_red(m_red), m_green(m_green), m_blue(m_blue), m_alpha(m_alpha){

}
void RGBA::print() {
	cout << "Red: " << (int)m_red <<  endl;
	cout << "Green: " << (int)m_green << endl;
	cout << "Blue: " << (int)m_blue << endl;
	cout << "Alpha: " << (int)m_alpha << endl;
}

RGBA::~RGBA() {
	// TODO Auto-generated destructor stub
}


