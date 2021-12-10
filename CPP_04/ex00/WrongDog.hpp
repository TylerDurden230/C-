#ifndef WRONGDOG_HPP
#define WRONGDOG_HPP

#include <iostream>
#include "WrongAnimal.hpp"
#include "Const.hpp"

class WrongDog: public WrongAnimal{
    public:
        WrongDog();
        ~WrongDog();
        void makeSound() const;   
};


#endif