#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Const.hpp"

class Cat: public Animal{
    public:
        Cat();
        virtual ~Cat();
        virtual void makeSound() const;   
};


#endif