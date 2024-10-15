#include "../inc/ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "Scavtrap Constructor called on " << name << std::endl;
    this->_hit_point = 100;
    this->_energy_point = 50;
    this->_attack_dmg = 20;
}

ScavTrap::ScavTrap(const ScavTrap &scavTrap) : ClapTrap(scavTrap._name)
{
    std::cout << "ScavTrap Copy constructor called on " << _name << std::endl;
    this->_name = scavTrap._name;
    this->_hit_point = scavTrap._hit_point;
    this->_energy_point = scavTrap._energy_point;
    this->_attack_dmg = scavTrap._attack_dmg;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &scavTrap)
{
    std::cout << "ScavTrap Affectation called on " << _name << std::endl;
    this->_name = scavTrap._name;
    this->_hit_point = scavTrap._hit_point;
    this->_energy_point = scavTrap._energy_point;
    this->_attack_dmg = scavTrap._attack_dmg;
    return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Scavtrap Destructor called on " << _name << std::endl;
    //ClapTrap.~ClapTrap();
}

void	ScavTrap::attack(std::string const& target)
{
    if (!_hit_point || !_energy_point)
        return;
    std::cout << "Scavtrap ATTACK of " << _name << std::endl;
}

void	ScavTrap::guardGate()
{
    std::cout << _name << " ScavTrap is now in Gate keeper mod" << std::endl;
}