#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"

class Animal
{
	private :
		std::string			type;
	public:
		Animal();
		//Animal(std::string type);
		Animal(const Animal &animal);
		Animal &operator=(const Animal &animal);
		virtual ~Animal();
	
		std::string		getType() const;
		void			setType(std::string type);
		virtual void	makeSound() const;
};

#endif