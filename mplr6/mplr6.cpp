//������� 6:
//�������� ��������� � ����������� �� ������ �������.� ��������� ������ �������������� 
//������������ ������� c �������������� ������������ ������ ���� �� �� 2 - � ������ �������� 
//������������.

#include "TRD.h"

int main() {
    Triangle* triangle = new Triangle(4.0, 6.0);
    RightTriangle* rightTriangle = new RightTriangle(3.0, 4.0);
    IsoscelesRightTriangle* isoscelesRightTriangle = new IsoscelesRightTriangle(5.0);

    std::cout << "Triangle area: " << triangle->area() << std::endl;
    std::cout << "Right triangle area: " << rightTriangle->area() << std::endl;
    std::cout << "Isosceles right triangle area: " << isoscelesRightTriangle->area() << std::endl;

    delete triangle;
    delete rightTriangle;
    delete isoscelesRightTriangle;

}

