#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "Const.hpp"
#include "ICharacter.hpp"

class Character: public ICharacter{
    protected:
        std::string _name;
        AMateria*   _inventory[4];
        int         _size;
    public:
        Character();
        Character(std::string const & name);
        Character(const Character &original);
        virtual ~Character();
        virtual std::string const & getName() const;
        virtual int getSize() const;
        virtual void equip(AMateria* m);
        virtual void unequip(int idx);
        virtual void use(int idx, ICharacter& target);
        Character &operator=(const Character &original);
};


#endif