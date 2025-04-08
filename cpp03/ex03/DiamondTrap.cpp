#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("default_clap_name"), ScavTrap(), FragTrap()
{
    Name = "default";
    energyPoint = ScavTrap::energyPoint;
    std::cout << "DiamondTrap Default Constructor called\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap& obj)
{
    std::cout << "DiamondTrap copy Constructor called\n";
    *this = obj;
}

DiamondTrap::DiamondTrap(std::string _Name) : ClapTrap(_Name + "_clap_name"), ScavTrap(), FragTrap(), Name(_Name)
{
    energyPoint = ScavTrap::energyPoint;
    std::cout << "DiamondTrap Constructor called\n";
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap Destructor called\n";
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& obj)
{
    std::cout << "\n1\n1\n1";
    if (this != &obj)
    {
        Name = obj.Name;
        hitPoint = obj.hitPoint;
        energyPoint = obj.energyPoint;
        attackDamage = obj.attackDamage;
    }
    return *this;
}

void DiamondTrap::whoAmI()
{
    std::cout << "DiamonTrap name is : " << Name << std::endl;
    std::cout << "ClapTrap name is : " << ClapTrap::Name << std::endl;
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