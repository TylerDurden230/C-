#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Const.hpp"
#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal{
    private:
        Brain* brain;
    public:
        Cat();
        Cat(const Cat &original);
        virtual ~Cat();
        virtual void makeSound() const;
        Cat &operator=(const Cat &original);
        Brain &getBrain() const;
};


#endif