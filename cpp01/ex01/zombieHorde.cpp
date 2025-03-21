#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    if (N <= 0)
    {
        std::cerr << "Error: N must be greater than 0\n";
        exit(1);
    }
    Zombie* horde = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        std::stringstream ss;
        ss << (i + 1);
        horde[i].setname(name + ss.str());
    }
    return horde;
}
