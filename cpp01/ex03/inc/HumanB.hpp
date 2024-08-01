#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB
{
	private:
		std::string	name;
		Weapon	*weapon;
	public:
		HumanB(std::string new_name);
		~HumanB();
		void	ATTACK();
		void	SET_Weapon(Weapon &new_weapon);
};

#endif
