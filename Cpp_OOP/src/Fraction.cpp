/*
 * Fraction.cpp
 *
 *  Created on: Apr 17, 2021
 *      Author: user
 */

#include "../include/Fraction.h"

namespace Cpp_OOP {

	Fraction::Fraction(int numerator, int denominator) : Fraction(0, numerator, denominator) {};

	Fraction::Fraction(int integerPart, int numerator, int denominator)
		:m_integerPart(integerPart), m_numerator(numerator), m_denominator(denominator) {};

	Fraction::Fraction(const Fraction& fraction)
		:m_integerPart(fraction.m_integerPart),m_numerator(fraction.m_numerator), m_denominator(fraction.m_denominator) {}

	int Fraction::getIntegerPart() const {
		return m_integerPart;
	};

	int Fraction::getNumerator() const {
		return m_numerator;
	};

	int Fraction::getDenominator() const {
		return m_denominator;
	};

	void Fraction::setIntegerPart(int i) {
		m_integerPart = i;
	}

	void Fraction::setNumerator(int i) {
		m_numerator = i;
	};

	void Fraction::setDenominator(int i) {
		m_denominator = i;
	};

	void Fraction::toSimple() {
		m_numerator += m_integerPart * m_denominator;
		m_integerPart = 0;
	};

	void Fraction::toMixed() {
		toSimple();
		m_integerPart = m_numerator / m_denominator;
		m_numerator -= m_integerPart *  m_denominator;
	};

	Fraction* Fraction::operator+(Fraction& addendum) const {
		return new Fraction{0,0} ;
	};
	Fraction* Fraction::operator+(int addendum) const {
		return new Fraction{0,0} ;
	};
	Fraction* Fraction::operator-(Fraction& add) const {
		return new Fraction{0,0} ;
	};
	Fraction* Fraction::operator-(int add) const {
		return new Fraction{0,0} ;
	};
	Fraction* Fraction::operator/(Fraction& divider) const {
		return new Fraction{0,0} ;
	};
	Fraction* Fraction::operator/(int divider) const {
		return new Fraction{0,0} ;
	};
	Fraction* Fraction::operator*(Fraction& divider) const {
		return new Fraction{0,0} ;
	};
	Fraction* Fraction::operator*(int divider) const {
		return new Fraction{0,0} ;
	};

//	bool Fraction::operator>(Fraction& divider) const {
//		return false;
//	};
//
//	bool Fraction::operator<(Fraction& divider) const {
//		return false;
//	};
//
//	bool Fraction::operator>=(Fraction& divider) const {
//		return false;
//	};
//
//	bool Fraction::operator<=(Fraction& divider) const {
//		return false;
//	};

	Fraction::~Fraction() {
		// TODO Auto-generated destructor stub
	}

	bool operator==(const Fraction& f1,const Fraction& f2) {
		return f1.getIntegerPart() == f2.getIntegerPart()
			&& f1.getNumerator() == f2.getNumerator()
			&& f1.getDenominator() == f2.getDenominator();
	};

	bool operator!=(const Fraction& f1,const Fraction& f2) {
			return f1.getIntegerPart() != f2.getIntegerPart()
				|| f1.getNumerator() != f2.getNumerator()
				|| f1.getDenominator() != f2.getDenominator();
	};

		bool operator>(const Fraction& f1,const Fraction& f2);
		bool operator<(const Fraction& f1,const Fraction& f2);
		bool operator>=(const Fraction& f1,const Fraction& f2);
		bool operator<=(const Fraction& f1,const Fraction& f2);

	std::ostream& operator<<(std::ostream& out, const Fraction &d1)
	{
		d1.m_integerPart != 0
			? out << d1.m_integerPart << " " << d1.m_numerator << "/" << d1.m_denominator
			: out << d1.m_numerator << "/" << d1.m_denominator;
		return out;
	}

} /* namespace Cpp_OOP */
