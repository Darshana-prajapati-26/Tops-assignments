#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[200];
    int wordCount = 0, i = 0, maxLen = 0, currLen = 0;
    char longestWord[50], currWord[50];

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline if present
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    while (1) {
        if (!isspace(str[i]) && str[i] != '\0') {
            // part of a word
            currWord[currLen] = str[i];
            currLen++;
        } else {
            // end of a word
            if (currLen > 0) {
                currWord[currLen] = '\0'; // terminate word
                wordCount++;

                if (currLen > maxLen) {
                    maxLen = currLen;
                    strcpy(longestWord, currWord);
                }
                currLen = 0; // reset for next word
            }
        }

        if (str[i] == '\0') break;
        i++;
    }

    printf("\nNumber of words: %d\n", wordCount);
    printf("Longest word: %s (Length: %d)\n", longestWord, maxLen);

    return 0;
}
