#include "../inc/HumanB.hpp"

HumanB::HumanB(std::string new_name)
{
	name = new_name;
	weapon = nullptr;
}
HumanB::~HumanB()
{
	
}
void	HumanB::ATTACK()
{
	std::cout << name << " attacks with their " << weapon->GET_Type() << std::endl;
}

void	HumanB::SET_Weapon(Weapon &new_weapon)
{
	weapon = &new_weapon;
	ATTACK();
}