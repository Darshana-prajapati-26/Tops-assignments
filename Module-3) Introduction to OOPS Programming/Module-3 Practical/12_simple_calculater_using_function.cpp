//1. Simple Calculator Using Functions
// Write a C++ program that defines functions for basic arithmetic operations (add, subtract, multiply, divide). The main function should call these based on user input. 
//o Objective: Practice defining and using functions in C++.

#include <iostream>
using namespace std;

// Function definitions
double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b != 0)
        return a / b;
    else {
        cout << "Error: Division by zero!" << endl;
        return 0;
    }
}

int main() {
    double num1, num2;
    int choice;

    cout << "Simple Calculator\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    switch (choice) {
        case 1:
            cout << "Result: " << add(num1, num2) << endl;
            break;
        case 2:
            cout << "Result: " << subtract(num1, num2) << endl;
            break;
        case 3:
            cout << "Result: " << multiply(num1, num2) << endl;
            break;
        case 4:
            cout << "Result: " << divide(num1, num2) << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}
