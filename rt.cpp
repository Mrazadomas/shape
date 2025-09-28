#include <iostream>
#include "rth.cpp"
#include <cmath>

using namespace std;

Rtriangle::Rtriangle()
{
  l = 0;
  w = 0;
}

Rtriangle::Rtriangle(double l, double w)
{
  this->l = l;
  this->w = w;
  name = "right triangle";
}

double Rtriangle::getArea()
{
  return (l * w) / 2;
}

double Rtriangle::getPerimeter() 
{
    return l + w + (sqrt(pow(l, 2) + pow(w, 2)));
}

string Rtriangle::getName() {
    return name;
}
