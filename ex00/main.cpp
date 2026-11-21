#include "Zombie.hpp"

int main()
{
    Zombie *zombieHeap;

    zombieHeap = newZombie("Jean");
    zombieHeap->announce();
    randomChump("Adrien");
    delete zombieHeap;
    return (0);
}
