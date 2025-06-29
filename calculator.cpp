#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;
    bool running = true;

    cout << "Simple Calculator\n";
    cout << "Operations: + - * /\n";

    while (running) {
        cout << "\nEnter first number: ";
        cin >> num1;

        cout << "Enter operator (+, -, *, /): ";
        cin >> op;

        cout << "Enter second number: ";
        cin >> num2;

        switch (op) {
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
                if (num2 != 0)
                    cout << "Result: " << num1 / num2 << endl;
                else
                    cout << "Error: Division by zero is undefined." << endl;
                break;
            default:
                cout << "Invalid operator!" << endl;
                break;
        }

        char choice;
        cout << "Do you want to perform another calculation? (y/n): ";
        cin >> choice;
        if (choice != 'y' && choice != 'Y') {
            running = false;
            cout << "Calculator exiting. Goodbye!" << endl;
        }
    }

    return 0;
}

