#include <iostream>
#include "rth.cpp"
#include <cmath>

using namespace std;

Rtriangle::Rtriangle(double l, double w)
{
  this->l = l;
  this->w = w;
}

double Rtriangle::getArea()
{
  return (l * w) / 2;
}

double Rtriangle::getPerimeter() 
{
    return l + w + (sqrt(pow(l, 2) + pow(w, 2)));
}


