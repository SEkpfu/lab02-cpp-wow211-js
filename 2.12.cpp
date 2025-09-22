#include <iostream>
using namespace std;
int main() 
{
    setlocale(0,"");
    int x, y, z, a, b, c, d;
    cout << "Введите числа: ";
    cin >> x >> y >> z;
    a = 0;
    if (x > 10) a += x;
    if (y > 10) a += y;
    if (z > 10) a += z;
    cout <<"a)" << a;
    cout <<"\n";
    b = 0;
    if (x % 2 == 0) b += 1;
    if (y % 2 == 0) b += 1;
    if (z % 2 == 0) b += 1;
    cout << "b)" << b;
    cout <<"\n";
    c = x + y + z - max(x, max(y,z)) - min(x, min(y,z));
    cout << "c)" << c;
    cout <<"\n";
    d = min(x, min(y,z));
    if (x == d) cout <<"d)1";
    else if (y == d) cout <<"d)2";
    else cout <<"d)3";
    
    return 0;
}