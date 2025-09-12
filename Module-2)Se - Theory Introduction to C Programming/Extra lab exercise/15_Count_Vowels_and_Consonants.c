
#include <stdio.h>
#include <ctype.h> // for isalpha, isdigit, tolower

int main() {
    char str[200];
    int vowels = 0, consonants = 0, digits = 0, specials = 0;
    int i = 0;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Count
    while (str[i] != '\0') {
        char ch = tolower(str[i]); // make lowercase for easy comparison

        if (isalpha(ch)) { // if it's a letter
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
        else if (isdigit(ch)) {
            digits++;
        }
        else if (ch != '\n' && ch != ' ') { // exclude newline and spaces
            specials++;
        }
        i++;
    }

    // Output results
    printf("\nVowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("Special characters: %d\n", specials);

    return 0;
}
