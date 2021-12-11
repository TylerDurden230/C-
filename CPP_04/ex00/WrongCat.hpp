#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"
#include "Const.hpp"

class WrongCat: public WrongAnimal{
    public:
        WrongCat();
        ~WrongCat();
       void makeSound() const;   
};


#endif