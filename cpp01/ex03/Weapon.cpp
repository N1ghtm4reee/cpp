#include "Weapon.hpp"

Weapon::Weapon(std::string str) : type(str)
{

}

Weapon::~Weapon()
{

}

void Weapon::setType(std::string type)
{
    this->type = type;
}

const std::string& Weapon::getType( void )
{
    return this->type;
}
