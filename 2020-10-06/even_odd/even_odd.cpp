/* 
 * File:   even_odd.cpp
 * Author: pconrad
 *
 * Created on October 6, 2020, 10:01 AM
 */

#include <iostream>
using namespace std;

int main() {

    int number;
    
    cout << "Enter an integer value: ";
    cin >> number;
    
    cout << number;
    bool result = (number % 2 == 0);
    
    if ( result == true ) 
        cout << " is even!";
    else 
        cout << " is odd!";
    
    cout << endl;
    
    return 0;
}

