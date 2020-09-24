/*
 * File:   combined_statements.cpp
 * Author: pconrad
 *
 * Created on September 24, 2020, 10:01 AM
 */

#include <iostream>
#include <cstdlib>  // needed for random number generator
#include <ctime>    // has functions for working with time
using namespace std;

int main() {

    // declare variables
    int my_value1, my_value2, my_value3, my_value4;
    int input;
    
    // prompt
    cout << "Enter an integer value: ";
    cin >> input;
    
    // demonstrate multiple assignment
    my_value1 = my_value2 = my_value3 = my_value4 = input;    
    
    // output the values of my_value1, my_value2, my_value3, and my_value4
    cout << "Variable values after multiple assignment completed..." << endl;
    cout << "my_value1 = " << my_value1 << endl;
    cout << "my_value2 = " << my_value2 << endl;
    cout << "my_value3 = " << my_value3 << endl;
    cout << "my_value4 = " << my_value4 << endl;
    
    // demonstrate combined statements
    my_value1 += 1; // same as my_value1 = my_value1 + 1;
    my_value2 -= 3; // same as my_value2 = my_value2 - 3;
    my_value3 *= 5; // same as my_value3 = my_value3 * 5;
    my_value4 /= 7; // same as my_value4 = my_value4 / 7; /*** integer division alert!!! ***/
    
    cout << "Variable values after combined statements completed..." << endl;
    cout << "my_value1 = " << my_value1 << " (my_value1 += 1)" << endl;
    cout << "my_value2 = " << my_value2 << " (my_value2 -= 3)" << endl;
    cout << "my_value3 = " << my_value3 << " (my_value3 *= 5)" << endl;
    cout << "my_value4 = " << my_value4 << " (my_value4 /= 7)" << endl;
    
    // time(0) returns the number of seconds since 1/1/1970
    srand( time(0) ); // seeds the random number generator with programmer defined initial value
    int some_value = 5 + rand() % 6; // this will generate a random number between 5 and 10 ( x % 6 will be between 0 and 5 )
    
    cout << "some_value = " << some_value << endl;
    
    my_value1 += some_value;            // same as my_value1 = my_value1 + some_value;
    my_value2 -= (some_value - 1);      // same as my_value2 = my_value2 - (some_value - 1);
    my_value3 *= (2 * some_value);      // same as my_value3 = my_value3 * (2 * some_value);
    my_value4 /= (3 * some_value - 2);  // same as my_value4 = my_value4 / (3 * some_value - 2); /*** integer division alert!!! ***/
    
    cout << "Variable values after combined statements completed using variants of some_value..." << endl;
    cout << "my_value1 = " << my_value1 << " (my_value1 += some_value)" << endl;
    cout << "my_value2 = " << my_value2 << " (my_value2 -= (some_value - 1))" << endl;
    cout << "my_value3 = " << my_value3 << " (my_value3 *= (2 * some_value))" << endl;
    cout << "my_value4 = " << my_value4 << " (my_value4 /= (3 * some_value - 2))" << endl;
    
    return 0;
}

