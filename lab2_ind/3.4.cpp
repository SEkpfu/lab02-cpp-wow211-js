#include <iostream>
#include <string>
using namespace std;

int main() 
{
    setlocale(0,"");
    int n;
    cout << "Введите количество шишек: ";
    cin >> n;
    
    string word;
    
    if (n % 10 == 1 && n % 100 != 11)
        word = "ку";
    else if ((n % 10 >= 2 && n % 10 <= 4) && (n % 100 < 10 || n % 100 >= 20))
        word = "ки";
    else
        word = "ек";
    
    cout << "Белка съела " << n << " шиш" << word;
    
    return 0;
}