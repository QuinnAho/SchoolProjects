/*

Quinn Aho


*/

#include <iostream>

using namespace std; 

int main()
{
float intrest, priniciple, intrestRate,time;

//User Enters values for equations
cout << "Enter Principle: ";
cin >> priniciple;

cout << "Enter Rate: ";
cin >> intrestRate;

cout << "Enter Time: ";
cin >> time;

//calculations done here.
intrest = (priniciple * intrestRate * time) / 100;

//output intrest and text.
cout << "Simple intrest is: " << intrest;
}
