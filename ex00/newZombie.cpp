#include "Zombie.hpp"

Zombie* newZombie (std::string name)
{
    Zombie* Zombieptr = new Zombie(name);

    std::cout << name << ": Has been created..." << std::endl;
    return (Zombieptr);
}