// Quinn Aho Lab 4

#include <iostream>
using namespace std;

int main() {
    // Constants for calculations
    const float CENTIMETERS_PER_INCH = 2.54;
    const int INCHES_PER_FOOT = 12;

    int feet, inches;

    // Input length in feet and inches
    cout << "Enter the length in feet followed by inches: ";
    cin >> feet >> inches;

    // Calculate total inches and then convert to centimeters
    int totalInches = INCHES_PER_FOOT * feet + inches;
    float centimeters = CENTIMETERS_PER_INCH * totalInches;

    // Display the result
    cout << "The numbers you entered are " << feet << " for feet and " << inches << " for inches." << endl; 
    cout << "The total number of inches is = " << totalInches << endl;
    cout << "The total length in centimeters is = " << centimeters << endl;

    return 0;
}
