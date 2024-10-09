#include "../inc/ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "Constructor called on " << name << std::endl;
    this->_hit_point = 100;
    this->_energy_point = 50;
    this->_attack_dmg = 20;
}

ScavTrap::ScavTrap(const ScavTrap &scavtrap)
{
    (void)scavtrap;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &scavtrap)
{
    (void)scavtrap;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Destructor called on " << _name << std::endl;
    //ClapTrap.~ClapTrap();
}

void	ScavTrap::attack(std::string const& target)
{
    std::cout << "attack de scavtrap" << std::endl;
}

void	ScavTrap::guardGate()
{

    std::cout << "ScavTrap is now in Gate keeper mod" << std::endl;
}