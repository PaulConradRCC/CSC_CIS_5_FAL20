/* 
 * File:   switch_case_demo2.cpp
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
        case 'a':
            cout << "You entered the letter A!" << endl;    
        
        case 'B':
        case 'b':
            cout << "You entered the letter B!" << endl;
            
        case 'C':
        case 'c':
            cout << "You entered the letter C!" << endl;
            break;
        
        case 'D':
        case 'd':
            cout << "You entered the letter D!" << endl;
            
        default:
            cout << "You must enter A, B, C or D!!!" << endl;
            
    }
    return 0;
}