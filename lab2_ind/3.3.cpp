#include <iostream>
using namespace std;

int main() 
{
    double x, y;
    cout << "Введите координаты точки: ";
    cin >> x >> y;

    if (x <= 0 && y >= 0 && y <= 2*x + 6) cout << "Входит";
    else if (x >= 0 && x <= 3 && x*x + y*y <= 36) cout << "Входит";
    else
        cout << "Точка вне области";

    return 0;
}