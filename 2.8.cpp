#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(0, "");
    double x, y, distance, points;
    
    cout << "Введите координаты попадания (x y): ";
    cin >> x >> y;

    distance = sqrt(x * x + y * y);
    
    if (distance <= 2) 
        cout <<"10";       
    else if (distance <= 4) 
        cout <<"5";        
    else 
        cout <<"0";             

    return 0;
}