#include "header/Dog.hpp"

Dog::Dog() : Animal("Dog")
{
  std::cout << "Dog created." << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other)
{
  std::cout << "Dog created." << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
  Animal::operator=(other);
  std::cout << "Dog created." << std::endl;
  return *this;
}

Dog::~Dog()
{
  std::cout << "Dog destroyed." << std::endl;
}

void Dog::makeSound() const
{
  std::cout << "Woof woof." << std::endl;
}