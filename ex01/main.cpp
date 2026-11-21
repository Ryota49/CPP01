#include "Zombie.hpp"

int main()
{
    Zombie *PtrZombie = zombieHorde(5, "Jean");

    delete[] PtrZombie;
    return (0);
}