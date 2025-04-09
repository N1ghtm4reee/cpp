#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
     : Name(""), hitPoint(100), energyPoint(50), attackDamage(20)
{
    std::cout << "ClapTrap Default Constructor called\n";
}

ClapTrap::ClapTrap(const ClapTrap& obj)
{
    std::cout << "ClapTrap copy Constructor called\n";
    *this = obj;
}

ClapTrap::ClapTrap(std::string _Name)
    : Name(_Name), hitPoint(100), energyPoint(50), attackDamage(20)
{
    std::cout << "ClapTrap Constructor called\n";
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
        std::cout << "ClapTrap Can't attack" << std::endl;
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
        std::cout << "ClapTrap Can't take damage" << std::endl;
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
        std::cout << "ClapTrap Can't repair" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << Name << " Destructor called" << std::endl;
}
