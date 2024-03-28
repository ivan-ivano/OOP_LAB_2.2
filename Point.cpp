#include "point.h"

Point::Point() : x(0), y(0) {}
Point::Point(double x, double y) : x(x), y(y) {}
Point::Point(const Point& p) : x(p.x), y(p.y) {}

double Point::getX() const { return x; }
double Point::getY() const { return y; }
void Point::setX(double x) { this->x = x; }
void Point::setY(double y) { this->y = y; }

Point Point::operator+(const Point& p) const {
    return Point(x + p.x, y + p.y);
}
bool Point::operator==(const Point& p) const {
    return x == p.x && y == p.y;
}
bool Point::operator!=(const Point& p) const {
    return !(*this == p);
}
Point& Point::operator=(const Point& p) {
    x = p.x;
    y = p.y;

    return *this;
}

std::ostream& operator<<(std::ostream& os, const Point& p) {
    os << "(" << p.x << ", " << p.y << ")";
    return os;
}

std::istream& operator>>(std::istream& is, Point& p) {
    is >> p.x >> p.y;
    return is;
}

Point operator-(const Point& p1, const Point& p2) {
    return Point(p1.x - p2.x, p1.y - p2.y);
}

std::string Point::toString() const {
    return "(" + std::to_string(x) + ", " + std::to_string(y) + ")";
}