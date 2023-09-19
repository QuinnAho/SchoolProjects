/*==========================================================

 Title:       Assignment 5 - Numerical Representation
 Course:      CSC 1100
 Author:      <Quinn Aho>
 Date:        < / / >
 Description: output the range of two numbers as strings before ten, after ten, output if even or odd

 ==========================================================
*/

#include <iostream>
#include <map>

using namespace std;


//define the varibles.
int main() {

int start, end;

string result, startBoolean, endBoolean;

// create an array to store the string values.
string numbers[] = {"zero","one","two","three","four","five","six","seven","eight","nine"};

//user input for the min and max for the range.
cin >> start;
cin >> end;

//displays an error if the start value is greater than the end value.
if(start > end){
    
    cout << "Invalid Input. Try Again!";
}

//loops through the min and max values.
for (int i = start; i <= end; i++){
    
    //determine is the index is even or odd. 
    if(i % 2 == 0){
        
        startBoolean = "even";
    }
    else{
        
        startBoolean = "odd";
    }
        
    //outputs the strings up to 9
    if(i < 10){
        
        cout << numbers[i] << endl;
    }
    
    //outputs the boolean of the index value after ten.
    if(i >= 10){ 
        
    cout << startBoolean << endl;
    }
}
  return 0;
}

