#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    double num1, num2, result;
    char operation;
    
    cout << "Введите первое число: ";
    cin >> num1;
    cout << "Введите второе число: ";
    cin >> num2;
    cout << "Введите операцию (+, -, *, /): ";
    cin >> operation;
    
    switch (operation) {
        case '+':
            result = num1 + num2;
            cout << num1 << " + " << num2 << " = " << result;
            break;
            
        case '-':
            result = num1 - num2;
            cout << num1 << " - " << num2 << " = " << result;
            break;
            
        case '*':
            result = num1 * num2;
            cout << num1 << " * " << num2 << " = " << result;
            break;
            
        case '/':
            result = num1 / num2;
            cout << num1 << " / " << num2 << " = " << result;
            break;
            
        default:
            cout << "еизвестная операция";
            break;
    }
    
    return 0;
}