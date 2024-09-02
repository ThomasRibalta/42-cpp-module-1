#include "header/Brain.hpp"

Brain::Brain()
{
  std::cout << "Brain created." << std::endl;
}

Brain::Brain(const Brain &other)
{
  for (int i = 0; i < 100; i++)
    ideas[i] = other.ideas[i];
  std::cout << "Brain created." << std::endl;
}

Brain &Brain::operator=(const Brain &other)
{
  for (int i = 0; i < 100; i++)
    ideas[i] = other.ideas[i];
  std::cout << "Brain created." << std::endl;
  return *this;
}

Brain::~Brain()
{
  std::cout << "Brain destroyed." << std::endl;
}