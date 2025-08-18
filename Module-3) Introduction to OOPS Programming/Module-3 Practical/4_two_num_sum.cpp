// o Write a program that asks for two numbers and displays their sum. Ensure this is done after setting up the IDE (like Dev C++ or CodeBlocks). 
// o Objective: Help students understand how to install, configure, and run programs in an IDE.

#include <iostream>
using namespace std;

int main() {
    int num1, num2, sum;

    // Ask the user to enter the first number
    cout << "Enter first number: ";
    cin >> num1;

    // Ask the user to enter the second number
    cout << "Enter second number: ";
    cin >> num2;

    // Calculate the sum of the two numbers
    sum = num1 + num2;

    // Display the result
    cout << "Sum of " << num1 << " and " << num2 << " is: " << sum << endl;

    return 0;
}
