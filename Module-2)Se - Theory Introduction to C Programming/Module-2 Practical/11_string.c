// Q-11-
// Write a C program that takes two strings from the user and concatenates them using strcat(). 
// Display the concatenated string and its length using strlen(). 

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    // Taking two strings from the user
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    // Remove newline character if present
    str1[strcspn(str1, "\n")] = '\0';

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    // Concatenating str2 to str1
    strcat(str1, str2);

    // Displaying the result
    printf("Concatenated String: %s\n", str1);
    printf("Length of Concatenated String: %lu\n", strlen(str1));

    return 0;
}
