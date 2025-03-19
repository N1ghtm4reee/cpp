#include "Zombie.hpp"

void Zombie::announce()
{
    std::cout << this->name << "\n";
}

Zombie::Zombie()
{
    std::cout << "Constructor : "  << " called\n";
}

Zombie::~Zombie()
{
    std::cout << "Destructor : " << this->name << " called\n";
}

void Zombie::setname(std::string name)
{
    this->name = name;
}
