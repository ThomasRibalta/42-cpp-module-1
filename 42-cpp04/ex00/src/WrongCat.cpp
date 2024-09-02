#include "header/WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
  std::cout << "WrongCat created." << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{
  std::cout << "WrongCat created." << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
  WrongAnimal::operator=(other);
  std::cout << "WrongCat created." << std::endl;
  return *this;
}

WrongCat::~WrongCat()
{
  std::cout << "WrongCat destroyed." << std::endl;
}
