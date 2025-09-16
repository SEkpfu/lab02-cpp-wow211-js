#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(0, "");
    double x, y, distance;
    cout << "Введите координаты точки (x y): ";
    cin >> x >> y;
    distance = sqrt(x * x + y * y);

    if (x >= -2 and x <= 0 and y >= 0 and y <= 1)
        cout << "а) да";
    else
        cout << "а) нет";

    cout << "\n";

    if (y >= 0 and y <= 5 and distance >= 0 and distance <= 5)
        cout << "б) да";
    else
        cout << "б) нет";
    
    cout << "\n";

    if (x >= 0 and x <= 6 and distance >= 3 and distance <= 6)
        cout << "в) да";
    else
        cout << "в) нет";
    
    return 0;
}