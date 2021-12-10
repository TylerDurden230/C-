#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include "Const.hpp"

class Animal{
    protected:
        std::string type;

    public:
        Animal();
        Animal(const Animal &original);
        virtual ~Animal();
        virtual void makeSound() const ;
        virtual std::string getType() const;  
        Animal &operator=(const Animal &original);
};


#endif