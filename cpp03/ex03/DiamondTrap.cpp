#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    Name = "default";
    energyPoint = 50;
    std::cout << "DiamondTrap Default Constructor called\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap& obj)
{
    std::cout << "DiamondTrap copy Constructor called\n";
    *this = obj;
}

DiamondTrap::DiamondTrap(std::string _Name) : ClapTrap(_Name + "_clap_name"), Name(_Name)
{
    energyPoint = 50;
    std::cout << "DiamondTrap Constructor called\n";
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap Destructor called\n";
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& obj)
{
    if (this != &obj)
    {
        ClapTrap::operator=(obj);
        Name = obj.Name;
    }
    return *this;
}

void DiamondTrap::whoAmI()
{
    std::cout << "DiamonTrap name is : " << Name << std::endl;
    std::cout << "ClapTrap name is : " << ClapTrap::Name << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}

// 
unsigned int DiamondTrap::getDamage()
{
    return attackDamage;
}

unsigned int DiamondTrap::getEnergy()
{
    return energyPoint;
}

unsigned int DiamondTrap::getHit()
{
    return hitPoint;
}
