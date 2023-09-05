/*

Quinn Aho

9/5/2023

CSC1100

Lab 1.2

RNG - cout and random library

*/

#include <cstdlib> // library for the rand function.
#include <ctime> // library for the srand function.

#include <iostream>
using namespace std;

int main() { 

// Seed the random number generator using the current time
srand(time(0));

//Creates the random number varible
double RandNumber = rand()%91 + 10;

//outputs the number
cout << "The randomly selected number is: " << RandNumber;

    return 0;
}
