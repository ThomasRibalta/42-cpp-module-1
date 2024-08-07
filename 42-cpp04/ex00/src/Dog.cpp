#include "header/Dog.hpp"

Dog::Dog() : Animal("Dog")
{
  std::cout << "Dog created." << std::endl;
}

Dog::~Dog()
{
  std::cout << "Dog destroyed." << std::endl;
}

void Dog::makeSound() const
{
  std::cout << "Woof woof." << std::endl;
}