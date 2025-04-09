#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
    private:
        std::string Name;
    public:
        DiamondTrap();
        DiamondTrap(const DiamondTrap &obj);
        DiamondTrap &operator=(const DiamondTrap &obj);
        ~DiamondTrap();
        DiamondTrap(std::string Name);
        void whoAmI();
        void attack(const std::string& target);
        // 
        unsigned int getHit();
        unsigned int getEnergy();
        unsigned int getDamage();
};

#endif