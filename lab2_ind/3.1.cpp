#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    int n; 
    double val, t;
    cout << "Введите номер элемента и его значение: ";
    cin >> n >> val;
    
    switch(n) {
        case 1: t = val; break;                     
        case 2: t = val; break;                     
        case 3: t = val * 2 / sqrt(3); break;       
        case 4: t = sqrt(val * 2 / (3*sqrt(3))); break; 
        case 5: t = val / 6; break;                 
    }

    cout << "1. t = " << t << endl;
    cout << "2. R = " << t << endl;
    cout << "3. r = " << (sqrt(3)/2)*t << endl;
    cout << "4. S = " << 3*sqrt(3) / 2 *t*t << endl;
    cout << "5. P = " << 6*t << endl;

    return 0;
}