#ifndef MATTERIASOURCE_HPP
# define MATTERIASOURCE_HPP

# include <iostream>
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
  private:
    AMateria *materias[4];
    int count;

  public:
    MateriaSource();
    MateriaSource(MateriaSource const &other);
    MateriaSource &operator=(MateriaSource const &other);
    virtual ~MateriaSource();
    void learnMateria(AMateria *m);
    AMateria *createMateria(std::string const &type);
};

#endif