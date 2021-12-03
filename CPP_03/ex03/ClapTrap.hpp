#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>
#define Black "\e[0;30m"
#define RED "\e[0;31m"    
#define GREEN "\e[0;32m"
#define YELLOW "\e[0;33m" 
#define Blue "\e[0;34m"   
#define PURPLE "\e[0;35m" 
#define CYAN "\e[0;36m"   
#define White "\e[0;37m"
#define RESET "\e[0m"

class ClapTrap {
	protected:
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