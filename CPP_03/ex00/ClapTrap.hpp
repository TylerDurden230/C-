#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap {
	private:
		std::string _name;
        int _Hitpoints;
        int _Energy;
        int _Atk_dmg;

	public:
		ClapTrap();
		ClapTrap(std::string name);
		~ClapTrap();
		void takeDamage(unsigned int amount);
		void attack(std::string const &target);
        void beRepaired(unsigned int amount);
};

#endif