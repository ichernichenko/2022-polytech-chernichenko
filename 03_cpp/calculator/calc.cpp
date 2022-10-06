#include <iostream>
#include <cmath>

double calc(double a, double b, char $)
{
    double c;
    if ($ == '+')
    {
        c = a + b;
    }
    if ($ == '-')
    {
        c = a - b;
    }
    if ($ == '*')
    {
        c = a * b;
    }
    if ($ == '/')
    {
        if (b == 0)
        {
           std::cout << "На 0 делить нельзя\n";
        }
        c = a / b;
    }
    if ($ == '^')
    {
        c = pow(a, b);
    }
    return c;
}