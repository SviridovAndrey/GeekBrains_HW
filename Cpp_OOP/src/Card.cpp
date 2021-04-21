/*
 * Card.cpp
 *
 *  Created on: Apr 17, 2021
 *      Author: user
 */

#include "../include/Card.h"
#include "../include/CardValue.h"
#include <map>
#include <string>

namespace Cpp_OOP {

Card::Card() {
	// TODO Auto-generated constructor stub

}
void Card::Flip() {
	m_isShow = !m_isShow;
}
	int Card::GetValue() {
		switch(m_cardValue) {
			case CardValue::jack:
			case CardValue::queen:
			case CardValue::king:
				return 10;
			case CardValue::ace:
				return 1;
			default:
				return static_cast<int>(m_cardValue);
		}
	}
Card::~Card() {
	// TODO Auto-generated destructor stub
}

} /* namespace Cpp_OOP */
