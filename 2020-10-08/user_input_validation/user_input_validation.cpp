
/* 
 * File:   user_input_validation.cpp
 * Author: pconrad
 *
 * Created on October 8, 2020, 10:54 AM
 */

#include <iostream>
using namespace std;

int main(int argc, char** argv) {

    float test_score;
    
    cout << "Enter a test score (must be between 0 and 100): ";
    cin >> test_score;
    
    bool valid_test_score = ( test_score >= 0 && test_score <= 100 );
    cout << "valid_test_score flag variable has the value of ";
    if (valid_test_score == true)
        cout << "true";
    else
        cout << "false";
    cout << endl;
    
    // test inside range (uses logical AND)
    if ( test_score >= 0 && test_score <= 100 )
        cout << "Valid test score entered, check by checking INSIDE range" << endl;
    else
        cout << "Invalid test score entered, check by checking INSIDE range" << endl;
    
    // test outside range (uses logical OR)
    if ( test_score < 0 || test_score > 100 )
        cout << "Invalid test score entered, check by checking OUTSIDE range" << endl;
    else
        cout << "Valid test score entered, check by checking OUTSIDE range" << endl;
    
    // demo for division by zero
    int x, y;
    cout << "Enter two integers x and y (separate values with a space): ";
    cin >> x >> y;
    
    if ( y==0 )
        cout << "Division by zero!" << endl;
    else
        cout << x << " / " << y << " = " << x/y << " (note: integer division!)" << endl;
    
    return 0;
}

