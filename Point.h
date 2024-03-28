#pragma once
#include <iostream>
#include <string>

class Point {
private:
    double x, y;

public:
    Point();
    Point(double x, double y);
    Point(const Point& p);

    double getX() const;
    double getY() const;
    void setX(double x);
    void setY(double y);

    Point operator+(const Point& p) const;
    bool operator==(const Point& p) const;
    bool operator!=(const Point& p) const;
    Point& operator=(const Point& p);

    std::string toString() const;

    friend std::ostream& operator<<(std::ostream& os, const Point& p);
    friend std::istream& operator>>(std::istream& is, Point& p);
    friend Point operator-(const Point& p1, const Point& p2);
};
