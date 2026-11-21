#include <HumanB.hpp>

HumanB::HumanB(std::string name) : _name(name), _weapon_ptr(NULL)
{
    if (this->_name.empty())
        this->_name = "HumanB";
}

HumanB::~HumanB()
{
}

void HumanB::attack()
{
    if (_weapon_ptr == NULL)
    {
        std::cout << this->_name << " attacks with their hands" << std::endl;
    }
    else
        std::cout << this->_name << " attacks with their " << this->_weapon_ptr->getType() << std::endl;
}

void HumanB::setWeapon(Weapon& weapon_ptr)
{
    this->_weapon_ptr = &weapon_ptr;
}