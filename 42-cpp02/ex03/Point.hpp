#ifndef POINT_HPP
# define POINT_HPP

#include <iostream>
#include "Fixed.hpp"

class Point {
  private:
    Fixed x;
    Fixed y;

  public:
    Point(void);
    Point(const Fixed x, const Fixed y);
    Point(const Point &point);
    ~Point();

    Point &operator=(const Point &point);

    Fixed getX(void) const;
    Fixed getY(void) const;
};

bool bsp(const Point a, const Point b, const Point c, const Point point);

std::ostream &operator<<(std::ostream &std, const Point &point);

#endif