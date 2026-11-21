#include <iostream>
#include <string>

int main()
{
    std::string brain = "HI THIS IS BRAIN";
    std::string *stringPTR = &brain;
    std::string &stringREF = brain;

    std::cout << "Address of string = " << &brain << std::endl;
    std::cout << "Address of pointer = " << stringPTR << std::endl;
    std::cout << "Address of reference = " << &stringREF << std::endl;

    std::cout << "Value of string = " << brain << std::endl;
    std::cout << "Value of pointer = " << *stringPTR << std::endl;
    std::cout << "Value of reference = " << stringREF << std::endl;
}