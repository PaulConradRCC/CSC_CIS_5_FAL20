/* 
 * File:   switch_case_demo1.cpp
 * Author: pconrad
 *
 * Created on October 13, 2020, 10:04 AM
 */

#include <iostream>
using namespace std;

int main() {

    char choice;
    
    // prompt
    cout << "Enter a letter A, B, C, or D: ";
    cin >> choice;
    
    // switch / case structure
    switch (choice)
    {
        case 'A':
            cout << "You entered the letter A!" << endl;
            break;
        
        case 'B':
            cout << "You entered the letter B!" << endl;
            break;
            
        case 'C':
            cout << "You entered the letter C!" << endl;
            break;
        
        case 'D':
            cout << "You entered the letter D!" << endl;
            break;
            
        default:
            cout << "You must enter A, B, C or D!!!" << endl;
            
    }
    return 0;
}

