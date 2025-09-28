#include <iostream>
#include "squareh.cpp"

using namespace std;

Square::Square(double side)
{
  this->side = side;
  name = "square";
}

double Square::getArea()
{
  return side * side;
}

double Square::getPerimeter() 
{
    return 4 * side;
}

string Square::getName() {
    return name;
}
