#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>

# define RESET			"\033[0m"
# define CYAN			"\033[36m"

class outOfLimits: public std::exception
{
public:
	virtual const char* what() const throw()
	{
		return "Index out of limits";
	}
};

template <typename T>
class Array{

public:
	Array<T>() :_n(0), _array(nullptr){}
	Array<T>(unsigned int n) : _n(n), _array(new T[n]){}
	Array<T>(const Array<T> & rhs): _n(0), _array(nullptr)
	{
		std::cout << CYAN << "Copy constructor is called " << RESET << std::endl;
		*this = rhs;
	}

	T & operator[](unsigned int i) const 
	{
		if (i > this->getN())
			throw (outOfLimits());
		return this->_array[i];
	}

	Array<T> & operator=(const Array & rhs)
	{
		std::cout << CYAN << "Assignation operator is called" << RESET << std::endl;
		if (this != &rhs)
		{
			if (this->_n > 0)
				delete [] this->_array;
			if (rhs.getN() > 0)
				this->_array = new T[rhs.getN()]();
			this->_n = rhs._n;
			for (unsigned int i = 0; i < rhs.getN(); i++)
				_array[i] = rhs[i];
		}
		return *this;
	}

	~Array<T>()
	{
		std::cout << CYAN << "Destructor called " << RESET << std::endl;
		if (_n > 0)
			delete [] _array;
	}

	unsigned int getN() const 
	{
		return this->_n;
	}

private:
	unsigned int _n;
	T * _array;
};

#endif