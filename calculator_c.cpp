#include <iostream>

using namespace std;

class Calculator {
private:
    double num1, num2;

public:
    // Method to set the numbers
    void setValues(double a, double b) {
        num1 = a;
        num2 = b;
    }

    // Arithmetic methods
    double add() { return num1 + num2; }
    double subtract() { return num1 - num2; }
    double multiply() { return num1 * num2; }
    
    double divide() {
        if (num2 == 0) {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
        return num1 / num2;
    }
};

int main() {
    Calculator myCalc;
    double x, y;
    char op;

    cout << "--- C++ OOP Calculator ---" << endl;
    cout << "Enter first number: ";
    cin >> x;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> y;

    myCalc.setValues(x, y);

    cout << "Result: ";
    switch (op) {
        case '+': cout << myCalc.add(); break;
        case '-': cout << myCalc.subtract(); break;
        case '*': cout << myCalc.multiply(); break;
        case '/': cout << myCalc.divide(); break;
        default:  cout << "Invalid Operator";
    }
    cout << endl;

    return 0;
}