/* 
 * File:   if_else_with_blocks.cpp
 * Author: pconrad
 *
 * Created on October 6, 2020, 10:19 AM
 */

#include <iostream>
#include <string>
using namespace std;

const int PASSING_SCORE = 70;

int main() {

    char grade;
    string message;
    int score;
    
    // prompt quiz score
    cout << "Enter the score from the quiz: ";
    cin >> score;
    
    if ( score >= PASSING_SCORE )
    {
        grade='P';
        message="Passing Score!";
    }
    else
    {
        grade='F';
        message="Not Passing Score! Don't Give Up!!! Try Again!!!";
    }
    
    cout << "Score in gradebook is: " << grade << endl;
    cout << message << endl;
    
    return 0;
}

