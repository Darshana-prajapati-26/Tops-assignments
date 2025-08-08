#include <stdio.h>

// Recursive function to calculate nCr (binomial coefficient)
int binomialCoeff(int n, int r) {
    if (r == 0 || r == n)
        return 1;
    else
        return binomialCoeff(n - 1, r - 1) + binomialCoeff(n - 1, r);
}

int main() {
    int n, i, j, num;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    printf("\nPascal's Triangle using loops:\n");
    for (i = 0; i < n; i++) {
        // Print spaces for alignment
        for (j = 0; j < n - i - 1; j++)
            printf("  ");

        num = 1;
        for (j = 0; j <= i; j++) {
            printf("%4d", num);
            num = num * (i - j) / (j + 1); // formula for next number
        }
        printf("\n");
    }

    printf("\nPascal's Triangle using recursion:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n - i - 1; j++)
            printf("  ");

        for (j = 0; j <= i; j++)
            printf("%4d", binomialCoeff(i, j));

        printf("\n");
    }

    return 0;
}
