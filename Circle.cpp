#include "Circle.h"
#include <iostream>
Circle::Circle(double r) : radius(r) {}
void Circle::square() {
    double area = 3.141592653589793 * radius * radius;
    std::cout << "Площадь круга с радиусом = " << area << std::endl;
}