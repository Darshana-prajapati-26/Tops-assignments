// 1. Class for a Simple Calculator 
// o Write a C++ program that defines a class Calculator with functions for addition, subtraction, multiplication, and division. Create objects to use these functions. 
// o Objective: Introduce basic class structure. 
#include <iostream>
using namespace std;

class Calculator {
public:
    // Functions for operations
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
};

int main() {
    Calculator calc; // Create object
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
            cout << "Result: " << calc.add(num1, num2) << endl;
            break;
        case 2:
            cout << "Result: " << calc.subtract(num1, num2) << endl;
            break;
        case 3:
            cout << "Result: " << calc.multiply(num1, num2) << endl;
            break;
        case 4:
            cout << "Result: " << calc.divide(num1, num2) << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}
