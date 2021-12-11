#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>
#include "Const.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure: public AMateria{
    protected:
    public:
        Cure();
        Cure(Cure &original);
        virtual ~Cure();
        virtual AMateria* clone() const;
        virtual void use(ICharacter& target);
        Cure &operator=(const Cure &original);
};

#endif