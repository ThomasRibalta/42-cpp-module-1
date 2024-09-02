#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string Name)
{
  this->_name = Name;
  this->_attackDamage = 0;
  this->_energyPoints = 10;
  this->_hitpoints = 10;
  std::cout << "ClapTrap " << this->_name << " is created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
  this->_name = other._name;
  this->_attackDamage = other._attackDamage;
  this->_energyPoints = other._energyPoints;
  this->_hitpoints = other._hitpoints;
  std::cout << "ClapTrap " << this->_name << " is created" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
  this->_name = other._name;
  this->_attackDamage = other._attackDamage;
  this->_energyPoints = other._energyPoints;
  this->_hitpoints = other._hitpoints;
  std::cout << "ClapTrap " << this->_name << " is created" << std::endl;
  return *this;
}

ClapTrap::~ClapTrap()
{
  std::cout << "ClapTrap " << this->_name << " is destroyed" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
  if (this->_hitpoints <= 0)
  {
    std::cout << "ClapTrap " << this->_name << " is already dead" << std::endl;
    return;
  }
  this->_hitpoints -= amount;
  std::cout << "ClapTrap " << this->_name << " took " << amount << " damage" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
  if (this->_hitpoints <= 0)
  {
    std::cout << "ClapTrap " << this->_name << " is dead" << std::endl;
    return;
  }
  if (this->_energyPoints <= 0)
  {
    std::cout << "ClapTrap " << this->_name << " is out of energy" << std::endl;
    return;
  }
  this->_hitpoints += amount;
  this->_energyPoints -= 1;
  std::cout << "ClapTrap " << this->_name << " is repaired by " << amount << " points" << std::endl;
}

void ClapTrap::attack(const std::string &Target)
{
  if (this->_hitpoints <= 0)
  {
    std::cout << "ClapTrap " << this->_name << " is dead" << std::endl;
    return;
  }
  if (this->_energyPoints <= 0)
  {
    std::cout << "ClapTrap " << this->_name << " is out of energy" << std::endl;
    return;
  }
  this->_energyPoints -= 1;
  std::cout << "ClapTrap " << this->_name << " attacks " << Target << " causing " << this->_attackDamage << " points of damage!" << std::endl;
}