#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
void a() {
    int a, b;
    cout << "Vvedite dva celyh chisla: ";
    cin >> a >> b;
    int sum_last = (a % 10) + (b % 10);
    cout << "Summa poslednih cyfr = " << sum_last << endl << endl;
}
int main() {
    a();
    return 0;
}