#include "TRD.h"

Triangle::Triangle(double b, double h) : base(new double(b)), height(new double (h)) {}

Triangle::Triangle(const Triangle& other) : base(new double(*other.base)), height(new double(*other.height)) {}

Triangle& Triangle::operator=(const Triangle& other) {
    if (this != &other) {
        delete base;
        delete height;
        base = new double(*other.base);
        height = new double(*other.height);
    }
    return *this;
}

Triangle::~Triangle(){
    delete base;
    delete height;
}


double Triangle::area() const {
    return 0.5 * (*base) * (*height);
}


RightTriangle::RightTriangle(double b, double h) : Triangle(b, h) {
    c = new double(d);
}
RightTriangle::RightTriangle(const RightTriangle& other) : Triangle(other) {
    c = new double(*other.c);
}

RightTriangle& RightTriangle::operator=(const RightTriangle& other) {
    if (this != &other) {
        Triangle::operator=(other);
    }
    return *this;
}

RightTriangle::~RightTriangle() {
    delete c;
    c = nullptr;
}

double RightTriangle::area() const {
    return 0.5 * (*base) * (*height);
}

IsoscelesRightTriangle::IsoscelesRightTriangle(double b) : RightTriangle(b, b) {
    e = new double(f);
}

IsoscelesRightTriangle::IsoscelesRightTriangle(const IsoscelesRightTriangle& other) : RightTriangle(other) {}

IsoscelesRightTriangle&
IsoscelesRightTriangle::operator=(const IsoscelesRightTriangle& other) {
    if (this != &other) {
        RightTriangle::operator=(other);
        delete c;
        c = new double(*other.c);
    }
    return *this;
}

double IsoscelesRightTriangle::area() const {
    return (*e) * 0.5 * (*base) * (*height);
}
IsoscelesRightTriangle::~IsoscelesRightTriangle() {
    delete e;
    e = nullptr;
}
