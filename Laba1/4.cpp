#include <iostream>
using namespace std;

int main() {
    const double PI = 3.14159;
    double r, V;

    cout << "Vvedite radius shara: ";
    cin >> r;

    V = (4.0 / 3.0) * PI * r * r * r;

    cout << "V shara = : " << V << endl;

    return 0;
}
