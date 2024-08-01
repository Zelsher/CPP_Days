#include "../inc/Zombie.hpp"

Zombie::Zombie(std::string new_name)
{
	name = new_name;
	announce();
}
Zombie::~Zombie()
{
	std::cout << "Deconstructeur sur " << name << std::endl;
}

void	Zombie::announce()
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}