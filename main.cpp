#include "HW6.hpp"

//TODO Задать вопрос про приватный виртуальный методи почему наследники знают о его
//существовании, если он приватный? ПЫСЫ: статью из телеги про модификаторы наследованя читал, не помогло

int main()
{
  RectMethod alpha(4.0, 1.0, 30);
  TrapMethod beta(8.0, 2.0, 20);

  std:: cout << "Area(by RectMethod) = " << alpha.calculate(parabola) << std:: endl;
  std:: cout << "Area(by TrapMethod) = " << beta.calculate(line) << std:: endl;

  Integral* alpha1 = &alpha;
  Integral* beta1 = &beta;

  std:: cout << "Area(by RectMethod) = " << alpha1->calculate(parabola) << std:: endl;
  std:: cout << "Area(by TrapMethod) = " << beta1->calculate(line) << std:: endl;
  return 0;
}
