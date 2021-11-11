#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <iomanip>
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

Zombie* zombieHorde( int N, std::string name);

#endif