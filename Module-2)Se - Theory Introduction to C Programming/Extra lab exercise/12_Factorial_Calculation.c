#include <stdio.h>
#include <time.h>
//gcc 12_Factorial_Calculation.c

// Recursive factorial function
unsigned long long factorial_recursive(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial_recursive(n - 1);
}

// Iterative factorial function
unsigned long long factorial_iterative(int n) {
    unsigned long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num;
    clock_t start, end;
    double time_iter, time_rec;

    // Input
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 0;
    }

    // Iterative factorial timing
    start = clock();
    unsigned long long fact_iter = factorial_iterative(num);
    end = clock();
    time_iter = ((double)(end - start)) / CLOCKS_PER_SEC;

    // Recursive factorial timing
    start = clock();
    unsigned long long fact_rec = factorial_recursive(num);
    end = clock();
    time_rec = ((double)(end - start)) / CLOCKS_PER_SEC;

    // Output results
    printf("\nFactorial of %d (Iterative) = %llu, Time: %lf seconds\n",
            num, fact_iter, time_iter);
    printf("Factorial of %d (Recursive) = %llu, Time: %lf seconds\n",
            num, fact_rec, time_rec);

    return 0;
}
