// Первое задание
#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    double a, b, c, p, s;
    cout <<"Ввести длины сторон \n";

    cout << "a= ";
    cin >> a;
    cout << "b= ";
    cin >> b;
    c = a * a + b * b;
    p = a + b + c;
    s = a * b / 2;
    cout << "C = " << c;
    cout << ' ';
    cout << "S = " << s;
    cout << ' ';
    cout << "P = " << p;
    cout << ' ';
    return 0;
}
