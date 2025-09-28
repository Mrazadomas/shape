#ifndef RTRIANGLE_H
#define RTRIANGLE_H
#include <iostream>
#include "shapeh.cpp"

using namespace std;

class Rtriangle : public Shape
{
private:
  double l;
  double w;
  string name;

public:
  explicit Rtriangle(double l, double w);
  explicit Rtriangle();
  double getArea() override;
  double getPerimeter() override;
  string getName() override;
};
#endif
