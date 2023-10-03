/*


Quinn Aho


*/

#include <iostream>
using namespace std;

int main() {

    //Assinging variables
    int amount, hundred, fifty, twenty, ten, five, one;
    
    cout << "Enter amount: ";
    
    cin >> amount;
    
    //calculating the amount of each bill.
    hundred = amount / 100;

    fifty = (amount % 100) / 50;

    twenty = ((amount % 100) % 50) / 20;
    
    ten = (((amount % 100) % 50) % 20) / 10;

    five = ((((amount % 100) % 50) % 20) % 10) / 5;

    one = (((((amount % 100) % 50) % 20) % 10) % 5) / 1;
   
    //outputting the amount of each bill.
    cout << "$100 : " << hundred << endl;

    cout << "$50 : " << fifty << endl;

    cout << "$20 : " << twenty << endl;

    cout << "$10 : " << ten << endl;
    
    cout << "$5 : " << five << endl;

    cout << "$1 : " << one << endl;

    return 1;
}
