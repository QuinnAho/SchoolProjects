/*


Quinn Aho


*/

#include <iostream>
using namespace std;

int main() {
    //assingning variables.
    int days, years, months;

    cout <<  "Enter no: of days: ";
    //user input.
    cin >> days;
    //calculating the days, months, and years.
    years = days / 365;

    months = (days % 365) / 30;

    days = (days % 365) % 30;
    //outputting the days, months, and years.
    cout << "Years: " << years << endl;

    cout << "Months: " << months << endl;

    cout << "Days: " << days << endl;


    return 1;
}
