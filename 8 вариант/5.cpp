// Пятое задание
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double x, y;
    cout << "Ввести x: ";

    cin >> x;
    cout << "Ввести y: ";

    cin >> y;
    double a, b;
    a = 2 * (1 / tan(x)) - 1 / (12 * pow(x, 2) + 7 * x - 5);
    b = pow(3, x) - 4 * x + (y - pow(abs(x), 0.5));
    cout << a;
    cout << b;

    return 0;
}
