#include <iostream>
using namespace std;
int main()
{
    setlocale(0,"");
    double r, a, b, z, c;
    cout << "Радиус торта: ";
    cin >> r;
    cout << "Высота торта: ";
    cin >> z;
    cout << "Сторона коробки: ";
    cin >> a;
    cout << "Сторона коробки: ";
    cin >> b;
    cout << "высота коробки: ";
    cin >> c;
    if (r * 2 <= a and r * 2 <= b and c >= z)
        cout <<"поместится";
    else
        cout <<"Не поместится";

    return 0;
}