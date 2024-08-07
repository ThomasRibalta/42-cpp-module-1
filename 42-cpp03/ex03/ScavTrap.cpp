#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
  std::cout << "ScavTrap " << name << " is born!" << std::endl;
  this->_hitpoints = 100;
  this->_energyPoints = 50;
  this->_attackDamage = 20;
}

ScavTrap::~ScavTrap()
{
  std::cout << "ScavTrap " << this->_name << " is destroyed" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
  if (this->_hitpoints <= 0)
  {
    std::cout << "ScavTrap " << this->_name << " is dead" << std::endl;
    return;
  }
  if (this->_energyPoints <= 0)
  {
    std::cout << "ScavTrap " << this->_name << " is out of energy" << std::endl;
    return;
  }
  this->_energyPoints -= 1;
  std::cout << "ScavTrap " << this->_name << " attacks " << target << " causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
  std::cout << "ScavTrap " << this->_name << " has entered in Gate keeper mode" << std::endl;
}
