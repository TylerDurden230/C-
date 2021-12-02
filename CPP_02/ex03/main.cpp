

#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

bool	bsp( Point const a, Point const b, Point const c, Point const point);

int main( void ) {
	Point a(Fixed(7.8f), Fixed(-3.2f));
	Point b(Fixed(5.0f), Fixed(-2.5f));
	Point c(Fixed(-6.0f), Fixed(-8.0f));
	Point point(Fixed(2.4f), Fixed(-4.2f));

	std::cout << "A" << a << std::endl;
	std::cout << "B" << b << std::endl;
	std::cout << "C" << c << std::endl;
	std::cout << "Is P" << point << " in the ABC triangle??" << (bsp( a, b, c, point) ? " YES": " NO")<< std::endl;
	return 0;
}
