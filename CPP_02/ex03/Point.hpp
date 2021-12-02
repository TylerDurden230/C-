

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
		Fixed	const &getX(void) const;
		Fixed	const &getY(void) const;
		Point	&operator=(const Point &b);
};

std::ostream& operator<<(std::ostream& os, const Point &p);