/*
 * Fraction.h
 *
 *  Created on: Apr 17, 2021
 *      Author: user
 */

#ifndef INCLUDE_FRACTION_H_
#define INCLUDE_FRACTION_H_

#include <iostream>

namespace Cpp_OOP {

	class Fraction {
	private:
		int m_integerPart;
		int m_numerator;
		int m_denominator;
	public:
		Fraction(int numerator, int denominator);
		Fraction(int integerPart, int numerator, int denominator);
		Fraction(const Fraction& fraction);

		int getIntegerPart() const;
		int getNumerator() const;
		int getDenominator() const;

		void setIntegerPart(int i);
		void setNumerator(int i);
		void setDenominator(int i);

		void toSimple();
		void toMixed();

		Fraction* operator+(Fraction& addendum) const;
		Fraction* operator+(int addendum) const;
		Fraction* operator-(Fraction& add) const;
		Fraction* operator-(int add) const;
		Fraction* operator/(Fraction& divider) const;
		Fraction* operator/(int divider) const;
		Fraction* operator*(Fraction& divider) const;
		Fraction* operator*(int divider) const;

		virtual ~Fraction();


		friend std::ostream& operator<<(std::ostream& out, const Fraction &d1);
	};

	bool operator==(const Fraction& f1,const Fraction& f2);
	bool operator!=(const Fraction& f1,const Fraction& f2);

	std::ostream& operator<<(std::ostream& out, const Fraction &d1);
} /* namespace Cpp_OOP */

#endif /* INCLUDE_FRACTION_H_ */
