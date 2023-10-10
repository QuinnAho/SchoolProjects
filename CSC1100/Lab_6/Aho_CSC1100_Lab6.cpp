/*


Quinn Aho

Lab 6


*/

#include <iostream>

using namespace std;

int main() {
    // inputs character using char data type
    char inputCharacter;

    cout << "Enter any character: ";
    cin >> inputCharacter;
    
    // checks if character is uppercase, lowercase, number, or special character
    if (inputCharacter >= 'A' && inputCharacter <= 'Z') {
        cout << "The character is uppercase." << endl;
    } 
    else if (inputCharacter >= 'a' && inputCharacter <= 'z') {
        cout << "The character is lowercase." << endl;
    } 
    else if (inputCharacter >= '0' && inputCharacter <= '9') {
        cout << "The character is a number." << endl;
    }
    else {
        cout << "Character is a special character." << endl;
    }

    return 0;
}
