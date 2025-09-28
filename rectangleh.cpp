#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <iostream>
#include "shapeh.cpp"

using namespace std;

class Rectangle : public Shape
{
private:
  double l;
  double w;
  string name;

public:
  explicit Rectangle(double l, double w);
  explicit Rectangle();
  double getArea() override;
  double getPerimeter() override;
  string getName() override;
};
#endif
