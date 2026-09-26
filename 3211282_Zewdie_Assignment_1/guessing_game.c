/*
 * Program Name:EECS 348 Assignment 1
 * Description: This is a guessing game where the user tries to guess a fixed secret number between 1 and 10.
 * Inputs: The user's guesses
 * Output: Prompts, some hints, and a final win or lose message.
 * Collaborators: ChatGPT (OpenAI)
 * Other Sources: None
 * Author: Meklit Zewdie
 * Creation Date: 09/10/2026
 * Revision Date: 09/25/2026
 * Revisions: Added input validation and improved comments.
 */

#include <stdio.h> 

int main(void)  // Starts the main function.
{
    int secretNumber = 7;  //This stores the fixed secret number.
    int guess = 0;         //This stores the user's current guess.
    int attempts = 0;     // Counts the number of guesses
    int correct = 0;      // Tracks if the user guessed correctly.

    printf("Guess a number between 1 and 10.\n");  // Displays the instructions.
    // This allows the user to make up to 3 guesses.
    while (attempts < 3 && correct == 0)
    {
        attempts++;  // Increases the number of attempts.

        printf("Attempt %d/3. Enter your guess: ", attempts);  // This prompts the user for a guess.

        // Checks whether the user entered an integer.
        if (scanf("%d", &guess) != 1)
        {
            printf("Invalid input. Please enter a whole number.\n");
            return 1;  // Ends the program if the input is not an integer.
        }

        //This checks if the guess is correct.
        if (guess == secretNumber)
        {
            printf("Correct! You win!\n");
            correct = 1;  // Records that the user won.
        }
        //Checks if the guess is lower than the secret number.
        else if (guess < secretNumber)
        {
            printf("Too low! Try again.\n");
        }
        // Runs when the guess entered is higher than the secret number.
        else
        {
            printf("Too high! Try again.\n");
        }
    }

    // Prints the lose message if the user did not guess the secret correctly.
    if (correct == 0)
    {
        printf("You lose! The secret number was %d.\n", secretNumber);
    }

    return 0;
}