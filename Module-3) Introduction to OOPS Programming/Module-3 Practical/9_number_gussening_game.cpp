//Number Guessing Game
//  o Write a C++ program that asks the user to guess a number between 1 and 100. The program should provide hints if the guess is too high or too low. Use loops to allow the user multiple attempts.
//  o Objective: Understand while loops and conditional logic.

#include <iostream>
using namespace std;

int main() {
    int secretNumber = 42; // Fixed secret number
    int guess;
    int attempts = 0;

    cout << "=== Number Guessing Game ===" << endl;
    cout << "Guess the number between 1 and 100." << endl;

    while (true) {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess < 1 || guess > 100) {
            cout << "Please enter a number between 1 and 100!" << endl;
        }
        else if (guess > secretNumber) {
            cout << "Too high! Try again." << endl;
        }
        else if (guess < secretNumber) {
            cout << "Too low! Try again." << endl;
        }
        else {
            cout << "Congratulations! You guessed the number in "
                 << attempts << " attempts." << endl;
            break; // Exit the loop
        }
    }

    return 0;
}
