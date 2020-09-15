/* 
 * File:   string_demo.cpp
 * Author: pconrad
 *
 * Created on September 15, 2020, 10:38 AM
 */

#include <iostream>
#include <string>           // need this for working with strings!
#include "term_colors.h"
using namespace std;
using namespace TERM;

int main(int argc, char** argv) {

    // declare two string variables
    string firstName, lastName;
    
    // prompt the user for their first name
    cout << BOLDGREEN << "Enter your first name: " << BOLDBLUE;
    // cin >> firstName;
    getline(cin, firstName, '\n'); // use this only if inputting strings
    
    // prompt the user for their last name
    cout << BOLDGREEN << "Enter your last name: " << BOLDBLUE;
    // cin >> lastName;
    getline(cin, lastName, '\n'); // use this only if inputting strings
    
    // output a message to the user
    cout << BOLDGREEN << "Hello there " << firstName << " " << lastName;
    cout << ", how are you today?" << endl;
    
    cout << RESET; // this resets the character color attributes to defaults
    
    return 0;
}

/* Notes:
 * 
 * for prompts do the following model:
 * 
 * cout << "----YOUR PROMPT TO USER HERE----";
 * cin >> the_variable_to_store_user_input;
 * 
 *
 */