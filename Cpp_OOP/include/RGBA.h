/*
 * RGBA.h
 *
 *  Created on: Apr 13, 2021
 *      Author: user
 */

#ifndef RGBA_H_
#define RGBA_H_

#include <cstdint>

using namespace std;
namespace Cpp_OOP
{
	class RGBA {
	private:
		 std::uint8_t m_red, m_green, m_blue, m_alpha;
	public:
		 RGBA();

		 RGBA(std::uint8_t m_red, std::uint8_t m_green, std::uint8_t m_blue, std::uint8_t m_alpha);

		void print();

		virtual ~RGBA();
	};
}
#endif /* RGBA_H_ */
