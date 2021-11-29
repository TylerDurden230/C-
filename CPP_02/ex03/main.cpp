

#include <iostream>
#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed c(Fixed(b) + Fixed(b));
	Fixed d( c / Fixed(4) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << "*********************************" << std::endl;
	std::cout << Fixed::min( a, b ) << std::endl;
	std::cout << c << std::endl;
	std::cout << d << std::endl;
	return 0;
}
