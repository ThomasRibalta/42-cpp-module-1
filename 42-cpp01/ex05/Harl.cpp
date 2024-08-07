#include "Harl.hpp"

Harl::Harl(void)
{
  this->levels[0].name = "debug";
  this->levels[0].func = &Harl::debug;
  this->levels[1].name = "info";
  this->levels[1].func = &Harl::info;
  this->levels[2].name = "warning";
  this->levels[2].func = &Harl::warning;
  this->levels[3].name = "error";
  this->levels[3].func = &Harl::error;
}

void Harl::debug(void)
{
  std::cout << "[DEBUG]" << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
  std::cout << "[INFO]" << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" <<std::endl;
}

void Harl::warning(void)
{
  std::cout << "[WARNING]" << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
  std::cout << "[ERROR]" << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
  for (int i = 0; i < 4; i++)
  {
    if (this->levels[i].name == level)
    {
      (this->*(this->levels[i].func))();
      return;
    }
  }
  std::cout << "Unknown level: " << level << std::endl;
}