#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main() {
    ScavTrap scav;

    scav.attack("smito");
    scav.beRepaired(2);
    scav.takeDamage(5);
    scav.guardGate();

    return 0;
}
