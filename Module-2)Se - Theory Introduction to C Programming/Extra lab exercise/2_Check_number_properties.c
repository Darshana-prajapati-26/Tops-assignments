#include <stdio.h>

int main() {
    int num;

    // Taking input
    printf("Enter an integer: ");
    scanf("%d", &num);

    // 1. Check even or odd using modulus operator
    if (num % 2 == 0) {
        printf("%d is Even.\n", num);
    } else {
        printf("%d is Odd.\n", num);
    }

    // 2. Check positive, negative, or zero
    if (num > 0) {
        printf("%d is Positive.\n", num);
    } else if (num < 0) {
        printf("%d is Negative.\n", num);
    } else {
        printf("The number is Zero.\n");
    }

    // 3. Check multiple of both 3 and 5
    if (num % 3 == 0 && num % 5 == 0) {
        printf("%d is a multiple of both 3 and 5.\n", num);
    } else {
        printf("%d is NOT a multiple of both 3 and 5.\n", num);
    }

    return 0;
}
