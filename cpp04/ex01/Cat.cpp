#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    brain = new Brain;
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
    {
        type = obj.type;
        brain = new Brain;
        for (int i = 0; i < 100; i++)
            brain[i] = obj.brain[i];
    }
    return *this;
}

Cat::~Cat()
{
    delete brain;
    std::cout << "Cat Desstructor has been called\n";
}

void Cat::makeSound() const
{
    std::cout << "Cat Sound\n";
}
