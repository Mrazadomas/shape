#include <iostream>
#include "irth.cpp"

using namespace std;

IRtriangle::IRtriangle(double side)
{
  this->side = side;
  name = "isoceles right triangle";
}

double IRtriangle::getArea()
{
  return (side * side) / 2;
}

double IRtriangle::getPerimeter() 
{
    return side + side + (sqrt(pow(side, 2) + pow(side, 2)));
}

string IRtriangle::getName() {
    return name;
}
