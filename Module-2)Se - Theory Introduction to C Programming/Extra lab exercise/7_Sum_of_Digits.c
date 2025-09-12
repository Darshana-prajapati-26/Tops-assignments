#include <stdio.h>
//gcc 7_Sum_of_Digits.c

int main() {
    int num, temp, sum = 0, reverse = 0, digit;

    // Input number
    printf("Enter an integer: ");
    scanf("%d", &num);

    temp = num; // Keep original number for reversing

    // While loop to process each digit
    while (temp != 0) {
        digit = temp % 10;       // Get last digit
        sum += digit;            // Add digit to sum
        reverse = reverse * 10 + digit; // Build reversed number
        temp /= 10;              // Remove last digit
    }

    // Output results
    printf("Sum of digits: %d\n", sum);
    printf("Reversed number: %d\n", reverse);

    return 0;
}
