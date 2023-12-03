#include <iostream>
#include <fstream>

using namespace std;

int main() {
    // Open the input file FIRST.TXT
    ifstream inputFile("FIRST.TXT");

    // Open the output file SECOND.TXT
    ofstream outputFile("SECOND.TXT");


    string word;
    bool firstWord = true;
    while (inputFile >> word) {
        // Check if the first character of the word is a lowercase vowel
        char firstChar = word[0];
        if (firstChar == 'a' || firstChar == 'e' || firstChar == 'i' || firstChar == 'o' || firstChar == 'u') {
            // Avoid adding space before the first word
            if (!firstWord) {
                outputFile << " ";
            }
            outputFile << word;
            firstWord = false;
        }
    }

    // Close both files
    inputFile.close();
    outputFile.close();

    return 0;
}
