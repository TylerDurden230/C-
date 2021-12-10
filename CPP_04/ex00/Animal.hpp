#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include "Const.hpp"

class Animal{
    protected:
        std::string type;

    public:
        Animal();
        ~Animal();
        virtual void makeSound() const ;
        virtual std::string getType() const;  
};


#endif