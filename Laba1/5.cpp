#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double r, l, a;

    cout << "Vvedite S = ";
    cin >> a;

    r = sqrt(a / M_PI);
    l = 2.0 * M_PI * r;

    cout << "radius = " << r << endl;
    cout << "dlina okruzhnosti = " << l << endl;
    return 0;
}
