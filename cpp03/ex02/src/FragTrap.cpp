#include "../inc/FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FragTrap Constructor called on " << name << std::endl;
    this->_hit_point = 100;
    this->_energy_point = 100;
    this->_attack_dmg = 30;
}


FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor called on " << _name << std::endl;
    //ClapTrap.~ClapTrap();
}


void	FragTrap::hightFivesGuys()
{
    std::cout << _name << " FragTrap gently ask for a high fives" << std::endl;
}