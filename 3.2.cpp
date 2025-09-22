#define _USE_MATH_DEFINES
#include <iostream>
using namespace std;
#include <cmath>
int main() 
{
    setlocale(0,"");
    double x, p;
    p = M_PI;
    cout <<"Введите число: ";
    cin >> x;
    if (x <= 5) cout << p * x - (p / 2);
    else if (x > 5 && x < 15) cout << x * x + 10;
    else cout << (2 * sqrt(x + 1)) / x;

    return 0;
}