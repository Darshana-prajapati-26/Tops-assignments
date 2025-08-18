// Write a C++ program that performs both implicit and explicit type conversions and prints the results.
// o Objective: Practice type casting in C++.

#include <iostream>
using namespace std;

int main() {
    // Implicit type conversion (automatic)
    int intVar = 10;
    double doubleVar;

    // int is implicitly converted to double
    doubleVar = intVar;
    cout << "Implicit Conversion: int " << intVar << " to double = " << doubleVar << endl;

    // Another example: double to int (fraction lost)
    doubleVar = 9.99;
    intVar = doubleVar;  // implicit conversion, decimal part truncated
    cout << "Implicit Conversion: double " << 9.99 << " to int = " << intVar << endl;

    // Explicit type conversion (type casting)
    double x = 7.85;
    int y;

    // Using C++ style static_cast for explicit conversion
    y = static_cast<int>(x);
    cout << "Explicit Conversion using static_cast: double " << x << " to int = " << y << endl;

    // Using C-style cast for explicit conversion
    y = (int)x;
    cout << "Explicit Conversion using C-style cast: double " << x << " to int = " << y << endl;

    // Example: converting int to char explicitly
    int asciiCode = 65;
    char letter = static_cast<char>(asciiCode);
    cout << "Explicit Conversion: int " << asciiCode << " to char = " << letter << endl;

    return 0;
}
