/*

Quinn Aho

9/5/2023

CSC1100

Lab 1.1

Output manipulation - cout and iomanip

*/


#include <iostream>
#include <iomanip> // You need to include <iomanip> for setw() to work.
using namespace std; // Setting proper namespace (std)

int main() { 

    cout << "Subject" << setw(15) << "Marks" << endl; // Add endl to print a newline
    cout << "Mathematics" << setw(9) << double(90) << endl;
    cout << "Computer" << setw(12) << double(77) << endl; 
    cout << "Chemistry" << setw(11) << double(69) << endl;

    return 0;
}
