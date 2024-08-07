#include "header/Dog.hpp"

Dog::Dog() : Animal("Dog")
{
  this->brain = new Brain();
  std::cout << "Dog created." << std::endl;
}

Dog::~Dog()
{
  delete this->brain;
  std::cout << "Dog destroyed." << std::endl;
}

void Dog::makeSound() const
{
  std::cout << "Woof woof." << std::endl;
}