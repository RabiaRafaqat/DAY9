#include <iostream>
using namespace std;

int main() {
    char operation;
    double num1, num2;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> operation;
    cout << "Enter second number: ";
    cin >> num2;

    switch (operation) {
        case '+':
            cout << "Result: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Result: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Result: " << num1 * num2 << endl;
            break;
        case '/':
                cout << "Result: " << num1 / num2 << endl;
            break;
        default:
            cout << "Error: Invalid operator." << endl;
            break;
    }

    return 0;
}
