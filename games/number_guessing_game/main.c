#include <stdio.h>
#include <stdlib.h>
#include <time.h>

////NUMBER GUESSING GAME

    // Description:
    // This program is a number guessing game where the player needs to guess a randomly generated
    // number between 1 and 100. The player has 10 attempts to guess the correct number. After
    // each attempt, the program provides feedback to the player indicating if their guess is too
    // high, too low, or correct. If the player guesses the correct number within the given attempts,
    // they win; otherwise, they lose. The program also ensures that the player enters valid numbers
    // between 1 and 100 and prevents entering the same number multiple times.

int numEntered[10]; // Array to store entered numbers

int main() {
    srand(time(0));
    const int MIN = 1;
    const int MAX = 100;
    int numToGuess = (rand() % MAX) + MIN;

    printf("numToGuess: %d\n", numToGuess);

    int attemptsLeft = 10;
    int try;



    while (1) {
        if (attemptsLeft <= 0) {
            printf("You lose! No attempt left\n");
            break;
        }

        printf("Enter a number:\n");
        scanf("%d", &try);

        if (try <= 0 || try > 100) {
            printf("Numbers should be between 1 and 100\n");
            continue; // Restart the loop if the input is invalid
        }

        // Check if the entered number is already entered
        int alreadyEntered = 0;
        for (int i = 0; i < 10; i++) {
            if (try == numEntered[i]) {
                alreadyEntered = 1;
                printf("Number already entered, try another one\n");
                break;
            }
        }

        if (alreadyEntered) {
            continue; // Restart the loop if the number is already entered
        }

        numEntered[10 - attemptsLeft] = try; // Store the entered number in the array

        if (try == numToGuess) {
            printf("You won! The secret number is: %d\n", numToGuess);
            break;
        } else if (try < numToGuess) {
            printf("Your number is too low!\n");
        } else if (try > numToGuess) {
            printf("Your number is too high!\n");
        }

        attemptsLeft--;
        printf("You have %d attempts left\n", attemptsLeft);
    }

    return 0;
}
