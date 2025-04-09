#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
#include <iostream>

int main() {
    DiamondTrap d;

    d.whoAmI();
    std::cout << "Hit points : " << d.getHit() << std::endl;
    std::cout << "damage : " << d.getDamage() << std::endl;
    std::cout << "energy : " << d.getEnergy() << std::endl;
    d.attack("test");
    return 0;
}
