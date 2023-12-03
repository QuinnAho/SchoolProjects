/*

Quinn Aho
10/19/2023
Count positive, negitives and zeros
Lab 7

*/



#include <iostream>

using namespace std;

int main() {

    string YesOrNo = "y";

    int inputNumber = 0;
    int positveNumber = 0;
    int negativeNumber = 0;
    int zeroNumber = 0;

    // The while loop allows the user to enter as many numbers as they want.
    while (YesOrNo == "y" || YesOrNo == "Y") {
        
        cout << "Enter a number: ";
        cin >> inputNumber;

       //Determines if the number is positive, negative, or zero and then adds to the counter accordingly.
      
        if (inputNumber > 0) {
            positveNumber++;
        } else if (inputNumber < 0) {
            negativeNumber++;
        } else {
            zeroNumber++;
        }

        //asks the user if they want to continue
        cout << "Do you want to continue? (Y/N): ";
        cin >> YesOrNo;
    }


    //Outputs the positive, negative, and zero numbers
    cout << "Positive numbers: " << positveNumber << endl;
    cout << "Negative numbers: " << negativeNumber << endl;
    cout << "Zero numbers: " << zeroNumber << endl;

    return 0;
}
