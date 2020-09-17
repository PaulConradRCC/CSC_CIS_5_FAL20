/* 
 * File:   prompts_example.cpp
 * Author: pconrad
 *
 * Created on September 17, 2020, 9:55 AM
 */

#include <iostream>
using namespace std;

int main() {

    int my_value;
    
    // prompts do's and don't's
    // make sure cout comes before cin
    cout << "Please enter a number: ";
    cin >> my_value;
    
    // output the result
    cout << "Thank you for entering " << my_value << endl;
    
    // a common prompt mistake...
    // the fix is to put the cout statement BEFORE the cin statement
    cin >> my_value;
    cout << "Please enter another number: ";
        
    // output the result
    cout << "Thank you for entering another number " << my_value << endl;
    
    return 0;
}

