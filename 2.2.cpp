#include <iostream>
using namespace std;
int main()
{
    double x;
    cout <<"Введите число: "; cin >> x;
    if (x == 0)
        cout <<"а)нуль";
    else if (x > 0)
        cout <<"а)положительное";
    else
        cout <<"а)отрицательное";
    cout <<"\n";

    if (int(x) % 2 == 0)
        cout <<"б)четное";
    else
        cout <<"б)нечетное";

    return 0;
}