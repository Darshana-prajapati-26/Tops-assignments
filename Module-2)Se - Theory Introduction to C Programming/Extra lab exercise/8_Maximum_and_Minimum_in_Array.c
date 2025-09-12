#include <stdio.h>

int main() {
    int arr[10], i, j, temp;
    int max, min;

    // Accept 10 integers from the user
    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Assume first element is both max and min
    max = min = arr[0];

    // Find max and min
    for (i = 1; i < 10; i++) {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    printf("\nMaximum value: %d\n", max);
    printf("Minimum value: %d\n", min);

    // Challenge: Sort array in ascending order (Bubble sort)
    for (i = 0; i < 9; i++) {
        for (j = i + 1; j < 10; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Print sorted array
    printf("\nArray in ascending order: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
