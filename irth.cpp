#include <iostream>
#include "rth.cpp"

using namespace std;

class IRtriangle : public Rtriangle
{
private:
  double side;
  string name;

public:
  explicit IRtriangle(double side);
  double getArea() override;
  double getPerimeter() override;
  string getName() override;
};
