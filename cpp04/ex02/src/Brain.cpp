#include "../inc/Animal.hpp"

Brain::Brain()
{
    std::cout << "Constructor called on Brain " << std::endl;
}

Brain::Brain(std::string idea)
{
    std::cout << "Constructor called on Brain " << std::endl;
    for (int i = 0; i <= 99; i++)
        _ideas[i] = idea;
}

Brain::Brain(const Brain &brain)
{
    for (int i = 0; i <= 99; i++)
        _ideas[i] = brain._ideas[i];
    std::cout << "Copy constructor called on Brain "  << std::endl;
}

Brain& Brain::operator=(const Brain &brain)
{
    for (int i = 0; i <= 99; i++)
        _ideas[i] = brain._ideas[i];
    std::cout << "Affectation called on Brain "  << std::endl;
    return *this;
}

Brain::~Brain()
{
    std::cout << "Destructor called on Brain " << std::endl;
}
