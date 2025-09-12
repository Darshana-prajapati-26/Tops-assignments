#include <stdio.h>
//gcc 1_Simple_calculater.c

int main() {
    double num1, num2; // variables for input numbers (double to handle decimal)
    char op;           // variable for operator
    double result;     // to store the result

    // Taking input from the user
    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &op); // space before %c to avoid newline character issues

    printf("Enter second number: ");
    scanf("%lf", &num2);

    // Perform operation based on operator
    switch (op) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2lf\n", result);//%.2lf is a format specifier used in C’s printf() to print a double value:
            break;

        case '-':
            result = num1 - num2;
            printf("Result: %.2lf\n", result);
            break;

        case '*':
            result = num1 * num2;
            printf("Result: %.2lf\n", result);
            break;

        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2lf\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;

        case '%':
            // Modulus works with integers
            if ((int)num2 != 0) {
                printf("Result: %d\n", (int)num1 % (int)num2);
            } else {
                printf("Error: Modulus by zero is not allowed.\n");
            }
            break;

        default:
            printf("Error: Invalid operator. Please use +, -, *, /, or %%.\n");
    }

    return 0;
}

