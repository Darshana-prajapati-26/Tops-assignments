// Q-13-
// Write a C program to create a file, write a string into it, close the file, 
// then open the file again to read and display its contents. 

#include <stdio.h>

int main() {
    FILE *fptr;
    char str[100];

    // Writing to the file
    fptr = fopen("myfile.txt", "w");  // Open file in write mode
    if (fptr == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    printf("Enter a string to write to the file: ");
    fgets(str, sizeof(str), stdin);  // Read string from user

    fputs(str, fptr);  // Write string to file
    fclose(fptr);  // Close the file

    // Reading from the file
    fptr = fopen("myfile.txt", "r");  // Open file in read mode
    if (fptr == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    printf("\nContent of the file:\n");
    while (fgets(str, sizeof(str), fptr) != NULL) {
        printf("%s", str);  // Print the content of the file
    }

    fclose(fptr);  // Close the file
    return 0;
}
