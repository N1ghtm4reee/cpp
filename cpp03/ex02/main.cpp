#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

int main() {
    ScavTrap scav;
    ClapTrap clap;
    FragTrap frag;

    scav.attack("smito");
    scav.beRepaired(2);
    scav.takeDamage(5);
    scav.guardGate();

    std::cout << "----------------------\n";
    clap.attack("smito");
    clap.beRepaired(5);
    clap.takeDamage(2);

    std::cout << "----------------------\n";
    frag.attack("smito");
    frag.beRepaired(5);
    frag.takeDamage(2);
    return 0;
}
