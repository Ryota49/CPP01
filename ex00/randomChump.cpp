#include "Zombie.hpp"

void randomChump(std::string name)
{
    Zombie localZombie(name);

    std::cout << name << ": Has been created..." << std::endl;
    localZombie.announce();
}