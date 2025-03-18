#include "Zombie.hpp"

void Zombie::announce()
{
    std::cout << this->name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie()
{
    std::cout << "Constructor called\n";
}

Zombie::Zombie(std::string name)
{
    std::cout << "Constructor : " << name << " Constructed\n";
}

Zombie::~Zombie()
{
    std::cout << "Destructor : " << name << " Destroyed\n";
}
