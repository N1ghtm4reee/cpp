#include "Zombie.hpp"

int main()
{
    randomChump("ayoub");
    Zombie* O = newZombie("akhrif");
    O->announce();
    delete O;
}
