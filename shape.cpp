#include <iostream>
#include "shapeh.cpp"

using namespace std;

void printAreaToScreen(Shape *s) {
    cout << "This shape is a " << s->getName() << " with an area of " << s->getArea() << endl;
}
