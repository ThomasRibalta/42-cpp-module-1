#include "header/WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
  std::cout << "WrongCat created." << std::endl;
}

WrongCat::~WrongCat()
{
  std::cout << "WrongCat destroyed." << std::endl;
}

