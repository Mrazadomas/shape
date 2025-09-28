#include <iostream>
#include "rectangleh.cpp"

using namespace std;

Rectangle::Rectangle()
{
  l = 0;
  w = 0;
}

Rectangle::Rectangle(double l, double w)
{
  this->l = l;
  this->w = w;
  name = "rectangle";
}

double Rectangle::getArea()
{
  return l * w;
}

double Rectangle::getPerimeter() 
{
    return (2 * l) + (2 * w);
}

string Rectangle::getName() {
    return name;
}
