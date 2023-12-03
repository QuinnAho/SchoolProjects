#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    string words[] = {
        "japan",
        "turkey",
        "nepal",
        "malaysia",
        "philippines",
        "australia",
        "america",
        "ethiopia",
        "oman",
        "indonesia"
    };

    cout << "Welcome to Hangman... Guess a country name" << endl;
    cout << "Each letter is represented by a star." << endl;
    cout << "You have to type only one letter in one try." << endl;
    cout << "You have " << 5 << " tries to try and guess the word." << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

    // Initialize the random seed
    srand(time(NULL));
    int n = rand() % 10;
    string word = words[n];

    int attempts = 5; // Number of attempts allowed
    string guessedWord(word.length(), '*'); // Initialize the guessed word with underscores

    // Loop until the player has guessed the word or run out of attempts
    while (attempts > 0 && guessedWord != word) {
        cout << "Word to guess: " << guessedWord << endl;
        cout << "Attempts left: " << attempts << endl;

        char guess;
        cout << "Enter a letter: ";
        cin >> guess;

        bool found = false;
        for (int i = 0; i < word.length(); ++i) {
            if (word[i] == guess) {
                guessedWord[i] = guess;
                found = true;
            }
        }

        if (!found) {
            cout << "Incorrect guess!" << endl;
            attempts--;
        }
    }

    if (guessedWord == word) {
        cout << "Congratulations! You guessed the word: " << word << endl;
    } else {
        cout << "Sorry, you ran out of attempts. The word was: " << word << endl;
    }

    return 0;
}
