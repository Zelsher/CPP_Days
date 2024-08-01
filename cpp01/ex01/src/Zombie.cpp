#include "../inc/Zombie.hpp"

Zombie* newZombie(std::string name)
{
	Zombie	*new_zombie = new Zombie(name);
	return (new_zombie);
}

Zombie::Zombie(std::string new_name)
{
	name = new_name;
	announce();
}

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
	std::cout << "Deconstructeur sur " << name << std::endl;
}
void	Zombie::setName(std::string new_name)
{
	name = new_name;
	announce();
}


void	Zombie::announce()
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}