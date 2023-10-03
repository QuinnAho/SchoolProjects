// Quinn Aho, 10/3/2023, Lab 5: Area of a Triangle

#include <iostream>

//includes math functions
#include <cmath>
using namespace std;

int main()
{
   float a, b, c;
   //inputs the three sides of the triangle
   cout << "Enter three sides of the triangle: ";
   cin >> a >> b >> c;

   //calculates the area of the triangle
   float s = (a+b+c)/2;
   float area = sqrt(s*(s-a)*(s-b)*(s-c));
   
   //outputs the area of the triangle
   cout << "Area of the triangle is: " << area << endl;
   
   return 0;
}
