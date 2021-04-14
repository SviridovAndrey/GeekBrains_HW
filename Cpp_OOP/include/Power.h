/*
 * Power.h
 *
 *  Created on: Apr 13, 2021
 *      Author: user
 */

#ifndef POWER_H_
#define POWER_H_

namespace Cpp_OOP
{
	class Power {
	private:
		int num = 0;
		int pow = 0;
	public:
		Power();

		Power(int number, int power);

		void set(int number, int power);

		void calculate();

		virtual ~Power();
	};
}
#endif /* POWER_H_ */
