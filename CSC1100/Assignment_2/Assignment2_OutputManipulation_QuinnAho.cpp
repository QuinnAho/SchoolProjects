/*==========================================================

 Title:       Assignment2 - Output Manipulation
 Course:      CSC 1100
 Author:      <Quinn Aho>
 Date:        <9/5/23>
 Description: iomanip Practice.

 ==========================================================
*/

#include <iostream>

// Include this library for iomanip functions.

//Imports the library for the setw and setfill functions 
#include <iomanip>

using namespace std;

int main() {
    // sets 10 spaces in between the ten and the fourfour
    cout << "ten" << setw(10) << "fourfour" << endl;
    
    //sets the fill of the '-' and repeats it 80 times.
    cout << setfill('-') << setw(80) << "";
    
  //write your code here and include comments to explain your solution
  return 0;
}


