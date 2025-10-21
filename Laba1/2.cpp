#include <iostream>
using namespace std;

int main() {
    double x, y;

    cout << "Vvedite pervoe chislo" << endl;
    cin >> x;

    cout << "Vvedite vtoroe chislo" << endl;
    cin >> y;

    double sum, diff, prod;

    sum = x + y;
    diff = x - y;
    prod = x * y;

    cout << "Summa ravna " << sum << endl;
    cout << "Raznost' ravna " << diff << endl;
    cout << "Proizvedenie ravno " << prod << endl;

    return 0;
}
