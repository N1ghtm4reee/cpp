#include "Zombie.hpp"

void Zombie::announce()
{
    std::cout << this->name << " : BraiiiiiiinnnzzzZ...\n";
}

Zombie::Zombie()
{
    std::cout << "Default constructor called\n";
}

Zombie::Zombie(std::string name) : name(name)
{
    std::cout << "Constructor : " << name << " Constructed\n";
}

Zombie::~Zombie()
{
    std::cout << "Destructor : " << name << " Destroyed\n";
}

void Zombie::setname(std::string name)
{
    this->name = name;
}
