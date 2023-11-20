#include "TRD.h"

Triangle::Triangle(double b, double h) : base(b), height(h) {}

double Triangle::area() const {
    return 0.5 * base * height;
}

RightTriangle::RightTriangle(double b, double h) : Triangle(b, h) {}

double RightTriangle::area() const {
    return 0.5 * base * height;
}

IsoscelesRightTriangle::IsoscelesRightTriangle(double b) : RightTriangle(b, b) {}

double IsoscelesRightTriangle::area() const {
    return 0.5 * base * height;
}
