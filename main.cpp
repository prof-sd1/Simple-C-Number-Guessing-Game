#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int numberToGuess = rand() % 100 + 1;
    int userGuess;
    int attempts = 0;

    cout << "Welcome to the Number Guessing Game!\n";
    cout << "I'm thinking of a number between 1 and 100.\n";

    do {
        cout << "Enter your guess: ";
        cin >> userGuess;
        attempts++;

        if (userGuess > numberToGuess) {
            cout << "Too high! Try again.\n";
        } else if (userGuess < numberToGuess) {
            cout << "Too low! Try again.\n";
        } else {
            cout << "🎉 Congratulations! You guessed it in " << attempts << " attempts.\n";
        }
    } while (userGuess != numberToGuess);

    return 0;
}
