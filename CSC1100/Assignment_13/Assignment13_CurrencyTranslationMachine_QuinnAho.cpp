#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

class ctm // Base class for currency transactions
{
protected:
    int currency;
    double amnt;
    double conversion;
    double fees;
    double total;

public:
    void intro(); // Method to introduce the service and take user input
};

class amount : public ctm // Intermediate class for handling the calculations
{
public:
    void calculations(); // Method to perform the currency conversion calculations
};

class rcpt : public amount // Final class to generate the receipt
{
public:
    void rctype(); // Method to output the receipt
};

void ctm::intro()
{
    cout << "Welcome to the Currency Exchange Center" << endl;
    cout << "Please select the currency you want to exchange" << endl;
    cout << "1. Yuan" << endl;
    cout << "2. Euro" << endl;
    cout << "3. Pounds" << endl;
    cout << "Enter your choice: ";
    cin >> currency;
    while (currency < 1 || currency > 3)
    {
        cout << "Invalid entry, Please enter a number between 1-3: ";
        cin >> currency;
    }
    cout << "Enter the amount of currency needed in exchange: ";
    cin >> amnt;
    while (amnt < 0)
    {
        cout << "Invalid entry, Please enter a positive number: ";
        cin >> amnt;
    }
}

void amount::calculations()
{
    if (currency == 1)
    {
        conversion = amnt * 0.15;
    }
    else if (currency == 2)
    {
        conversion = amnt * 1.11;
    }
    else if (currency == 3)
    {
        conversion = amnt * 1.29;
    }
    fees = conversion * 0.05;
    total = conversion + fees;
}

void rcpt::rctype()
{
    ofstream outfile("receipt.txt");
    outfile << "Amount of exchange currency: " << fixed << setprecision(2) << amount << endl;
    outfile << "Conversion rate applied: " << fixed << setprecision(2) << conversion << endl;
    outfile << "Conversion fees: " << fixed << setprecision(2) << fees << endl;
    outfile << "Total amount due: " << fixed << setprecision(2) << total << endl;
    outfile.close();

    ifstream infile("receipt.txt");
    string line;
    while (getline(infile, line))
    {
        cout << line << endl;
    }
    infile.close();
}

int main()
{
    // No need to modify main as everything should be handled in the classes
    rcpt obj;
    obj.ctm::intro();       // Call the intro method from the ctm class
    obj.amount::calculations(); // Call the calculations method from the amount class
    obj.rctype();           // Call the rctype method from the rcpt class
    return 0;
}
