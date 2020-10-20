
/* 
 * File:   do_while_loop_demo_input_validation.cpp
 * Author: pconrad
 **/

#include <iostream>
using namespace std;

int main() {

    int input;
    
    // get user input    
    bool invalid_entry = false;
    
    do {
        // prompt
        cout << "Enter an integer between 2 and 65536: ";
        cin >> input;
    
        invalid_entry = ( input < 2 || input > 65536 );
        
        if ( invalid_entry == true )
            cout << "INVALID ENTRY!!! ";
        else
            break;
        
    } while ( true );
    
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
