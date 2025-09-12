// Q-9-
// Write a C program that stores 5 integers in a one-dimensional array and prints them. 
// Extend this to handle a two-dimensional array (3x3 matrix) and calculate the sum of all elements. 

#include <stdio.h>

int main() {
    // Part 1: One-Dimensional Array
    int arr[5];
    printf("Enter 5 integers for the 1D array:\n");
    for (int i = 0; i < 5; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\n1D Array Elements:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    // Part 2: Two-Dimensional Array (3x3 Matrix)
    int matrix[3][3];
    int sum = 0;

    printf("\n\nEnter values for a 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j]; // Add to sum while reading
        }
    }

    printf("\n3x3 Matrix Elements:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nSum of all elements in the matrix: %d\n", sum);

    return 0;
}
