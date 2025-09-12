#include <stdio.h>
// gcc mul_2d_matrix.c

// Function to take matrix input from user
void inputMatrix(int matrix[10][10], int rows, int cols) {
    printf("Enter elements of the matrix (%d x %d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to display a matrix in proper format
void displayMatrix(int matrix[10][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%5d", matrix[i][j]);  // print in table format
        }
        printf("\n");
    }
}

// Function to multiply two matrices
void multiplyMatrix(int a[10][10], int b[10][10], int result[10][10],
                    int r1, int c1, int r2, int c2) {
    // Initialize result matrix with 0
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
        }
    }

    // Matrix multiplication logic
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

int main() {
    int a[10][10], b[10][10], result[10][10];
    int r1, c1, r2, c2;

    // Input size of first matrix
    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);

    // Input size of second matrix
    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);

    // Check matrix multiplication rule: c1 must equal r2
    if (c1 != r2) {
        printf("\nMatrix multiplication not possible!\n");
        printf("Number of columns of first matrix must be equal to number of rows of second matrix.\n");
        return 0;
    }

    // Input matrices
    printf("\n--- First Matrix ---\n");
    inputMatrix(a, r1, c1);

    printf("\n--- Second Matrix ---\n");
    inputMatrix(b, r2, c2);

    // Display matrices
    printf("\nFirst Matrix:\n");
    displayMatrix(a, r1, c1);

    printf("\nSecond Matrix:\n");
    displayMatrix(b, r2, c2);

    // Multiply matrices
    multiplyMatrix(a, b, result, r1, c1, r2, c2);

    // Display result
    printf("\nResultant Matrix after Multiplication:\n");
    displayMatrix(result, r1, c2);

    return 0;
}
