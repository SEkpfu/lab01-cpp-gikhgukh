#include <iostream>
using namespace std;

int main() {
    double tC, tF, tK;

    cout << "Vvedite temperaturu v gradusah Celsiya" << endl;
    cin >> tC;

    tF = 9.0 / 5.0 * tC + 32;
    tK = tC + 273;

    cout << "Temperatura v gradusah Farengeyta: " << tF << endl;
    cout << "Temperatura v gradusah Kelvina: " << tK << endl;

    return 0;
}
