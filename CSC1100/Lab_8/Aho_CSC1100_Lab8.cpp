/**
 Quinn Aho

Sum and Average of Array Elements

10/24/23

lab 8

*/


#include <iostream>
using namespace std;

int main() {
    
    int size;
    cout << "Enter number of elements you want to insert ";
    cin >> size;

    //creates an array with given number of elements
    cout << "Enter element in ascending order" << endl;
    int arr[size];
    int sum = 0;

    //counts the number of elements entered by user
    for (int i = 1; i < size + 1; i++) {
        cout << "Enter element " << i << ": ";
        cin >> arr[i];
        sum += arr[i];
    }

    // determines the average of the elements
    double avg = (double)sum / size;

    //prints the sum and average
    cout << "The sum of Array is :" << sum << endl;
    cout << "The average of Array is :" << avg << endl;

    return 0;
}
