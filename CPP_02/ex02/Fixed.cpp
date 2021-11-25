

#include "Fixed.hpp"
#include <iostream>

const int Fixed::Q = 8;

Fixed::Fixed()
{
	//std::cout << "Default constructor called" << std::endl;
	raw = 0;
}
Fixed::Fixed(const int num)
{
	//std::cout << "Int constructor called" << std::endl;
	raw = (num << Q);
}

Fixed::Fixed(const float num)
{
	//std::cout << "Float constructor called" << std::endl;
	raw = (round((num) * (1 << Q)));
}

Fixed::~Fixed()
{
	//std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &original)
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = original;
}

Fixed&	Fixed::operator=(const Fixed &b)
{
	//std::cout << "Assignation operator called" << std::endl;
	raw = b.raw;
	return *this;
}

bool Fixed::operator>(const Fixed &b)
{
	return (raw > b.raw);
}

bool Fixed::operator<(const Fixed &b)
{
	return (raw < b.raw);
}

bool Fixed::operator>=(const Fixed &b)
{
	return (raw >= b.raw);
}

bool Fixed::operator<=(const Fixed &b)
{
	return (raw <= b.raw);
}

bool Fixed::operator==(const Fixed &b)
{
	return (raw == b.raw);
}

bool Fixed::operator!=(const Fixed &b)
{
	return (raw != b.raw);
}

Fixed	Fixed::operator+(const Fixed &b)
{
	return (Fixed(this->toFloat() + b.toFloat()));
}

Fixed	Fixed::operator-(const Fixed &b)
{
	return (Fixed(this->toFloat() - b.toFloat()));
}

Fixed	Fixed::operator*(const Fixed &b)
{
	return (Fixed(this->toFloat() * b.toFloat()));
}

Fixed	Fixed::operator/(const Fixed &b)
{
	return (Fixed(this->toFloat() / b.toFloat()));
}

std::ostream& operator<<(std::ostream& os, const Fixed &fx)
{
	os << fx.toFloat();
	return (os);
}

Fixed	&Fixed::operator++()
{
	this->setRawBits(this->raw + 1);
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed i = *this;
	++*this;
	return (i);
}

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	return (a <= b) ? a : b;
}

const	Fixed	&Fixed::min(const Fixed &a, const Fixed &b)
{
	Fixed t = a;
	return (t <= b) ? a : b;
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	return (a >= b) ? a : b;
}

const	Fixed	&Fixed::max(const Fixed &a, const Fixed &b)
{
	Fixed t = a;
	return (t >= b) ? a : b;
}


int		Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return (raw);
}

void	Fixed::setRawBits(int const raw_)
{
	raw = raw_;
}

float	Fixed::toFloat() const
{
	return (float(raw) / (1 << Q));
}

int		Fixed::toInt() const
{
	return  (raw >> Q); // tolgo a raw (in binario) le ultime Q cifre che sono le cifre dopo la virgola in fixed point
}
