#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

# define RESET			"\033[0m"
# define CYAN			"\033[36m"

template <typename T>
void    iter(T* array, int lenght, void f(T const &array))
{
	for (int i = 0; i < lenght; i++)
		f(array[i]);
}

template<typename T>
void print( T const & x ) {
	std::cout << x << std::endl;
	return;
}

template<typename T>
void colorPrint( T const & x ) {
	std::cout << CYAN << x << RESET << std::endl;
	return;
}

class Awesome{
public:
	Awesome( void ) : _n( 42 ) { return; }
	int get( void ) const { return this->_n; }

private:
	int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

#endif