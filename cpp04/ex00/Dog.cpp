#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "Dog Default Constructor has been called\n";
}

Dog::Dog(const Dog& obj)
{
    std::cout << "Dog Copy Constructor has been called\n";
    *this = obj;
}

Dog& Dog::operator=(const Dog& obj)
{
    std::cout << "Dog copy assignement has been called\n";
    if (this != &obj)
        type = obj.type;
    return *this;
}

Dog::~Dog()
{
    std::cout << "Dog Desstructor has been called\n";
}

void Dog::makeSound() const
{
    std::cout << "Dog Sound\n";
}
