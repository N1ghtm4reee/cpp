#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name)
{
    
}

HumanB::~HumanB()
{
    
}

void HumanB::setWeapon(Weapon* weapon)
{
    this->weapon = weapon;
}

void HumanB::attack()
{
    if (this->weapon)
        std::cout << name << " attacks with their " << weapon->getType() << "\n";
}
