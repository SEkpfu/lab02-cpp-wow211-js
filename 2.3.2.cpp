#include <iostream>
using namespace std;
int main()
{
    double x;
    cout <<"Введите число: ";
    cin >> x;
    if (x <= -2)
        cout <<"f(x) = 0";
    else if (x <= 0)
        cout <<"f(x) = " << x * x + 4 * x + 5;
    else
        if (x == 1) 
            cout <<"Нечисловой результат";
        else    
            cout <<"f(x) = " << 1.0 / (x * x + 4 * x - 5);

    return 0;
}