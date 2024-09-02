#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
  this->_hitpoints = 100;
  this->_energyPoints = 100;
  this->_attackDamage = 30;
  std::cout << "FragTrap " << name << " is born!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
  std::cout << "FragTrap " << this->_name << " is created" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
  this->_name = other._name;
  this->_attackDamage = other._attackDamage;
  this->_energyPoints = other._energyPoints;
  this->_hitpoints = other._hitpoints;
  std::cout << "FragTrap " << this->_name << " is created" << std::endl;
  return *this;
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