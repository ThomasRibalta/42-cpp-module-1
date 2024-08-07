#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed() : value(0) {
  std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value) {
  std::cout << "Int constructor called" << std::endl;
  this->value = value << this->fractionalBits;
}

Fixed::Fixed(const float value) {
  std::cout << "Float constructor called" << std::endl;
  this->value = roundf(value * (1 << this->fractionalBits));
}

Fixed::Fixed(const Fixed &fixed) {
  std::cout << "Copy constructor called" << std::endl;
  *this = fixed;
}

Fixed::~Fixed() {
  std::cout << "Destructor constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &fixed) {
  std::cout << "Copy assignment operator called" << std::endl;
  this->value = fixed.getRawBits();
  return *this;
}

int Fixed::getRawBits(void) const {
  std::cout << "getRawBits member function called" << std::endl;
  return this->value;
}

void Fixed::setRawBits(int const raw) {
  std::cout << "setRawBits member function called" << std::endl;
  this->value = raw;
}

float Fixed::toFloat(void) const {
  return (float)this->value / (1 << this->fractionalBits);
}

int Fixed::toInt(void) const {
  return this->value >> this->fractionalBits;
}

std::ostream &operator<<(std::ostream &std, const Fixed &fixed) {
  std << fixed.toFloat();
  return std;
}
