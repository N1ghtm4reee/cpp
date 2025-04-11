#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int main()
{
    Animal animal;
    Dog dog;
    Cat cat;

    cat.makeSound();
    dog.makeSound();
}
