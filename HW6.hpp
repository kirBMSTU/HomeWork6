#include <iostream>

typedef double(*func_ptr)(double);

class Integral
{
public:
  Integral(double up, double down, unsigned int n);
  double calculate(func_ptr function);
private:
  //возвращает коэффициент, на который мы умножаем dx, чтобы получить площадь элементарной фигуры
  virtual double separate(double x, double dx, func_ptr function) = 0;
  double up;
  double down;
  unsigned int n;
};

class RectMethod : public Integral
{
public:
  RectMethod(double up, double down, unsigned int n);
private:
  double separate(double x, double dx, func_ptr function);
};

class TrapMethod : public Integral
{
public:
  TrapMethod(double up, double down, unsigned int n);
private:
  double separate(double x, double dx, func_ptr function);
};

//функции для расчета интеграла
double parabola(double x);
double line(double x);
