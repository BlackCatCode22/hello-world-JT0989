// jT 8/21/2024
// fiveFunctions.cpp

#include <iostream>
using namespace std;


    // These are my functions declarations
    // These are my function signatures

void sayHello(string, int);

}


int main()
{
    cout << "\n***** Welcome to my Function Practice Program! #### \n";

    // Call the function named sayHello with two arguments.
    sayHello("Jayden",19);

    // call or invoke the function named addTwoInts.
    int mySum = 0;
    mySum = addTwoInts(1,2);
    cout << "\n The sum of two ints is" << mySum << endl;

    cout << "\n ******** end of program ********";
    return 0;

}


// This is a Function Definition
void sayHello(string name, int age) {
    cout << "\n\n Hello from function 'sayHello()'!" << endl;
    cout << " \n Hello " << name << " your age is " << age;



// This is a Function Definition
    int addTwoInts(int num1, int num2); {
        int sum = 0;
        theSum = num1 + num2;
        return sum;


}
















