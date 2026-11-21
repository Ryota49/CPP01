#include "Harl.hpp"

int main(int argc, char **argv)
{
    Harl harl;
    if (argc != 2 || !argv[1])
    {
        std::cerr << "Please enter one argument only" << std::endl;
        return (1);
    }
    harl.complain(argv[1]);
    return (0);
}