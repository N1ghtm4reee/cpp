#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
    std::cout << "WrongCat Default Constructor has been called\n";
}

WrongCat::WrongCat(const WrongCat& obj)
{
    std::cout << "WrongCat Copy Constructor has been called\n";
    *this = obj;
}

WrongCat& WrongCat::operator=(const WrongCat& obj)
{
    std::cout << "WrongCat copy assignement has been called\n";
    if (this != &obj)
        type = obj.type;
    return *this;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat Desstructor has been called\n";
}

void WrongCat::makeSound() const
{
    std::cout << "WrongCat Sound\n";
}
