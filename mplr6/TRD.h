#pragma once
#include <iostream>

class Triangle {
protected:
    double base;
    double height;

public:
    Triangle(double b, double h);
    virtual double area() const;
};

class RightTriangle : public Triangle {
public:
    RightTriangle(double b, double h);
    double area() const override;
};

class IsoscelesRightTriangle : public RightTriangle {
public:
    IsoscelesRightTriangle(double b);
    double area() const override;
};



