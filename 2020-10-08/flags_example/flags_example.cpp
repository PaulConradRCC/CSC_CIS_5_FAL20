/* 
 * File:   flags_example.cpp
 * Author: pconrad
 *
 * Created on October 8, 2020, 10:00 AM
 */

#include <iostream>
using namespace std;

int main() {

    // declare variable for user input
    int user_input;
    
    // Instructions and prompt
    cout << "Hello There! Could you enter an integer and I will tell you" << endl;
    cout << "some things about your integer!" << endl << endl;
    
    cout << "Enter integer: ";
    cin >> user_input;
    
    // our flag variables
    bool isNegative = (user_input < 0);
    bool isPositive = (user_input > 0); // could we just do: isPositive = !isNegative; ???
    bool isZero = (user_input == 0);
    
    bool isEven = (user_input % 2 == 0); // if even, then isEven is true
    bool isOdd = !isEven; // numbers are either even or odd, but what about zero???
    
    // output information
    cout << "Your number " << user_input << " has the following attributes:" << endl;
    
    if ( isNegative )
        cout << "A negative number!" << endl;
    
    if ( isPositive )
        cout << "A positive number!" << endl;
    
    if ( isZero )
        cout << "Zero (not positive or negative)!" << endl;
    
    if ( isEven )
        cout << "An even number!" << endl;
    else
        cout << "An odd number!" << endl;
    
    if ( isOdd )
        cout << "An odd number!" << endl;
    else
        cout << "An even number!" << endl;
    
    return 0;
}

