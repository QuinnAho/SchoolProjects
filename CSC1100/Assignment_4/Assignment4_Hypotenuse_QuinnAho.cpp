/*==========================================================

 Title:       Assignment4 - Hypotenuse
 Course:      CSC 1100
 Author:      Quinn Aho
 Date:        <9/15/22>
 Description: This program determines the Hypotenuse.

 ==========================================================
*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
  
 float side1, side2;

  
  cin >> side1;
  cin >> side2;
  
  float hypoFunction;
 
 //Calculates the hypotenuse.
  hypoFunction = round(sqrt(pow(side1,2) + pow(side2,2)));
 
 //boolean tree to determine the true or false values.
    if(side1 == side2){
        
    cout << true << endl;    
    }
    else{
        
    cout << false << endl;    
    }
    
    if(side1 < side2){
        
    cout << true << endl;
    }
    else{
        
    cout << false << endl;    
    }
    
    if(side1 > side2){
        
    cout << true << endl;    
    }
    else{
        
    cout << false << endl;    
    }
    
  cout << "The hypotenuse of the triangle is " << hypoFunction;
  
  return 0;
  
}



