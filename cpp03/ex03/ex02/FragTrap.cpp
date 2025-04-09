#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap Default Constructor called\n";
}

FragTrap::FragTrap(const FragTrap& obj)
{
    std::cout << "FragTrap copy Constructor called\n";
    *this = obj;
}

FragTrap::FragTrap(std::string Name) : ClapTrap(Name)
{
    std::cout << "FragTrap Constructor called\n";
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor called\n";
}

FragTrap& FragTrap::operator=(const FragTrap& obj)
{
    if (this != &obj)
        ClapTrap::operator=(obj);
    return *this;
}

void FragTrap::highFivesGuys()
{
    std::cout << "positive high fives request\n";
}
