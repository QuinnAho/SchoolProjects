//Quinn Aho


#include <iostream>

using namespace std;

// Function to show the options to the user and explain how to enter data
void showChoice() {
    cout << "Menu" << endl;
    cout << "1: Add" << endl;
    cout << "2: Subtract" << endl;
    cout << "3: Multiply" << endl;
    cout << "5: Exit" << endl;
    cout << "Enter your choice: ";
}

// Function to add two numbers and return the sum
float add(double num1, double num2) {
    return num1 + num2;
}

// Function to subtract two numbers and return the difference
float subtract(double num1, double num2) {
    return num1 - num2;
}

// Function to multiply two numbers and return the product
float multiply(double num1, double num2) {
    return num1 * num2;
}

//Function to divide two numbers and return the quotient
float divide(double num1, double num2) {
    return num1 / num2;
}

int main() {
    float num1, num2, result;
    int choice;
    bool exitBool = false;

    while (!exitBool) {
        showChoice();
        cin >> choice;

        // Check for exit condition first
        if (choice == 5) {
            exitBool = true;
            continue; // Skip the rest of the loop
        }

        // Input numbers if not exiting
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;

        // Replace switch statement with if statements
        if (choice == 1) {
            result = add(num1, num2);
            cout << "Sum " << result << endl;
        } else if (choice == 2) {
            result = subtract(num1, num2);
            cout << "Difference " << result << endl;
        } else if (choice == 3) {
            result = multiply(num1, num2);
            cout << "Product " << result << endl;
        } else if (choice == 4) {
            result = divide(num1, num2);
            cout << "Quotient " << result << endl;
        } else {
            cout << "Invalid choice" << endl;
        }
    }

    return 0;
}

