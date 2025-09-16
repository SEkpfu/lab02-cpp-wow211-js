#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    int x; // переменная для хранения оценки
    cout << "введите свою оценку: ";
    cin >> x;
    switch (x) {
        case 5: cout << "отлично"; break;   
        case 4: cout << "xopoшo";
        case 3: cout << "удовлетворительно"; break;
        case 2:
        case 1: cout << "nлoxo "; break;
        default: cout << "неверные данные";
    }

    return 0; 
}