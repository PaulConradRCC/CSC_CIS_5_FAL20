
/* 
 * File:   even_or_odd.cpp
 * Author: pconrad
 *
 * Created on November 5, 2020, 10:38 AM
 */

#include <iostream>
using namespace std;

// function prototype
bool isEven(int x); // returns true if x is even, otherwise false if x odd
bool isOdd(int x); // returns true if x is odd, otherwise false if x even

int main() {

    int value;
    
    // prompt user for a value
    cout << "Enter an integer: ";
    cin >> value;
    
    cout << "Calling the isEven function ..." << endl;
    if ( isEven(value) == true )
        cout << value << " is even!!!" << endl;
    else
        cout << value << " is odd!!!" << endl;
    
    cout << "Calling the isOdd function ..." << endl;
    if ( isOdd(value) == true )
        cout << value << " is odd!!!" << endl;
    else
        cout << value << " is even!!!" << endl;
    
    return 0;
}

// function implementation
bool isEven(int x) // returns true if x is even, otherwise false if x odd
{
    bool result = ( x % 2 == 0 );
    return result;
}

bool isOdd(int x) // returns true if x is odd, otherwise false if x even
{
    // one way of implementing, reverse the logic
    bool result = ( x % 2 == 1 );
    return result;
    
    // another way, call isEven and return the negation of the return value
    // return !isEven(x);
}