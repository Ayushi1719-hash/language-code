#include <iostream>
using namespace std;

int main() {

    char op;
    float operand1, operand2;

    cout << "Enter operator (+, -, *, /, %): ";
    cin >> op;

    cout << "Enter two operands: ";
    cin >> operand1 >> operand2;

    switch(op) {

        case '+':
            cout << operand1 << " + " << operand2 << " = " << operand1 + operand2;
            break;

        case '-':
            cout << operand1 << " - " << operand2 << " = " << operand1 - operand2;
            break;

        case '*':
            cout << operand1 << " * " << operand2 << " = " << operand1 * operand2;
            break;

        case '/':
            if (operand2 != 0)
                cout << operand1 << " / " << operand2 << " = " << operand1 / operand2;
            else
                cout << "Error: Division by zero!";
            break;

        case '%':
            cout << "Modulo = " << static_cast<int>(operand1) % static_cast<int>(operand2);
            break;

        default:
            cout << "Error! Operator is not correct";
            break;
    }

    return 0;
}
