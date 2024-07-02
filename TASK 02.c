#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numberToGuess, guess, attempts = 0;
    srand(time(0)); // seed random number generator
    numberToGuess = rand() % 100 + 1; // generate random number between 1 and 100

    printf("Welcome to the number guessing game!\n");
    printf("I'm thinking of a number between 1 and 100...\n");

    while (1) {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess < numberToGuess) {
            printf("Too low! Try again.\n");
        } else if (guess > numberToGuess) {
            printf("Too high! Try again.\n");
        } else {
            printf("Congratulations! You guessed it in %d attempts.\n", attempts);
            break;
        }
    }

    return 0;
}