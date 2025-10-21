#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
void a() {
    double a, b, c, V, S;
    cout << "Vvedite dliny reber a, b, c pryamougolnogo parallelepipeda: ";
    cin >> a >> b >> c;
    V = a * b * c;
    S = 2 * (a*b + b*c + a*c);
    cout << "V parallelepipeda = " << V << endl;
    cout << "S poverhnosti parallelepipeda = " << S << endl << endl;
}
int main() {
    a();
    return 0;
}
