#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>
#include <string>

template <typename T>
void    swap(T & arg1, T &arg2)
{
	T arg3 = arg1;
	arg1 = arg2;
	arg2 = arg3;
}

template <typename T>
static T min(const T arg1, const T arg2)
{
	return (arg2 <= arg1? arg2 : arg1);
}

template <typename T>
static T max(const T arg1, const T arg2)
{
	return (arg2 >= arg1? arg2 : arg1);
}

class Awesome
{
public:
	Awesome( int n ) : _n( n ) {}
	Awesome & operator=(Awesome const & rhs){
	this->_n = rhs._n;
	return *this;}
	bool operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }
	bool operator!=( Awesome const & rhs ) const { return (this->_n != rhs._n); }
	bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
	bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); }
	bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); }
	bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); }
	int getN() const {return this->_n;}
private:
	int _n;
};

std::ostream & operator<<(std::ostream & o, Awesome const & awesome) 
{
	return o << awesome.getN();
}

#endif