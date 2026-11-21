#include <Weapon.hpp>

Weapon::Weapon(std::string type) : _type(type)
{
    if (this->_type.empty())
        this->_type = "hands";
}

Weapon::~Weapon()
{
}

std::string &Weapon::getType()
{
    return (this->_type);
}

void Weapon::setType(std::string type)
{
    this->_type = type;
    if (this->_type.empty())
        this->_type = "hands";
}

