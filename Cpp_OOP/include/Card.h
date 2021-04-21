/*
 * Card.h
 *
 *  Created on: Apr 17, 2021
 *      Author: user
 */

#ifndef INCLUDE_CARD_H_
#define INCLUDE_CARD_H_

#include "CardValue.h"
#include "Suit.h"

namespace Cpp_OOP {

class Card {
private:
	Suit m_suit;
	CardValue m_cardValue;
	bool m_isShow;
public:
	Card();
	void Flip();
	int GetValue();
	virtual ~Card();
};

} /* namespace Cpp_OOP */

#endif /* INCLUDE_CARD_H_ */
