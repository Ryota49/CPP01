#include <HumanA.hpp>

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon_ref(weapon)
{
    if (this->_name.empty())
        this->_name = "HumanA";
}

HumanA::~HumanA()
{
}

void HumanA::attack()
{
    std::cout << this->_name << " attacks with their " << this->_weapon_ref.getType() << std::endl;
}