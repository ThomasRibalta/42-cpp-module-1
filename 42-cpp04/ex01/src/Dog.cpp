#include "header/Dog.hpp"

Dog::Dog() : Animal("Dog")
{
  this->brain = new Brain();
  std::cout << "Dog created." << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other)
{
  this->brain = new Brain();
  *this = other;
  std::cout << "Dog created." << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
  Animal::operator=(other);
  *this->brain = *other.brain;
  std::cout << "Dog created." << std::endl;
  return *this;
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