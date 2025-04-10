#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
    std::cout << "WrongAnimal Default Constructor has been called\n";
}

WrongAnimal::WrongAnimal(std::string _type) : type(_type)
{
    std::cout << "WrongAnimal Default Constructor has been called\n";
}

WrongAnimal::WrongAnimal(WrongAnimal& obj)
{
    std::cout << "WrongAnimal Copy Constructor has been called\n";
    *this = obj;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal& obj)
{
    std::cout << "WrongAnimal copy assignement has been called\n";
    if (this != &obj)
        this->type = obj.type;
    return *this;
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal Sound\n";
}

std::string WrongAnimal::getType() const
{
    return type;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal Desstructor has been called\n";
}
