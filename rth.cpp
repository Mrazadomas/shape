#include <iostream>
#include "shapeh.cpp"

using namespace std;

class Rtriangle : public Shape
{
private:
  double l;
  double w;

public:
  explicit Rtriangle(double l, double w);
  double getArea() override;
  double getPerimeter() override;
};
