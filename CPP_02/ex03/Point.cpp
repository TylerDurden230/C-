

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

Fixed const &	Point::getX(void) const
{
	return (this->x);
}

Fixed const &	Point::getY(void) const
{
	return (this->y);
}

std::ostream& operator<<(std::ostream& os, const Point &p)
{
	os << "(x,y) = (" << p.getX() << "," << p.getY() << ")";
	return (os);
}

