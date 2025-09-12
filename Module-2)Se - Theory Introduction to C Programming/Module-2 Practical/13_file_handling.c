// Q-13-
// Write a C program to create a file, write a string into it, close the file, 
// then open the file again to read and display its contents. 

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char str[100] = "Hello, this is a file handling example in C.";
    char ch;

    // Step 1: Create a file and write a string into it
    fp = fopen("example.txt", "w");  // open file in write mode
    if (fp == NULL) {
        printf("Error! Could not open file.\n");
        exit(1);
    }
    fprintf(fp, "%s", str);  // write string into file
    fclose(fp);  // close the file

    // Step 2: Reopen the file in read mode
    fp = fopen("example.txt", "r");  // open file in read mode
    if (fp == NULL) {
        printf("Error! Could not open file.\n");
        exit(1);
    }

    printf("Contents of the file:\n");
    while ((ch = fgetc(fp)) != EOF) {  // read char by char
        putchar(ch);  // display on screen
    }

    fclose(fp);  // close the file
    return 0;
}
