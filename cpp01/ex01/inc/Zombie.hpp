#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <iomanip>

class Zombie 
{
	private :
		std::string	name;

	public :
		void	announce();
		Zombie(std::string new_name);
		Zombie();
		~Zombie();
		void	setName(std::string new_name);
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);
Zombie* zombieHorde(int N, std::string name);

#endif
