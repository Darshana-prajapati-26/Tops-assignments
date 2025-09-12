#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to check if a number is a palindrome
int isNumberPalindrome(int num) {
    int original = num, reversed = 0, digit;
    while (num != 0) {
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    return (original == reversed);
}

// Function to check if a string is a palindrome
int isStringPalindrome(char str[]) {
    int left = 0;
    int right = strlen(str) - 1;

    // Ignore case & spaces
    while (left < right) {
        while (left < right && !isalnum(str[left])) left++;
        while (left < right && !isalnum(str[right])) right--;

        if (tolower(str[left]) != tolower(str[right])) {
            return 0; // Not a palindrome
        }
        left++;
        right--;
    }
    return 1; // Palindrome
}

int main() {
    int choice;
    printf("Choose option:\n");
    printf("1. Check Number Palindrome\n");
    printf("2. Check String Palindrome\n");
    printf("Enter choice: ");
    scanf("%d", &choice);
    getchar(); // clear newline from buffer

    if (choice == 1) {
        int num;
        printf("Enter a number: ");
        scanf("%d", &num);
        if (isNumberPalindrome(num))
            printf("%d is a palindrome.\n", num);
        else
            printf("%d is not a palindrome.\n", num);

    } else if (choice == 2) {
        char str[100];
        printf("Enter a string: ");
        fgets(str, sizeof(str), stdin);
        str[strcspn(str, "\n")] = '\0'; // remove newline

        if (isStringPalindrome(str))
            printf("\"%s\" is a palindrome.\n", str);
        else
            printf("\"%s\" is not a palindrome.\n", str);

    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}
