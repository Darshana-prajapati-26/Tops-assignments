// Nested Control Structures 
// o Write a program that prints a right-angled triangle using stars (*) with a nested loop. 
// o Objective: Learn nested control structures
#include <iostream>
using namespace std;

int main() {
    int rows;

    cout << "Enter the number of rows: ";
    cin >> rows;

    // Outer loop controls the number of rows
    for (int i = 1; i <= rows; i++) {
        // Inner loop prints stars for each row
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl; // Move to the next line
    }

    return 0;
}
