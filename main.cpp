#include <iostream>
#include "rectangle.cpp"
#include "circle.cpp"
#include "rt.cpp"
#include <cassert>
#include <cmath>

using namespace std;

int main() {
    Rectangle r = Rectangle(2,3);
    assert(r.getArea() == 6);
    assert(r.getPerimeter() == 10);
    
    Circle c = Circle(3);
    double A = (0.5 * pi * pow(3, 2));
    assert(c.getArea() == A);
    double P = 2 * pi * 3;
    assert(c.getPerimeter() == P);
    
    Rtriangle t = Rtriangle(2, 2);
    assert(t.getArea() == 2);
    double RtP = 2 + 2 + (sqrt(pow(2, 2) + pow(2, 2)));
    assert(t.getPerimeter() == RtP);
}
