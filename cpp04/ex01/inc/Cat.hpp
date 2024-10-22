#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"

class Cat : public Animal
{
	private :
		Brain	*_brain;
	public:
		Cat();
		Cat(const Cat &cat);
		Cat &operator=(const Cat &cat);
		virtual ~Cat();

		virtual void			makeSound() const;

		std::string		get_idea(int index);
		void			set_idea(int index, std::string new_idea);
};

#endif