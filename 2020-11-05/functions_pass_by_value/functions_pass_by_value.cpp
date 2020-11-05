/* 
 * File:   functions_pass_by_value.cpp
 * Author: pconrad
 *
 * Created on November 5, 2020, 10:03 AM
 */

#include <iostream>
using namespace std;

// function prototype
void example1(int x);

int main() {

    int x = 10;
    
    cout << "x has the value of " << x << endl;
    example1(x);
    cout << "x has the value of " << x << endl;
    
    return 0;
}

// function implementation
void example1(int x)
{
    cout << "x has the value of " << x << endl;
    x++; // x=x+1;  // increment x by 1
    
    int y = x;
    {   // block
        int x = y + 1;
        cout << "x inside the inner block of example1 is " << x << endl;
    }
    
    cout << "x has the value of " << x << endl;
}

