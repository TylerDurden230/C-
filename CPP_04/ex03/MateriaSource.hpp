#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    protected:
        AMateria*   _inventory[4];
        int         _size;
    public:
        MateriaSource();
        virtual ~MateriaSource();
        virtual void learnMateria(AMateria* m);
        virtual AMateria* createMateria(std::string const & type);
        virtual int getSize();
        virtual void equip(AMateria* m);
        virtual void unequip(int idx);
};

#endif