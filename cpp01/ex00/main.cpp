#include "Zombie.hpp"

int main()
{
    Zombie::randomChump("ayoub");
    Zombie* O;
    O = Zombie::newZombie("akhrif");
    O->announce();
    delete O;
}
