//Write a C++ program that demonstrates the use of variables and constants. Create variables of different data types and perform operations on them.
// o Objective: Understand the difference between variables and constants.

#include <iostream>
using namespace std;

#define PI 3.14159   // Constant defined using macro

int main() {
    // ---------------------------
    // Step 1: Declare variables of different data types
    // ---------------------------
    int age = 20;             // Integer variable
    float height = 5.8f;      // Float variable (suffix 'f' for float literal)
    double weight = 65.4;     // Double variable
    char grade = 'A';         // Character variable
    string name = "Alice";    // String variable

    // ---------------------------
    // Step 2: Declare a constant using 'const' keyword
    // ---------------------------
    const int BIRTH_YEAR = 2005;  // Constant variable (value cannot be changed later)

    // ---------------------------
    // Step 3: Display initial values
    // ---------------------------
    cout << "Initial Details:" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Height: " << height << " m" << endl;
    cout << "Weight: " << weight << " kg" << endl;
    cout << "Grade: " << grade << endl;
    cout << "Birth Year (constant): " << BIRTH_YEAR << endl;
    cout << "Value of PI constant: " << PI << endl;

    // ---------------------------
    // Step 4: Perform operations on variables
    // ---------------------------
    age = age + 1;          // Increase age by 1
    height += 0.1f;         // Increase height by 0.1
    weight *= 1.05;         // Increase weight by 5%
    grade = 'B';            // Change grade

    // Calculate area of a circle using PI constant
    double radius = 7.0;
    double area = PI * radius * radius;

    // ---------------------------
    // Step 5: Display updated values
    // ---------------------------
    cout << "\nAfter Updates:" << endl;
    cout << "Age: " << age << endl;
    cout << "Height: " << height << " m" << endl;
    cout << "Weight: " << weight << " kg" << endl;
    cout << "Grade: " << grade << endl;
    cout << "Area of circle: " << area << " sq.units" << endl;

    // ---------------------------
    // Step 6: Show constant immutability
    // ---------------------------
    // Uncommenting the next line will cause a compile-time error
    // BIRTH_YEAR = 2010; 

    return 0;
}
