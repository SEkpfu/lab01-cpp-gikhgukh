#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
void a() {
    int N;
    cout << "Vvedite kolichestvo proshedshih sekund s nachala sutok: ";
    cin >> N;
    int h = N / 3600;
    int m = (N % 3600) / 60;
    int s = N % 60;
    cout << "Polnye chasy = " << h << ", polnye minuty = " << m << ", ostatok sekund = " << s << endl << endl;
}
int main() {
    a();
    return 0;
}