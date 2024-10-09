#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : ClapTrap
{ 
	public:
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &scavtrap);
		ScavTrap &operator=(const ScavTrap &scavtrap);
		~ScavTrap();

		void	attack(std::string const& target);
		void	guardGate();

};

#endif