#include "header/Cat.hpp"

Cat::Cat() : Animal("Cat")
{
  this->brain = new Brain();
  std::cout << "Cat created." << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
{
  this->brain = new Brain();
  *this = other;
  std::cout << "Cat created." << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
  Animal::operator=(other);
  *this->brain = *other.brain;
  std::cout << "Cat created." << std::endl;
  return *this;
}

Cat::~Cat()
{
  delete this->brain;
  std::cout << "Cat destroyed." << std::endl;
}

void Cat::makeSound() const
{
  std::cout << "Meow meow." << std::endl;
}