// Quinn Aho
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
  // Declare and initialize variables
  double balance = 0.0;
  double bet = 0.0;
  int guess = 0;
  int dice = 0;
  char play_again = 'y';
  string name;

  // Seed the random number generator
  srand(time(0));

//center the title
  cout << "       CASINO GAME" << endl;
  cout << "----------------------------" << endl << endl;

  cout << "Enter your Name: ";
  cin >> name;
  cout << "Please deposit an initial amount to start playing: $";
  cin >> balance;
  cout << "-----------------------------------" << endl;
  


  // Game loop
  while (balance > 0 && play_again == 'y') {
    // Prompt the player to guess a number and place a bet
    cout << "        RULES OF THE GAME" << endl;
    cout << "-----------------------------------" << endl;
    cout << "1. Choose a number between 1 to 10" << endl;
    cout << "2. If you win, you will get 10 times of money you bet" << endl;
    cout << "3. If you bet on wrong number you will lose your betting amount" << endl << endl;
    cout << "-----------------------------------" << endl;  
    cout << "Your current balance is $" << balance << endl;
    cout << name <<", Enter money to bet." << endl;
    cout << "Guess your number to bet between 1 to 10:";
    cin >> guess;
    while (guess < 1 || guess > 10) {
      cout << "Invalid guess. Please enter a number between 1 and 10: ";
      cin >> guess;
    }
    cout << "Please enter your bet amount: $";
    cin >> bet;
    while (bet <= 0 || bet > balance) {
      cout << "Invalid bet. Please enter a positive amount less than or equal to your balance: $";
      cin >> bet;
    }

    // Generate a random number and compare with player's guess
    dice = rand() % 10 + 1;
    if (guess == dice) {
      balance += bet * 10;
      cout << "Congratulations! You guessed the number and won $" << bet * 10 << endl;
    } else {
      balance -= bet;
      cout << "Sorry, you guessed " << guess << " but the number was " << dice << ". You lost $" << bet << endl;
    }

    // Ask the player if they want to play again
    cout << "Your current balance is $" << balance << endl;
    if (balance > 0) {
      cout << "Do you want to play again? (y/n): ";
      cin >> play_again;
      while (play_again != 'y' && play_again != 'n') {
        cout << "Invalid input. Do you want to play again? (y/n): ";
        cin >> play_again;
      }
    } else {
      cout << "You have no more money to bet. Thanks for playing!" << endl;
    }
  }

  return 0;
}
