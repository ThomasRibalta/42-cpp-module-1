#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), weapon(NULL)
{
}

void HumanB::setWeapon(Weapon &weapon)
{
    //delete &this->weapon;
    this->weapon = &weapon;
}

void HumanB::attack()
{
    if (this->weapon) {
        std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
    } else {
        std::cout << this->name << " has no weapon" << std::endl;
    }
}
