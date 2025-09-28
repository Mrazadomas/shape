#ifndef SHAPEH_H
#define SHAPEH_H
#include <iostream>
using namespace std;
class Shape
{
public:
  virtual double getArea() = 0;
  virtual double getPerimeter() = 0;
  virtual string getName() = 0;
};
#endif
