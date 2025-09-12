#include <stdio.h>
// gcc 9_Matrix_Addition.c


int main() {
    int i, j;

    // ====== 2x2 MATRIX ADDITION ======
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

    // Addition of 2x2
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

    // ====== 3x3 MATRIX ADDITION & MULTIPLICATION ======
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

    // Addition of 3x3
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            sum3[i][j] = a3[i][j] + b3[i][j];
        }
    }

    // Multiplication of 3x3
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            product3[i][j] = 0;  // start with 0 
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
