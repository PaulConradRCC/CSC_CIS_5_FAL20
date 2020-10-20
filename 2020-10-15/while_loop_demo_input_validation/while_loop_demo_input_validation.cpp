
/* 
 * File:   while_loop_demo_input_validation.cpp
 * Author: pconrad
 *
 * Created on October 15, 2020, 10:12 AM
 */

#include <iostream>
using namespace std;

int main() {

    int input;
    
    // prompt
    cout << "Enter an integer between 2 and 65536: ";
    cin >> input;
    
    // input validation
    while ( input < 2 || input > 65536 )
    {
        cout << "INVALID ENTRY!!! ";
        cout << "Enter an integer between 2 and 65536: ";
        cin >> input;
    }
    
    // sum up all the integers from 1 to user inputted value.
    unsigned int sum_of_integers = 0;
    int counter = 1;
    
    while ( counter <= input )
    {
        sum_of_integers = sum_of_integers + counter;
        counter++;
    }
    
    // output the sum of the integers from 1 to the user inputted value
    cout << "The sum of integers from 1 to " << input << " is: ";
    cout << sum_of_integers << endl;
    
    return 0;
}
