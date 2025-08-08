#include <stdio.h>

int main() {
    int marks;

    // Taking input
    printf("Enter the marks of the student (0-100): ");
    scanf("%d", &marks);

    // Validating marks range
    if (marks < 0 || marks > 100) {
        printf("Invalid marks! Please enter marks between 0 and 100.\n");
    } 
    else if (marks > 90) {
        printf("Grade: A\n");
    } 
    else if (marks > 75 && marks <= 90) {
        printf("Grade: B\n");
    } 
    else if (marks > 50 && marks <= 75) {
        printf("Grade: C\n");
    } 
    else {  // marks <= 50
        printf("Grade: D\n");
    }

    return 0;
}
