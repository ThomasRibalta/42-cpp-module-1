#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed() : value(0) {
}

Fixed::Fixed(const int value) {
  this->value = value << this->fractionalBits;
}

Fixed::Fixed(const float value) {
  this->value = roundf(value * (1 << this->fractionalBits));
}

Fixed::Fixed(const Fixed &fixed) {
  *this = fixed;
}

Fixed::~Fixed() {
}

Fixed &Fixed::operator=(const Fixed &fixed) {
  this->value = fixed.getRawBits();
  return *this;
}

int Fixed::getRawBits(void) const {
  return this->value;
}

void Fixed::setRawBits(int const raw) {
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

Fixed &Fixed::operator++() {
  this->value++;
  return *this;
}

Fixed Fixed::operator++(int) {
  Fixed tmp(*this);
  operator++();
  return tmp;
}

Fixed &Fixed::operator--() {
  this->value--;
  return *this;
}

Fixed Fixed::operator--(int) {
  Fixed tmp(*this);
  operator--();
  return tmp;
}

bool operator>(const Fixed &a, const Fixed &b) {
  return a.getRawBits() > b.getRawBits();
}

bool operator<(const Fixed &a, const Fixed &b) {
  return a.getRawBits() < b.getRawBits();
}

bool operator>=(const Fixed &a, const Fixed &b) {
  return a.getRawBits() >= b.getRawBits();
}

bool operator<=(const Fixed &a, const Fixed &b) {
  return a.getRawBits() <= b.getRawBits();
}

bool operator==(const Fixed &a, const Fixed &b) {
  return a.getRawBits() == b.getRawBits();
}

bool operator!=(const Fixed &a, const Fixed &b) {
  return a.getRawBits() != b.getRawBits();
}

Fixed operator+(const Fixed &a, const Fixed &b) {
  return Fixed(a.toFloat() + b.toFloat());
}

Fixed operator-(const Fixed &a, const Fixed &b) {
  return Fixed(a.toFloat() - b.toFloat());
}

Fixed operator*(const Fixed &a, const Fixed &b) {
  return Fixed(a.toFloat() * b.toFloat());
}

Fixed operator/(const Fixed &a, const Fixed &b) {
  return Fixed(a.toFloat() / b.toFloat());
}

Fixed &Fixed::min(Fixed &a, Fixed &b) {
  return a < b ? a : b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b) {
  return a > b ? a : b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b) {
  return a < b ? a : b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b) {
  return a > b ? a : b;
}
