
#include <iostream>
#include "Fixed.hpp"

//Overload di un operatore: Ridefinire il comportamento dell'operatore stesso 
//quando si opera con due oggetti di una classe. 

int main( void ) {
	Fixed a;
	Fixed b( a );
	Fixed c;
	c = b;
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	return 0;
}
