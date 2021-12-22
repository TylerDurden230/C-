#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>

# define RESET			"\033[0m"
# define CYAN			"\033[36m"


class OutOfRange
{
    public:

};

template <typename T>
class Array
{
    public:
        Array<T>(){}
        Array<T>(unsigned int n) : _n(n){}

        Array<T>(const Array & rhs)
        {
            std::cout << "Copy constructor Called" << std::endl;
            this->_n = rhs._n;
            return *this;
        }

        //overload operator []
        Array<T> & operator[](const Array<T> & rhs)
        {

        }

        Array<T> & operator=(const Array<T> & rhs)
        {

        }

        unsigned int getN(){return _n}
        ~Array<T>()
        {
            delete [] _array;
        }

    private:
        unsigned int _n;
        T* _array;
};

#endif