#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
void a() {
    double r, h, V, S;
    cout << "Vvedite radius r i vysotu h cylindrа: ";
    cin >> r >> h;
    V = M_PI * r * r * h;
    S = 2 * M_PI * r * h + 2 * M_PI * r * r;
    cout << "V cylindrа = " << V << endl;
    cout << "S poverkhnosti cylindrа = " << S << endl << endl;
}
int main() {
    a();
    return 0;
}