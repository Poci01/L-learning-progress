#include <iostream>
using namespace std;

int main() {

    char ulang = 'y';
    char op;
    double num1, num2;
while (ulang == 'y' || ulang == 'Y') {
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> num2;

    switch(op) {
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
            if(num2 != 0)
                cout << "Result: " << num1 / num2 << endl;
            else
                cout << "Error: Division by zero is not allowed." << endl;
            break;
        default:
            cout << "Error: Invalid operator." << endl;
    }  
    cout << "Do you want to perform another calculation? (y/n): ";
    cin >> ulang;
    if (ulang != 'y' && ulang != 'Y' && ulang != 'n' && ulang != 'N') {
        cout << "Invalid choice. Please enter only y or n. The calculator will stop." << endl;
        ulang = 'n';
    }
    cout << endl;
}

cout << "Thank you for using the calculator. Goodbye!" << endl;
return 0;
}