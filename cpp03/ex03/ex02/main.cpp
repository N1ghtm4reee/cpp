#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

int main() {
    FragTrap frag;

    frag.attack("smito");
    frag.beRepaired(5);
    frag.takeDamage(2);
    return 0;
}
