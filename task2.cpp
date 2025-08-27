#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    int numberToGuess = rand() % 100 + 1;
    int userGuess = 0;

    cout << "I have chosen a number between 1 and 100. Try to guess it!" << endl;

    while (userGuess != numberToGuess) {
        cout << "Enter your guess: ";
        cin >> userGuess;

        if (userGuess > numberToGuess) {
            cout << "Too high! Try again." << endl;
        } else if (userGuess < numberToGuess) {
            cout << "Too low! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the correct number: " 
                 << numberToGuess << endl;
        }
    }

    return 0;
}
