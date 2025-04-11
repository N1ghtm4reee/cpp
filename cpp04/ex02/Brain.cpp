#include "Brain.hpp"

Brain::Brain()
{
    for (int i = 0; i < 100; i++)
        ideas[i] = "";
    std::cout << "Brain Default Constructor has been called\n";
}

Brain::Brain(Brain& obj)
{
    std::cout << "Brain Copy Constructor has been called\n";
    *this = obj;
}

Brain& Brain::operator=(Brain& obj)
{
    std::cout << "Brain copy assignement has been called\n";
    if (this != &obj)
    {
        for (int i = 0; i < 100; i++)
            ideas[i] = obj.ideas[i];
    }
    return *this;
}

Brain::~Brain()
{
    std::cout << "Brain Desstructor has been called\n";
}
