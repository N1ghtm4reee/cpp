#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "Cat Default Constructor has been called\n";
}

Cat::Cat(const Cat& obj)
{
    std::cout << "Cat Copy Constructor has been called\n";
    *this = obj;
}

Cat& Cat::operator=(const Cat& obj)
{
    std::cout << "Cat copy assignement has been called\n";
    if (this != &obj)
        type = obj.type;
    return *this;
}

Cat::~Cat()
{
    std::cout << "Cat Desstructor has been called\n";
}

void Cat::makeSound() const
{
    std::cout << "Cat Sound\n";
}
