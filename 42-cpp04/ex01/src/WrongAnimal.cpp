#include "header/WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
  std::cout << "WrongAnimal created." << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : type(type)
{
  std::cout << "WrongAnimal of type " << type << " created." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) : type(other.type)
{
  std::cout << "WrongAnimal of type " << type << " created." << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
  type = other.type;
  std::cout << "WrongAnimal of type " << type << " created." << std::endl;
  return *this;
}

WrongAnimal::~WrongAnimal()
{
  std::cout << "WrongAnimal destroyed." << std::endl;
}

std::string WrongAnimal::getType() const
{
  return type;
}

void WrongAnimal::setType(std::string type)
{
  this->type = type;
}

void WrongAnimal::makeSound() const
{
  std::cout << "WrongAnimal sound." << std::endl;
}