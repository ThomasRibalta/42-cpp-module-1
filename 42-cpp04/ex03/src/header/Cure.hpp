#ifndef CURE
# define CURE

# include <iostream>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure : public AMateria
{
  public:
    Cure();
    Cure(Cure const & src);
    virtual ~Cure();
    Cure & operator=(Cure const & src);

    AMateria* clone() const;
    void use(ICharacter& target);
};

#endif