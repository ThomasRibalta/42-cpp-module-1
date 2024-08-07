#include  "Point.hpp"

Point::Point(void) : x(0), y(0) {
    return;
}

Point::Point(const Fixed x, const Fixed y) : x(x), y(y) {
    return;
}

Point::Point(const Point &point) : x(point.getX()), y(point.getY()) {
    return;
}

Point::~Point() {
    return;
}

Fixed Point::getX(void) const {
    return this->x;
}

Fixed Point::getY(void) const {
    return this->y;
}

Point &Point::operator=(const Point &point) {
    if (this != &point) {
        this->x = point.getX();
        this->y = point.getY();
    }
    return *this;
}

std::ostream &operator<<(std::ostream &std, const Point &point) {
    std << "Point(" << point.getX() << ", " << point.getY() << ")";
    return std;
}