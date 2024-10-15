#include "../inc/ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hit_point(10), _energy_point(10), _attack_dmg(0)
{
    std::cout << "ClapTrap Constructor called on " << _name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &claptrap)
{
    this->_name = claptrap._name;
    this->_hit_point = claptrap._hit_point;
    this->_energy_point = claptrap._energy_point;
    this->_attack_dmg = claptrap._attack_dmg;
    std::cout << "ClapTrap Copy constructor called on " << _name << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &claptrap)
{
    this->_name = claptrap._name;
    this->_hit_point = claptrap._hit_point;
    this->_energy_point = claptrap._energy_point;
    this->_attack_dmg = claptrap._attack_dmg;
    std::cout << "ClapTrap Affectation called on " << _name << std::endl;
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destructor called on " << _name << std::endl;
}


void	ClapTrap::attack(const std::string &target)
{
    std::cout << "ClapTrap attack called by " << _name << " on " << target << " causing " << _attack_dmg << " damage" << std::endl;
    if (!_hit_point || !_energy_point)
        return;
    //attack
    _energy_point--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap takeDamage called on " << _name << " causing " << amount << " damage" << std::endl;
    if (!_hit_point || !_energy_point)
        return;
    if (_hit_point - amount < 0)
    {
        _hit_point = 0;
        return;
    }
    _hit_point -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "ClapTrap beRepaired called on " << _name << " reparing " << amount << " hp " << std::endl;
    if (!_hit_point || !_energy_point)
        return;
    _hit_point += amount;
    _energy_point--;
}

