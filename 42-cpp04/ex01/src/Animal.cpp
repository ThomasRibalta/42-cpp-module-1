#include "header/Animal.hpp"

Animal::Animal()
{
  std::cout << "Animal created." << std::endl;
}

Animal::Animal(std::string type) : type(type)
{
  std::cout << "Animal of type " << type << " created." << std::endl;
}

Animal::~Animal()
{
  std::cout << "Animal destroyed." << std::endl;
}

std::string Animal::getType() const
{
  return type;
}

void Animal::setType(std::string type)
{
  this->type = type;
}

void Animal::makeSound() const
{
  std::cout << "Animal sound." << std::endl;
}