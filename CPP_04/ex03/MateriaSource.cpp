#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
    this->_size = 0;
	for (int i = 0; i < 4; i++){
		this->_inventory[i] = NULL;
	}
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++){
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
}

int MateriaSource::getSize()
{
	return this->_size;
}

void MateriaSource::equip(AMateria* m)
{
	if (this->_size < 4){
		this->_inventory[this->_size++] = m;
	}
}

void MateriaSource::unequip(int idx)
{
	if (idx >= 0 && idx < this->getSize() ){
		for (int i = idx; i < this->getSize() - 1; i++){
			this->_inventory[i] = this->_inventory[i+1];
			this->_inventory[i+1] = NULL;
		}
		this->_size--;
	}
}

void MateriaSource::learnMateria(AMateria* m)
{
    this->equip(m);
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < this->_size; i++){
        if (this->_inventory[i]->getType() == type)
            return this->_inventory[i]->clone();
    }
    return 0;
}