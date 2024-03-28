#include <iostream>
#include "point.h"


int main() {
    Point p1;
    Point p2;
    std::cout << "Enter a point 1 (x, y): ";
    std::cin >> p1;
    std::cout << "Point 1: " << p1 << std::endl;
    std::cout << "Enter a point 2 (x, y): ";
    std::cin >> p2;
    std::cout << "Point 2: " << p2 << std::endl;
    Point p3 = p1 + p2;
    std::cout << "(p1 + p2) = " << p3 << std::endl;
    Point p4 = p2 - p1;
    std::cout << "(p2 - p1) = " << p4 << std::endl;
    std::cout << "p1 == p2? " << (p1 == p2 ? "Yes" : "No") << std::endl;
    std::cout << "p1 != p2? " << (p1 != p2 ? "Yes" : "No") << std::endl;

    p1 = p2;
    std::cout << "p1 = p2: " << p1 << std::endl;

    return 0;
}
