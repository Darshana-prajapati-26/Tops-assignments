//3. Variable Scope
//    o Write a program that demonstrates the difference between local and global variables in C++. Use functions to show scope. 
// o Objective: Reinforce the concept of variable scope.

#include <iostream>
using namespace std;

// ---------------------------
// Global variable
// ---------------------------
int globalVar = 100; // Can be accessed by all functions

// Function to show scope
void displayValues() {
    int localVar = 50; // Local variable (only inside this function)
    
    cout << "Inside displayValues():" << endl;
    cout << "Global variable: " << globalVar << endl;
    cout << "Local variable: " << localVar << endl;
}

// Another function to change global variable
void changeGlobal() {
    globalVar = globalVar + 10; // Modifies the global variable
    cout << "\nInside changeGlobal() - Global variable changed to: " << globalVar << endl;
}

int main() {
    int localVar = 25; // Local variable for main()
    
    cout << "Inside main():" << endl;
    cout << "Global variable: " << globalVar << endl;
    cout << "Local variable: " << localVar << endl;

    // Call function to display values
    displayValues();

    // Change the global variable in another function
    changeGlobal();

    // Show global variable again after change
    cout << "\nBack in main() - Global variable is now: " << globalVar << endl;

    // Note: localVar from displayValues() is not accessible here
    // cout << localVar; // This would cause an error if uncommented

    return 0;
}
