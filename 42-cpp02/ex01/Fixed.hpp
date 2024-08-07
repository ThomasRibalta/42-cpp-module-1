#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {
  private:
    int value;
    static const int fractionalBits = 8;

  public:
    Fixed(void);
    Fixed(const int value);
    Fixed(const float value);
    Fixed(const Fixed &fixed);
    ~Fixed();

    Fixed &operator=(const Fixed &fixed);

    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat( void ) const;
    int toInt( void ) const;
};

std::ostream &operator<<(std::ostream &std, const Fixed &fixed);

#endif