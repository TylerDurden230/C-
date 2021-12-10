#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include "Const.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice: public AMateria{
    protected:
    public:
        Ice();
        virtual ~Ice();
        virtual AMateria* clone() const;
        virtual void use(ICharacter& target);
};


#endif