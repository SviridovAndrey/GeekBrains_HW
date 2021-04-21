/*
 * Figure.h
 *
 *  Created on: Apr 17, 2021
 *      Author: user
 */

#ifndef FIGURE_H_
#define FIGURE_H_

namespace Cpp_OOP {

	class Figure {
	protected:
		static constexpr float PI = 3.14159265;
	public:
		Figure();
		virtual float area() const = 0;
		float getPI() const;
		virtual ~Figure();
	};

} /* namespace Cpp_OOP */

#endif /* FIGURE_H_ */
