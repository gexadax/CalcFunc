#include "calculate.h"
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    string input;
    while (true) {
        cout << "Введите символ операции и два значения (+, -, *, /, !, ^), либо 'q' для выхода: \nВнимание! \n(Факториал числа вводится два раза)"  << endl;
        cin >> input;    
        if (input == "q")   
            break;
        int a, b;  
        char operation = input[0];
        cin >> a >> b;
        switch (operation) {
        case '+':
            cout << addition(a, b) << endl;
            break;
        case '-':
            cout << subtraction(a, b) << endl;
            break;
        case '*':
            cout << multiplication(a, b) << endl;
            break;
        case '/':
            cout << division(a, b) << endl;
            break;
        case '!':
            cout << factorial(a) << endl;
            break;
        case '^':
            cout << degree(a, b) << endl;
            break;
        default:
            cout << "ошибка ввода" << endl;
            break;
        }
    }
    return 0;
}