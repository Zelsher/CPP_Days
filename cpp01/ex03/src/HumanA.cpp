#include "../inc/HumanA.hpp"

HumanA::HumanA(const std::string& new_name, Weapon& new_weapon) : name(new_name), weapon(new_weapon) 
{
}

void	HumanA::ATTACK()
{
	std::cout << name << " attacks with their " << weapon.GET_Type() << std::endl;
}