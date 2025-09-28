#include <iostream>
#include "rectangle.cpp"
#include "circle.cpp"
#include "rt.cpp"
#include "square.cpp"
#include "irt.cpp"
#include "shape.cpp"
#include <cassert>
#include <cmath>

using namespace std;

int main() {
    Rectangle r = Rectangle(2,3);
    Shape *r_ptr = &r;
    assert(r.getArea() == 6);
    assert(r.getPerimeter() == 10);
    
    Circle c = Circle(3);
    Shape *c_ptr = &c;
    double A = (0.5 * pi * pow(3, 2));
    assert(c.getArea() == A);
    double P = 2 * pi * 3;
    assert(c.getPerimeter() == P);
    
    Rtriangle t = Rtriangle(2, 2);
    Shape *t_ptr = &t;
    assert(t.getArea() == 2);
    double RtP = 2 + 2 + (sqrt(pow(2, 2) + pow(2, 2)));
    assert(t.getPerimeter() == RtP);

    Square s = Square(2);
    Shape *s_ptr = &s;
    assert(s.getArea() == 4);
    assert(s.getPerimeter() == 8);

    IRtriangle it = IRtriangle(2);
    Shape *it_ptr = &it;
    assert(it.getArea() == 2);
    double RtP2 = 2 + 2 + (sqrt(pow(2, 2) + pow(2, 2)));

    printAreaToScreen(it_ptr);
    printAreaToScreen(r_ptr);
    printAreaToScreen(s_ptr);
    printAreaToScreen(t_ptr);
    printAreaToScreen(c_ptr);
}
