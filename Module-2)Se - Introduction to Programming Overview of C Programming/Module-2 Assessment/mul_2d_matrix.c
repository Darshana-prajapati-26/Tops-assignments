#include <stdio.h>

// Function to take matrix input from the user
void inputMatrix(int rows, int cols, int matrix[rows][cols], char name) {
    printf("\nEnter elements of Matrix %c (%d x %d):\n", name, rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to display a matrix in proper format
void displayMatrix(int rows, int cols, int matrix[rows][cols], char name) {
    printf("\nMatrix %c (%d x %d):\n", name, rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%5d ", matrix[i][j]); // Proper spacing for clean output
        }
        printf("\n");
    }
}

// Function to multiply two matrices
void multiplyMatrices(int r1, int c1, int matrix1[r1][c1],
                      int r2, int c2, int matrix2[r2][c2],
                      int result[r1][c2]) {
    // Initialize result matrix to 0
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
        }
    }

    // Matrix multiplication logic
    for (int i = 0; i < r1; i++) {           // Loop over rows of first matrix
        for (int j = 0; j < c2; j++) {       // Loop over columns of second matrix
            for (int k = 0; k < c1; k++) {   // Loop for multiplying and adding
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

int main() {
    int r1, c1, r2, c2;

    printf("=== Matrix Multiplication Program ===\n");

    // Input dimensions for first matrix
    printf("\nEnter rows and columns for Matrix A: ");
    scanf("%d %d", &r1, &c1);

    // Input dimensions for second matrix
    printf("Enter rows and columns for Matrix B: ");
    scanf("%d %d", &r2, &c2);

    // Validate multiplication rule
    if (c1 != r2) {
        printf("\nError: Matrix multiplication not possible!\n");
        printf("Number of columns of Matrix A must equal number of rows of Matrix B.\n");
        return 1; // Exit program
    }

    // Declare matrices
    int matrixA[r1][c1], matrixB[r2][c2], result[r1][c2];

    // Take matrix inputs
    inputMatrix(r1, c1, matrixA, 'A');
    inputMatrix(r2, c2, matrixB, 'B');

    // Display the input matrices
    displayMatrix(r1, c1, matrixA, 'A');
    displayMatrix(r2, c2, matrixB, 'B');

    // Multiply matrices
    multiplyMatrices(r1, c1, matrixA, r2, c2, matrixB, result);

    // Display the result
    displayMatrix(r1, c2, result, 'R');

    printf("\n=== Program Completed Successfully ===\n");

    return 0;
}
