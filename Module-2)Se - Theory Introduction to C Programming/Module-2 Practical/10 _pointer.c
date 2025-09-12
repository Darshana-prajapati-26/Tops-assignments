// Q-10-
// Write a C program to demonstrate pointer usage. 
// Use a pointer to modify the value of a variable and print the result. 

#include <stdio.h>

int main() {
    int num = 10;       // Original variable
    int *ptr;           // Pointer variable

    ptr = &num;         // ptr stores the address of num

    printf("Original value of num: %d\n", num);
    printf("Address of num: %p\n", ptr);

    *ptr = 25;          // Changing value of num using pointer

    printf("New value of num after using pointer: %d\n", num);

    return 0;
}
