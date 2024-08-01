#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon 
{
	private:
		std::string	type;
	public:
		Weapon(std::string new_type);
		const std::string&	GET_Type();
		void	SET_Type(std::string new_type);
};

#endif
