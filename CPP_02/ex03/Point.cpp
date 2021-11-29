

#include "Point.hpp"

Point::Point():x(0),y(0)
{
}

Point::Point(const Fixed &a, const Fixed &b):x(a),y(b)
{
}

Point::Point(const Point &original):x(original.x),y(original.y)
{
}

Point::~Point()
{
}

Fixed		Point::getX(void)
{
	return (this->x);
}

Fixed		Point::getY(void)
{
	return (this->y);
}

void	Point::setX(Fixed &f)
{
	//x.setRawBits(f.getRawBits());
	x.setRawBits(0);
}

Point&	Point::operator=(const Point &b)
{
	raw = b.raw;
	return *this;
}
