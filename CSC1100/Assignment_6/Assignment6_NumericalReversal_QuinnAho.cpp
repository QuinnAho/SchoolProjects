/*==========================================================

 Title:       Assignment 6 - Numerical Reversal
 Course:      CSC 1100
 Author:      Quinn Aho
 Date:        < / / >
 Description: This program ....

 ==========================================================
*/

#include <iostream>
#include <vector>

using namespace std;

int main() {

  int arraySize;
  //input the array size
  cin >> arraySize;
  //make the arry with the inputs size
  int outArray[arraySize];
  
  //output the array
  for (int i = 0; i < arraySize; i++) {
      
      cin >> outArray[i];
  }
  
  // create the start and end varible
  int start = 0;
  int end = arraySize - 1;
  
  //loop backwards from the end of the array to the start & output it.
  for (;end >= start; end--){
      
      cout << outArray[end];
      cout << " ";
  }
  
  
                   
  return 0;
}



