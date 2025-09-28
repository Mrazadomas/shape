#include <iostream>
#include "shapeh.cpp"

using namespace std;

class Rectangle : public Shape
{
private:
  double l;
  double w;

public:
  explicit Rectangle(double l, double w);
  double getArea() override;
  double getPerimeter() override;
};
