#include <iostream>
#include "circleh.cpp"
#include <cmath>

using namespace std;

double pi = M_PI;

Circle::Circle(double r)
{
  this->r = r;
}

double Circle::getArea()
{
  return 0.5 * pi * pow(r, 2);
}

double Circle::getPerimeter() 
{
    return 2 * pi * r;
}


