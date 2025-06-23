#include <iostream>  // for input and output
#include <cstdlib>   // for rand() and srand()
#include <ctime>     // for time()

using namespace std;

int main() {
    srand(time(0));  // Seed the random number generator with current time

    // Generate a random number between 1 and 100
    int numberToGuess = rand() % 100 + 1;

    int userGuess;   // Variable to store the user's guess
    int attempts = 0; // Count the number of attempts

    // Introductory message
    cout << "Welcome to the Number Guessing Game!\n";
    cout << "I'm thinking of a number between 1 and 100.\n";

    // Start guessing loop
    do {
        cout << "Enter your guess: ";
        cin >> userGuess;  // Read user input
        attempts++;        // Increment attempt count

        // Give feedback based on the guess
        if (userGuess > numberToGuess) {
            cout << "Too high! Try again.\n";
        } else if (userGuess < numberToGuess) {
            cout << "Too low! Try again.\n";
        } else {
            // Correct guess
            cout << "🎉 Congratulations! You guessed it in " << attempts << " attempts.\n";
        }

    } while (userGuess != numberToGuess); // Loop until the correct guess

    return 0;  // Exit the program
}
