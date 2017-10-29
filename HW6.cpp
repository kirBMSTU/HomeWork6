#include "HW6.hpp"

Integral:: Integral(double up, double down, unsigned int n)
  : up(up), down(down), n(n)
{
  std:: cout << "Integral constructor" << std:: endl;
}

RectMethod:: RectMethod(double up, double down, unsigned int n)
  : Integral(up, down, n)//up(up), down(down), n(n)
{
  std:: cout << "RectMethod constructor" << std:: endl;
}

TrapMethod:: TrapMethod(double up, double down, unsigned int n)
  : Integral(up, down, n)//up(up), down(down), n(n)
{
  std:: cout << "TrapMethod constructor" << std:: endl;
}

double Integral:: calculate(func_ptr function)
{
  double dx = (this->up - this->down) / this->n;
  double x = this->down;
  double area = 0;
  for (size_t i = 0; i < n; i++)
  {
    area += dx * this->separate(x, dx, function);
    x += dx;
  }
  return area;
}

double RectMethod:: separate(double x, double dx, func_ptr function)
{
  return function(x + dx / 2);
}

double TrapMethod:: separate(double x, double dx, func_ptr function)
{
  return ( function(x) + function(x + dx) ) / 2;
}

double parabola(double x)
{
  return x * x;
}

double line(double x)
{
  return 0.5 * x;
}
