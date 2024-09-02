#include "header/Brain.hpp"

Brain::Brain()
{
  std::cout << "Brain created." << std::endl;
}

Brain::Brain(const Brain &other)
{
  std::cout << "Brain created." << std::endl;
  *this = other;
}

Brain &Brain::operator=(const Brain &other)
{
  std::cout << "Brain created." << std::endl;
  for (int i = 0; i < 100; i++)
    ideas[i] = other.ideas[i];
  return *this;
}

Brain::~Brain()
{
  std::cout << "Brain destroyed." << std::endl;
}