#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    int dM, dW;
    cout << "Введите дату: ";
    cout << "День месяца: ";
    cin >> dM;
    cout << "Номер дня в неделе: ";
    cin >> dW;
    if (13 == dM)
        if (5 == dW)
            cout << "неудачный день ";
        else
            if (2 == dW)
                cout << "неудачный день ";
    if (dW == 5 and dM == 17)
        cout <<"Неудачный день";
    return 0;
}