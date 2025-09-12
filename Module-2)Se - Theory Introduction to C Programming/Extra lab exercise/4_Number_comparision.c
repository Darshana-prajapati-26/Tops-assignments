#include <stdio.h>

int main() {
    int a, b, c;
    int largest, smallest;

    // ===== INPUT =====
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    /* ============================================================
       PART 1: Using if-else statements
       ============================================================ */
    printf("\n--- Using if-else ---\n");

    // Largest number
    if (a >= b && a >= c)
        printf("Largest: %d\n", a);
    else if (b >= a && b >= c)
        printf("Largest: %d\n", b);
    else
        printf("Largest: %d\n", c);

    // Smallest number
    if (a <= b && a <= c)
        printf("Smallest: %d\n", a);
    else if (b <= a && b <= c)
        printf("Smallest: %d\n", b);
    else
        printf("Smallest: %d\n", c);

    /* ============================================================
       PART 2: Using switch-case
       (Here we find largest & smallest first using ternary operator,
       then display using switch.)
       ============================================================ */
    printf("\n--- Using switch-case ---\n");

    // Find largest
    largest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    // Find smallest
    smallest = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);

    // Using switch with constant 1 (trick to run sequential cases)
    switch (1) {
        case 1:
            printf("Largest: %d\n", largest);
        case 2:
            printf("Smallest: %d\n", smallest);
            break;
    }

    return 0;
}
