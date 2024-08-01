#include "../inc/Weapon.hpp"

Weapon::Weapon(std::string new_type)
{
	type = new_type;
}
const std::string&	Weapon::GET_Type()
{
	return (type);
}
void	Weapon::SET_Type(std::string new_type)
{
	type = new_type;
}
