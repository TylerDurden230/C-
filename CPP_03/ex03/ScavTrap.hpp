#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
    private:

    public:
        ScavTrap(std::string name);
        ScavTrap();
        ~ScavTrap();
        void guardGate();
        void attack(std::string const &target);
    protected:
        int _Energy;
};

#endif