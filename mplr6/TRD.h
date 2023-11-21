#pragma once
#include <iostream>

class Triangle {
protected:
    double* base;
    double* height;

public:
    Triangle(double b, double h); 
    Triangle(const Triangle& other); 
    Triangle& operator=(const Triangle& other); 
    virtual ~Triangle(); 
    virtual double area() const;
};

class RightTriangle : public Triangle {
private:
    double* c;
    double d;
public:
    RightTriangle(double b, double h);
    RightTriangle(const RightTriangle& other); 
    RightTriangle& operator=(const RightTriangle& other); 
    virtual ~RightTriangle(); 
    double area() const override;
};

class IsoscelesRightTriangle : public RightTriangle {
private:
    double* e;
    double f = 5;
public:
    IsoscelesRightTriangle(double b);
    IsoscelesRightTriangle(const IsoscelesRightTriangle& other); 
    IsoscelesRightTriangle& operator=(const IsoscelesRightTriangle& other); 
    virtual ~IsoscelesRightTriangle(); 
    double area() const override;
};