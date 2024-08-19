#include <iostream>
using namespace std;
int main() {


    cout << "\nWelcome, My Alpha Male King" << endl;


    // Create some variables.


    int userAge = 0;
    double userAgeDouble = 0.0;
    char userAgeChar = 'x';

    cout << "\nWhat is your age (as a whole number): ";
    cin >> userAge;

    cout << "\nWhat is your age (as a decimal): ";
    cin >> userAgeDouble;

    cout << "\nWhat is your age (as a single character): ";
    cin >> userAgeChar;

    cout << "\nUser Age as integer is:  " << userAge;

    cout << "\nUser Age as a Decimal " << userAgeDouble;

    cout << "\nUser Age as a character " << userAgeChar;


    return 0;
}
