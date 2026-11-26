#include "Harl.hpp"

int main()
{
    Harl harl;

    std::cout << "DEBUG MESSAGE : " << std::endl;
    harl.complain("DEBUG");
    std::cout << "INFO MESSAGE : " << std::endl;
    harl.complain("INFO");
    std::cout << "WARNING MESSAGE : " << std::endl;
    harl.complain("WARNING");
    std::cout << "ERROR MESSAGE : " << std::endl;
    harl.complain("ERROR");
    harl.complain("ANYTHING");
    return (0);
}
