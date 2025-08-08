#include <stdio.h>

int main() {
    int num, start, end;

    // Taking input from user
    printf("Enter a number for multiplication table: ");
    scanf("%d", &num);

    printf("Enter starting range: ");
    scanf("%d", &start);

    printf("Enter ending range: ");
    scanf("%d", &end);

    printf("\nMultiplication Table of %d from %d to %d:\n", num, start, end);

    // Printing multiplication table using for loop
    for (int i = start; i <= end; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}
