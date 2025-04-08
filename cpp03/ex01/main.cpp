#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main() {
    ScavTrap scav;
    ClapTrap clap;

    scav.attack("smito");
    scav.beRepaired(2);
    scav.takeDamage(5);
    scav.guardGate();

    std::cout << "----------------------\n";
    clap.attack("smito");
    clap.beRepaired(5);
    clap.takeDamage(2);
    return 0;
}
