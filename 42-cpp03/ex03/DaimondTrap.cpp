#include "DaimondTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

DaimondTrap::DaimondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name)
{
  this->_name = name;
  this->_hitpoints = FragTrap::_hitpoints;
  this->_energyPoints = ScavTrap::_energyPoints;
  this->_attackDamage = FragTrap::_attackDamage;
  std::cout << "DaimondTrap constructor called" << std::endl;
}

DaimondTrap::~DaimondTrap()
{
  std::cout << "DaimondTrap destructor called" << std::endl;
}

void DaimondTrap::whoAmI()
{
  std::cout << "My name is " << this->_name << " and my ClapTrap name is " << ClapTrap::_name << std::endl;
}