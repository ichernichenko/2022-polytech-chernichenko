#include <iostream>
#include "calc.h"
using namespace std;


int main()
{
    double a = 0, b = 0, c = 0;
    char $;
    cout << "\nКалькулятор реализует опреации вида a $ b,\nгде a и b — вещественные числа,\n"
            "$ — операции: +, -, *, /, ^ (возведение в целочисленную степень)"
         << endl;
    while (true)
    {
        cin >> a >> $ >> b;
        c = calc(a, b, $);
        cout << a << $ << b << "=" << c << endl;
        cout << "Введите данные следющего примера или нажмите control+C\n";
    }

    return 0;
}

