// Q-8-
// Write a C program that calculates the factorial of a number using a function. 
// Include function declaration, definition, and call. 
#include <stdio.h>

// Function Declaration
int factorial(int n);

int main() {
    int num, result;

    // Input from user
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Function Call
    result = factorial(num);

    // Display result
    printf("Factorial of %d is: %d\n", num, result);

    return 0;
}

// Function Definition
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i; // same as fact = fact * i
    }
    return fact;
}
