#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
  this->_hitpoints = this->_dhitpoints;
  this->_energyPoints = this->_denergyPoints;
  this->_attackDamage = this->_dattackDammage;
  std::cout << "FragTrap " << name << " is born!" << std::endl;
}

FragTrap::~FragTrap()
{
  std::cout << "FragTrap " << this->_name << " is destroyed" << std::endl;
}

void FragTrap::highFivesGuys()
{
  if (this->_hitpoints <= 0)
  {
    std::cout << "FragTrap " << this->_name << " is dead" << std::endl;
    return;
  }
  if (this->_energyPoints <= 0)
  {
    std::cout << "FragTrap " << this->_name << " is out of energy" << std::endl;
    return;
  }
  this->_energyPoints -= 1;
  std::cout << "FragTrap " << this->_name << " gives a high five" << std::endl;
}