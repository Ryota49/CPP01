#include "Zombie.hpp"

Zombie* zombieHorde (int N, std::string name)
{
    if (N <= 0)
        return (NULL);
    Zombie* Zombieptr = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        Zombieptr[i].SetName(name);
        Zombieptr[i].announce();
    }
    return (Zombieptr);
}