#include "calculate.h"
#include <iostream>
using namespace std;

int addition(int a, int b) {
    return a + b;
}

int subtraction(int a, int b) {
    return a - b;
}

int multiplication(int a, int b) {
    return a * b;
}

int division(int a, int b) {
    if (b == 0 || a == 0)
    {
        cout << "На 0 делить нельзя" << endl;
    }
    return a / b;
}

int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

int degree(int a, int b) {
    if (b == 0) return 1;
    return a * degree(a, b - 1);
}