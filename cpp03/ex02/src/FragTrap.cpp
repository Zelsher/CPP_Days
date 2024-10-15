#include "../inc/FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FragTrap Constructor called on " << name << std::endl;
    this->_hit_point = 100;
    this->_energy_point = 100;
    this->_attack_dmg = 30;
}

FragTrap::FragTrap(const FragTrap &fragTrap) : ClapTrap(fragTrap._name)
{
    std::cout << "ScavTrap Copy constructor called on " << _name << std::endl;
    this->_name = fragTrap._name;
    this->_hit_point = fragTrap._hit_point;
    this->_energy_point = fragTrap._energy_point;
    this->_attack_dmg = fragTrap._attack_dmg;
}

FragTrap& FragTrap::operator=(const FragTrap &fragTrap)
{
    std::cout << "ScavTrap Affectation called on " << _name << std::endl;
    this->_name = fragTrap._name;
    this->_hit_point = fragTrap._hit_point;
    this->_energy_point = fragTrap._energy_point;
    this->_attack_dmg = fragTrap._attack_dmg;
    return *this;
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