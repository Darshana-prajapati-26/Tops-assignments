// Q-3 - 
// Write a C program that includes variables, constants, and comments. 
// Declare and use different data types (int, char, float) and display their values. 

#include <stdio.h>

int main() {
    // Constant declaration
    const float PI = 3.14;

    // Variable declarations
    int age = 20;             // Integer variable
    char grade = 'A';         // Character variable
    float height = 5.9;       // Float variable

    // Displaying the values
    printf("Age: %d\n", age);          // %d is used for int
    printf("Grade: %c\n", grade);      // %c is used for char
    printf("Height: %.1f feet\n", height); // %.1f shows 1 decimal point for float
    printf("Value of PI: %.2f\n", PI);     // %.2f shows 2 decimal points

    return 0;
}
