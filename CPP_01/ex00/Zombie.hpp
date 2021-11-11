#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <string>
#include <new>

class Zombie {
	private:
		std::string _name;

	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();
		std::string getName();
		void 	setName(std::string name);
		void	annouce(void);
};

Zombie* newZombie( std::string name);
void randomChump( std::string name );

#endif