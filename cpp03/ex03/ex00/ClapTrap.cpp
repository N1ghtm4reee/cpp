#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : Name(""), hitPoint(10), energyPoint(10), attackDamage(0)
{
    std::cout << "Default Constructor called\n";
}

ClapTrap::ClapTrap(const ClapTrap& obj)
{
    std::cout << "copy Constructor called\n";
    *this = obj;
}

ClapTrap::ClapTrap(std::string _Name)
    : Name(_Name), hitPoint(10), energyPoint(10), attackDamage(0)
{
    std::cout << "Constructor called\n";
}

ClapTrap& ClapTrap::operator=(const ClapTrap& obj)
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

void ClapTrap::attack(const std::string& target)
{
    if (energyPoint > 0 && hitPoint > 0)
    {
        std::cout << "ClapTrap " << Name << "attacks " << target << ", causing " << attackDamage <<  " of damage!" << std::endl;
        energyPoint--;
    }
    else
        std::cout << "Can't attack" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (energyPoint > 0 && hitPoint > 0)
    {
        std::cout << "ClapTrap " << Name << "took " << amount << " of damage!" << std::endl;
        if (amount > hitPoint)
            hitPoint = 0;
        else
            hitPoint -= amount;
        energyPoint--;
    }
    else
        std::cout << "Can't take damage" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (energyPoint > 0 && hitPoint > 0)
    {
        std::cout << "ClapTrap " << Name << "repairs itself for 5 hit points!" << std::endl;
        hitPoint += amount;
        energyPoint--;
    }
    else
        std::cout << "Can't repair" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << Name << " Destructor called" << std::endl;
}
