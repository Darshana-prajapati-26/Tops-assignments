#include <stdio.h>
#include <time.h>

// Recursive function for Fibonacci term
int fibonacci_recursive(int n) {
    if (n == 0) return 0;
    else if (n == 1) return 1;
    else return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);
}

// Iterative function for Fibonacci term
int fibonacci_iterative(int n) {
    int a = 0, b = 1, c, i;
    if (n == 0) return a;
    for (i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int N, i;
    clock_t start, end;
    double time_recursive, time_iterative;

    // Input
    printf("Enter number of terms (N): ");
    scanf("%d", &N);

    // ===== Part 1: Recursive Fibonacci sequence =====
    printf("\nFibonacci sequence (Recursive) up to %d terms:\n", N);
    for (i = 0; i < N; i++) {
        printf("%d ", fibonacci_recursive(i));
    }
    printf("\n");

    // ===== Part 2: Nth Fibonacci number =====
    printf("\nEnter which term's value you want to find (nth term): ");
    int term;
    scanf("%d", &term);

    // Iterative method timing
    start = clock();
    int fib_iter = fibonacci_iterative(term);
    end = clock();
    time_iterative = ((double)(end - start)) / CLOCKS_PER_SEC;

    // Recursive method timing
    start = clock();
    int fib_rec = fibonacci_recursive(term);
    end = clock();
    time_recursive = ((double)(end - start)) / CLOCKS_PER_SEC;

    // Results
    printf("\nUsing Iterative method: Fib(%d) = %d, Time: %lf seconds\n", term, fib_iter, time_iterative);
    printf("Using Recursive method: Fib(%d) = %d, Time: %lf seconds\n", term, fib_rec, time_recursive);

    return 0;
}
