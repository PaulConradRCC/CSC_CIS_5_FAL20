/* 
 * File:   strings_3_8_examples.cpp
 * Author: pconrad
 *
 * Created on September 29, 2020, 10:18 AM
 */

#include <iostream>
#include <string>
using namespace std;

int main() {

    string first_name, last_name;
    string your_city;
    
    // prompt for first name 
    // demonstrate using getline in case a person's name
    // has a space in the first name
    cout << "Enter your first name: ";
    getline(cin, first_name, '\n');
    
    // prompt for last name
    cout << "Enter your last name: ";
    getline(cin, last_name, '\n');
            
    // prompt for your city
    cout << "Enter your current city: ";
    getline(cin, your_city, '\n');
    
    string full_name = first_name + " " + last_name;
    
    // let's output a message
    cout << "Hi there, " << full_name << "!!!" << endl;
    cout << "How is it in your city of " << your_city << "?" << endl;
    
    // prompt user to enter any key to exit program
    cout << "Enter any key to exit program.";
    char ch;
    cin.get(ch);
    
    return 0;
}

