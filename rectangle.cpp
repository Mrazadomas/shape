#include <iostream>
#include "rectangleh.cpp"

using namespace std;

Rectangle::Rectangle(double l, double w)
{
  this->l = l;
  this->w = w;
}

double Rectangle::getArea()
{
  return l * w;
}

double Rectangle::getPerimeter() 
{
    return (2 * l) + (2 * w);
}


