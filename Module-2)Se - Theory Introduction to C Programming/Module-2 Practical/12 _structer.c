// Q-12 - 
// Write a C program that defines a structure to store a student's details (name, roll number, and marks).
//  Use an array of structures to store details of 3 students and print them. 
#include <stdio.h>

// Define structure
struct Student {
    char name[50];
    int rollNo;
    float marks;
};

int main() {
    struct Student s[3];  // Array of structures for 3 students

    // Input student details
    for(int i = 0; i < 3; i++) {
        printf("\nEnter details for Student %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", s[i].name);  // Read string with spaces
        printf("Roll Number: ");
        scanf("%d", &s[i].rollNo);
        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    // Display student details
    printf("\n--- Student Details ---\n");
    for(int i = 0; i < 3; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name      : %s\n", s[i].name);
        printf("Roll No.  : %d\n", s[i].rollNo);
        printf("Marks     : %.2f\n", s[i].marks);
    }

    return 0;
}
