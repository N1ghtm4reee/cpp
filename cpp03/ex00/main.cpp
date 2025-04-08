#include "ClapTrap.hpp"
#include <iostream>

int main() {
    std::cout << "===== Test 1: Basic Construction =====" << std::endl;
    ClapTrap defaultTrap;
    ClapTrap namedTrap("Robo");
    ClapTrap copyTrap(namedTrap);

    std::cout << "\n===== Test 2: Attack Functionality =====" << std::endl;
    namedTrap.attack("Enemy");
    namedTrap.attack("Another Enemy");
    copyTrap.attack("Original's Enemy");

    std::cout << "\n===== Test 3: Take Damage =====" << std::endl;
    namedTrap.takeDamage(5);
    namedTrap.takeDamage(3);
    namedTrap.takeDamage(10); // Should reduce to 0 HP

    std::cout << "\n===== Test 4: Repair Functionality =====" << std::endl;
    ClapTrap repairableTrap("FixMe");
    repairableTrap.takeDamage(8);
    repairableTrap.beRepaired(5);
    repairableTrap.beRepaired(3);

    std::cout << "\n===== Test 5: Energy Management =====" << std::endl;
    ClapTrap energyTrap("Battery");
    for (int i = 0; i < 12; i++) {
        std::cout << "Action #" << i+1 << ": ";
        energyTrap.attack("Target");
    }

    std::cout << "\n===== Test 6: Assignment Operator =====" << std::endl;
    ClapTrap assignedTrap;
    assignedTrap = namedTrap;
    assignedTrap.attack("Assigned Target");

    std::cout << "\n===== Test 7: Edge Cases =====" << std::endl;
    ClapTrap deadTrap("DeadBot");
    deadTrap.takeDamage(15); // Should kill it
    deadTrap.attack("Shouldn't work");
    deadTrap.beRepaired(10); // Shouldn't work

    std::cout << "\n===== Destructors Called =====" << std::endl;
    return 0;
}
