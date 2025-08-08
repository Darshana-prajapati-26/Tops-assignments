#include <stdio.h>

int main() {
    int i, j;
    
    // ===== For 2x2 Matrix Addition =====
    int a2[2][2], b2[2][2], sum2[2][2];

    printf("Enter elements of first 2x2 matrix:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("a2[%d][%d]: ", i, j);
            scanf("%d", &a2[i][j]);
        }
    }

    printf("Enter elements of second 2x2 matrix:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("b2[%d][%d]: ", i, j);
            scanf("%d", &b2[i][j]);
        }
    }

    // Addition for 2x2
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            sum2[i][j] = a2[i][j] + b2[i][j];
        }
    }

    printf("\nResultant 2x2 Matrix after Addition:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d\t", sum2[i][j]);
        }
        printf("\n");
    }

    // ===== CHALLENGE: 3x3 Addition & Multiplication =====
    int a3[3][3], b3[3][3], sum3[3][3], product3[3][3];

    printf("\nEnter elements of first 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("a3[%d][%d]: ", i, j);
            scanf("%d", &a3[i][j]);
        }
    }

    printf("Enter elements of second 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("b3[%d][%d]: ", i, j);
            scanf("%d", &b3[i][j]);
        }
    }

    // Addition for 3x3
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            sum3[i][j] = a3[i][j] + b3[i][j];
        }
    }

    // Multiplication for 3x3
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            product3[i][j] = 0; // initialize
            for (int k = 0; k < 3; k++) {
                product3[i][j] += a3[i][k] * b3[k][j];
            }
        }
    }

    printf("\nResultant 3x3 Matrix after Addition:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", sum3[i][j]);
        }
        printf("\n");
    }

    printf("\nResultant 3x3 Matrix after Multiplication:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", product3[i][j]);
        }
        printf("\n");
    }

    return 0;
}
