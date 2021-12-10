#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Const.hpp"
#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal{
    private:
        Brain* brain;
    public:
        Dog();
        Dog(const Dog &original);
        virtual ~Dog();
        virtual void makeSound() const;
        Dog &operator=(const Dog &original);
        Brain &getBrain() const;  
};


#endif