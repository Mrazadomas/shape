#include <iostream>
#include "shapeh.cpp"

using namespace std;

class Circle : public Shape
{
private:
  double r;

public:
  explicit Circle(double r);
  double getArea() override;
  double getPerimeter() override;
};
