#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
    std::cout << "Animal Default Constructor has been called\n";
}

Animal::Animal(std::string _type) : type(_type)
{
    std::cout << "Animal Default Constructor has been called\n";
}

Animal::Animal(Animal& obj)
{
    std::cout << "Animal Copy Constructor has been called\n";
    *this = obj;
}

Animal& Animal::operator=(Animal& obj)
{
    std::cout << "Animal copy assignement has been called\n";
    if (this != &obj)
        this->type = obj.type;
    return *this;
}

void Animal::makeSound() const
{
    std::cout << "Animal Sound\n";
}

std::string Animal::getType() const
{
    return type;
}

Animal::~Animal()
{
    std::cout << "Animal Desstructor has been called\n";
}
