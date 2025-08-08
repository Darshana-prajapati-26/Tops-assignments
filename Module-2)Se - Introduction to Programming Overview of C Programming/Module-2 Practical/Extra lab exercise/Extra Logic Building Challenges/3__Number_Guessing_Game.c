#include <stdio.h>
#include <stdlib.h> // for rand(), srand()
#include <time.h>   // for time()

int main() {
    int number, guess, attempts = 0, maxAttempts = 7;

    // Seed random number generator
    srand(time(0));

    // Generate random number between 1 and 100
    number = rand() % 100 + 1;

    printf("=== Number Guessing Game ===\n");
    printf("I have chosen a number between 1 and 100.\n");
    printf("You have %d attempts to guess it!\n", maxAttempts);

    // Game loop
    while (attempts < maxAttempts) {
        printf("\nEnter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess == number) {
            printf("🎉 Congratulations! You guessed it in %d attempts!\n", attempts);
            break;
        }
        else if (guess > number) {
            printf("Too high! Try a smaller number.\n");
        }
        else {
            printf("Too low! Try a bigger number.\n");
        }

        if (attempts == maxAttempts) {
            printf("\n💔 Sorry, you've used all attempts. The number was %d.\n", number);
        }
    }

    return 0;
}
