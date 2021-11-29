

#pragma once
#include "Fixed.hpp"

class Point
{
	private:
		const Fixed x;
		const Fixed y;
	public:
		Point();
		~Point();
		Point(const Point &original);
		Point(const Fixed &a, const Fixed &b);
		Fixed	getX(void);
		Fixed	getY(void);
		void	setX(Fixed &f);
		Point	&operator=(const Point &b);
};
