#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    double x, y, z, a, b, min2;
    
    cout << "Введите размеры кирпича:\n";
    cout << "X = ";
    cin >> x;
    cout << "Y = ";
    cin >> y;
    cout << "Z = ";
    cin >> z;
    
    cout << "Введите размеры отверстия:\n";
    cout << "A = ";
    cin >> a;
    cout << "B = ";
    cin >> b;

    double min1 = min(x, min(y, z));
    
    if (x == min1) 
        min2 = min(y, z);
    else 
        if (y == min1) 
            min2 = min(x, z);
    else 
        min2 = min(x, y);
    

    if ((min1 <= a and min2 <= b) or (min1 <= b and min2 <= a)) 
        cout << "Кирпич пройдет через отверстие";
    else 
        cout << "Кирпич НЕ пройдет через отверстие";
    
    
    return 0;
}