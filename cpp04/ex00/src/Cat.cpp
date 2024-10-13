#include "../inc/Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Constructor called on Cat " << std::endl;
	this->setType("Cat");
}

Cat::Cat(const Cat &cat) : Animal(cat)
{
	std::cout << "Copy constructor called on Cat " << std::endl;
}

Cat& Cat::operator=(const Cat &cat)
{
	std::cout << "Affectation called on Cat " << std::endl;
	Animal::operator=(cat);
	return *this;
}

Cat::~Cat()
{
	std::cout << "Destructor called on Cat " << std::endl;
}
