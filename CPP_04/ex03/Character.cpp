#include "Character.hpp"

Character::Character(){
    this->_size = 0;
	for (int i = 0; i < 4; i++){
		this->_inventory[i] = NULL;
	}
}

Character::Character(std::string const & name) : _name(name)
{
	std::cout << "Character(" << name << ") called" << std::endl;
}

Character::Character(const Character &original)
{
	std::cout << "Character(Character &original) costructor called" << std::endl;
	*this = original;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++){
		if (this->_inventory[i] != NULL){
			delete this->_inventory[i];
		}
	}
}

Character	&Character::operator = (const Character &original){
	this->_name = original.getName();
	for (int i = 0; i < original.getSize(); i++){
		this->equip(original._inventory[i]->clone());
	}
	return *this;
}

std::string const &Character::getName() const
{
    return this->_name;
}

int Character::getSize() const
{
	return this->_size;
}

void Character::equip(AMateria* m)
{
	if (this->_size < 4){
		this->_inventory[this->_size++] = m;
	}
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < this->getSize() ){
		for (int i = idx; i < this->getSize() - 1; i++){
			this->_inventory[i] = this->_inventory[i+1];
			this->_inventory[i+1] = NULL;
		}
		this->_size--;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if ( idx >= 0 && idx < this->_size){
		this->_inventory[idx]->use(target);
	}
}