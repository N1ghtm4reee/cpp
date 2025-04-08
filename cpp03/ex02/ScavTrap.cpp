#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "ScavTrap Default Constructor called\n";
}

ScavTrap::ScavTrap(const ScavTrap& obj)
{
    std::cout << "ScavTrap copy Constructor called\n";
    *this = obj;
}

ScavTrap::ScavTrap(std::string Name) : ClapTrap(Name)
{
    std::cout << "ScavTrap Constructor called\n";
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor called\n";
}

ScavTrap& ScavTrap::operator=(const ScavTrap& obj)
{
    if (this != &obj)
    {
        Name = obj.Name;
        hitPoint = obj.hitPoint;
        energyPoint = obj.energyPoint;
        attackDamage = obj.attackDamage;
    }
    return *this;
}

void ScavTrap::attack(const std::string& target)
{
    if (energyPoint > 0 && hitPoint > 0)
    {
        std::cout << "Scavtrap " << Name << "attacks " << target << ", causing " << attackDamage <<  " of damage!" << std::endl;
        energyPoint--;
    }
    else
        std::cout << "Scavtrap Can't attack" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap guardGate called\n";
}
