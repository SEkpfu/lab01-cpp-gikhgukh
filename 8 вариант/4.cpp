// Четвёртое задание
#include <iostream>
using namespace std;
int main()
{
     setlocale(0, "");
    double x, y;
    cout <<"Ввести x: ";

    cin >> x;
    double x2 = x * x;
    double x3 = x * x2;
    double x4 = x3 * x;
    double x7 = x3 * x4;
    double x11 = x7 * x4;
    y = x11 - x7 + x2 - 2;
    cout << y;

    return 0;
}

