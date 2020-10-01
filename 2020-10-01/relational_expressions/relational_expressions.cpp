/* 
 * File:   relational_expressions.cpp
 * Author: pconrad
 *
 * Created on October 1, 2020, 10:06 AM
 */

#include <iostream>
using namespace std;

int main(int argc, char** argv) {

    bool bool_result;
    int int_result;
    
    int x, y;
    // prompt the user to enter values for x and y
    cout << "Enter values for X and Y: ";
    cin >> x >> y;
    
    // output the standard relation operators in regard with x and y.
    // the "bool" version
    cout << "Relational operators using bool data type: " << endl << endl;
    bool_result = x > y;
    cout << "x > y is ";
    if ( bool_result )
    {
        cout << "true";
        cout << endl;
    }
    else
    {
        cout << "false";
        cout << endl;
    }
    bool_result = x < y;
    cout << "x < y is ";
    if ( bool_result )
    {
        cout << "true";
        cout << endl;
    }
    else
    {
        cout << "false";
        cout << endl;
    }
    bool_result = x >= y;
    cout << "x >= y is ";
    if ( bool_result )
    {
        cout << "true";
        cout << endl;
    }
    else
    {
        cout << "false";
        cout << endl;
    }
    bool_result = x <= y;
    cout << "x <= y is ";
    if ( bool_result )
    {
        cout << "true";
        cout << endl;
    }
    else
    {
        cout << "false";
        cout << endl;
    }
    bool_result = x == y;
    cout << "x == y is ";
    if ( bool_result )
    {
        cout << "true";
        cout << endl;
    }
    else
    {
        cout << "false";
        cout << endl;
    }
    bool_result = x != y;
    cout << "x != y is ";
    if ( bool_result )
    {
        cout << "true";
        cout << endl;
    }
    else
    {
        cout << "false";
        cout << endl;
    }
    
    // the "int" version
    cout << "Relational operators using int data type: " << endl << endl;
    int_result = x > y;
    cout << "x > y is " << int_result << endl;
    int_result = x < y;
    cout << "x < y is " << int_result << endl;
    int_result = x >= y;
    cout << "x >= y is " << int_result << endl;
    int_result = x <= y;
    cout << "x <= y is " << int_result << endl;
    int_result = x == y;
    cout << "x == y is " << int_result << endl;
    int_result = x != y;
    cout << "x != y is " << int_result << endl;
    
    return 0;
}

