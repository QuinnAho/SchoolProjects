/*==========================================================

 Title:       Assignment3 - Dragon Years
 Course:      CSC 1100
 Author:      <Quinn Aho>
 Date:        <9/6/23>
 Description: This program ....

 ==========================================================
*/
#include <iostream>

using namespace std;


int main() {
    
  //write your solution here and include comments to explain your solution

//creates the float and string varible for the age and name.
float age;

string name;

//gets keyboard input to determine the name and age.
cin >> name;

cin >> age;

//calculates the dragon ages.
float wizardAge = ((age - 2)*4) + 21;

//outputs the correct string sequence with varible value inside.
cout << "The dragon named "<< name << " is " << wizardAge << " years old in wizard years.";

return 0;
}




