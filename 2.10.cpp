#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    double x, y, z;
    cout << "Введите стороны (x y z): ";
    cin >> x >> y >> z;
    
    if ((x + y > z) and (x + z > y) and (z + y > x) and x > 0 and y > 0 and z > 0)
    {    
        cout << "a) yes\n";
        
        if (x == y && y == z) {
            cout << "б) равносторонний";
        }
        else if (x == y || x == z || y == z) {
            cout << "б) равнобедренный";
        }
        else if ((x * x == y * y + z * z) or (x * x + y * y == z * z) or (y * y == x * x + z * z)) {
            cout << "б) прямоуг"; 
        }
    }        
    else
    {
        cout << "a) no";
    }
    return 0;
}