/*
 * demonstrates the difference between pre-test and post-test loops
 * (while loops and do/while loops respectively)
 */

/* 
 * File:   pre_test_vs_post_test.cpp
 * Author: pconrad
 *
 * Created on October 20, 2020, 10:00 AM
 */

#include <iostream>
using namespace std;

int main() {

    int input;
    
    cout << "Enter an integer number please: ";
    cin >> input;
    
    int old_input_value = input;
    
    cout << "Demonstrating the while loop:" << endl;
    // demonstrate the while loop
    while ( input < 0 )
    {
        cout << input << endl;
        input--;
    }
    
    // quick little hack to make program pause...
    char pause;
    cout << "Type in a character, press enter to continue... ";
    cin >> pause;
    
    // demonstrate the do/while loop
    cout << "Demonstrating the do/while loop:" << endl;
    input = old_input_value;
    
    do
    {
        cout << input << endl;
        input--;
    }
    while ( input < 0 );
    
    return 0;
}

