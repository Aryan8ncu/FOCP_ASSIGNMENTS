//HANGMAN//
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void displayWord(char word[], int revealed[]) {
    for (int i = 0; word[i] != '\0'; i++) {
        if (revealed[i])
            printf("%c ", word[i]);
        else
            printf("_ ");
    }
    printf("\n");
}

int main() {
    char word[] = "COMPUTER"; // The word to guess
    int length = strlen(word);
    int revealed[length]; // Array to track revealed characters
    for (int i = 0; i < length; i++) {
        revealed[i] = 0;
    }

    int chances = 3; // Number of chances
    char guess;
    int correctGuesses = 0;

    printf("Welcome to the Hangman Game!\n\n");
    printf("Guess the word:\n");

    while (chances > 0 && correctGuesses < length) {
        displayWord(word, revealed);
        printf("Enter your guess (a single letter): ");
        scanf(" %c", &guess);
        guess = toupper(guess); // Convert to uppercase for consistency

        int found = 0;
        for (int i = 0; i < length; i++) {
            if (word[i] == guess && !revealed[i]) {
                revealed[i] = 1;
                correctGuesses++;
                found = 1;
            }
        }

        if (!found) {
            chances--;
            printf("Incorrect guess! Remaining chances: %d\n", chances);
        } else {
            printf("Good guess!\n");
        }
    }

    if (correctGuesses == length) {
        printf("\nCongratulations! You guessed the word: %s\n", word);
    } else {
        printf("\nGame over! The man is hanged.\n");
        printf("The correct word was: %s\n", word);
    }

    return 0;
}