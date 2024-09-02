#include "header/Cat.hpp"

Cat::Cat() : Animal("Cat")
{
  std::cout << "Cat created." << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
{
  std::cout << "Cat created." << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
  Animal::operator=(other);
  std::cout << "Cat created." << std::endl;
  return *this;
}

Cat::~Cat()
{
  std::cout << "Cat destroyed." << std::endl;
}

void Cat::makeSound() const
{
  std::cout << "Meow meow." << std::endl;
}