#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Const.hpp"

class Cat: public Animal{
    public:
        Cat();
        ~Cat();
       virtual void makeSound() const;   
};


#endif