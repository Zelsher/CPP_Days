#include "../inc/Zombie.hpp"

int	main()
{
	Zombie *zombie;

	zombie = newZombie("test");
	randomChump("essaie");
	delete zombie;
	return 0;
}