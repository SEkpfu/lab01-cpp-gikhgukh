#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
void a() {
    int num;
    cout << "Vvedite chetyrehznachnoe chislo: ";
    cin >> num;
    int pervaya = num / 1000;
    int poslednyaya = num % 10;
    cout << "Pervaya cifra = " << pervaya << ", poslednyaya cifra = " << poslednyaya << endl << endl;
}
int main() {
    a();
    return 0;
}