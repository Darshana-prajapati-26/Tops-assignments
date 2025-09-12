#include <stdio.h>

int main() {
    int N, i;
    float sum = 0, average;

    // Input number of elements
    printf("Enter how many numbers you want to input: ");
    scanf("%d", &N);

    int arr[N]; // array size N

    // Input elements
    printf("Enter %d numbers:\n", N);
    for (i = 0; i < N; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i]; // add to sum while taking input
    }

    // Calculate average
    average = sum / N;

    // Output results
    printf("\nSum of array elements: %.2f\n", sum);
    printf("Average of array elements: %.2f\n", average);

    return 0;
}
