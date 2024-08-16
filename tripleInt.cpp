// jT 8/14/24
// tripleInt.cpp

#include <iostream>
using namespace std;

int main()
{
    int userInteger = 0;
    int doubleInteger = 0;
    int tripleInteger = 0;

    cout << "Please enter a number: ";
    cin >> userInteger;


    doubleInteger = userInteger * 2;
    tripleInteger = userInteger * 3;

    cout << "\n The  doubled int is: " << doubleInteger << endl;
    cout << "\n The  tripled int is: " << tripleInteger << endl;

    return 0;
}