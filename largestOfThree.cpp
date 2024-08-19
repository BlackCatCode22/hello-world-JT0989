//
// Created by BE129 on 8/19/2024.

#include <iostream>
using namespace std;

int main() {
    cout << "\nWelcome to the Largest of Three Program!" << endl;
    // Variables for this program!
    int firstNum = 0;
    int secondNum = 0;
    int thirdNum = 0;
    int largestNum = 0;

    // firstNum = 1;
    // secondNum = 3;
    // thirdNum = 8;




    cout << "\nEnter First Number: ";
    cin >> firstNum;

    cout << "\nEnter Second Number: ";
    cin >> secondNum;

    cout << "\nEnter Third Number: ";
    cin >> thirdNum;

    if (firstNum > secondNum) {
        if (firstNum > thirdNum) {
        largestNum = firstNum;
            }
        else {
            largestNum = thirdNum;
            }
        else { if(secondNum > thirdNum)
            if (firstNum > thirdNum) {
                largestNum = firstNum;
            }
            else {
                largestNum = thirdNum;
            }


        
        }