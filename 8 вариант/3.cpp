// Третье задание
#include <iostream> 
#include <cmath>    

int main() 
{
    int a, b, c;                     
    std::cin >> a >> b >> c;        
    int summa = a + b + c;             
    int proizv = a * b * c;           

    ( (summa % 2 == 0) ?
        (std::cout << summa << " " << proizv << std::endl)  // если сумма чётная — выводится сумма и произведение
      :
        (std::cout << ( (b > c) ? b : c ) << std::endl) // иначе — выводится максимум из b и c
    );

    return 0;
}


