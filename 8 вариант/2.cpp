// Второе задание
#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;

    int num1 = num / 100;
    int num2 = num % 100;

    int result = num2 * 10 + num1;

    cout << result;
}