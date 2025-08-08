// Q-7 - 
// Write a C program that uses the break statement to stop printing numbers when it reaches 5.
//  Modify the program to skip printing the number 3 using the continue statement. 

#include <stdio.h>

int main() {
    int i;

    // Part 1: Using break
    printf("Using break (stop when number reaches 5):\n");
    for (i = 1; i <= 10; i++) {
        if (i == 5) {
            break; // Exit the loop when i is 5
        }
        printf("%d ", i);
    }

    printf("\n\n");

    // Part 2: Using continue
    printf("Using continue (skip number 3):\n");
    for (i = 1; i <= 5; i++) {
        if (i == 3) {
            continue; // Skip printing when i is 3
        }
        printf("%d ", i);
    }

    return 0;
}
