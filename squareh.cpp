#include <iostream>
#include "rectangleh.cpp"

using namespace std;

class Square : public Rectangle
{
private:
  double side;
  string name;

public:
  explicit Square(double side);
  double getArea() override;
  double getPerimeter() override;
  string getName() override;
};
