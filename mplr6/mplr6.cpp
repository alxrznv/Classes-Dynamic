//«адание 6:
//Ќаписать программу с назначением по вашему желанию.¬ программе должно использоватьс€ 
//наследование классов c использованием динамической пам€ти хот€ бы на 2 - х этапах иерархии 
//наследовани€.

#include "TRD.h"

int main() {
    Triangle* triangle = new Triangle(4, 6);
    RightTriangle* rightTriangle = new RightTriangle(3, 4);
    IsoscelesRightTriangle* isoscelesRightTriangle = new IsoscelesRightTriangle(5);

    std::cout << "Triangle area: " << triangle->area() << std::endl;
    std::cout << "Right triangle area: " << rightTriangle->area() << std::endl;
    std::cout << "Isosceles right triangle area: " << isoscelesRightTriangle->area() << std::endl;

    delete triangle;
    delete rightTriangle;
    delete isoscelesRightTriangle;

}

