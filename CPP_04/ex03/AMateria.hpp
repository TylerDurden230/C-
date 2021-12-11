#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "Const.hpp"

class ICharacter;
class AMateria{
    protected:
        std::string type;

    public:
        AMateria(std::string const & type);
        AMateria(){};
        AMateria(const AMateria &original);
        virtual ~AMateria(){};
        std::string const & getType() const;
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
        AMateria &operator=(const AMateria &original);
};

#endif