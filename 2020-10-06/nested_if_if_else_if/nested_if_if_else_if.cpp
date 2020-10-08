/* 
 * File:   nested_if_if_else_if.cpp
 * Author: pconrad
 *
 * Created on October 6, 2020, 10:43 AM
 */

#include <iostream>
using namespace std;

const float A_SCORE = 90;
const float B_SCORE = 80;
const float C_SCORE = 70;
const float D_SCORE = 60;
const float MAX_SCORE = 100;
const float MIN_SCORE = 0;

int main() {

    float test_score;
    int your_points, maximum_points;
    
    // prompts
    cout << "Enter the maximum points for test: ";
    cin >> maximum_points;
    cout << "Enter your points scored on test: ";
    cin >> your_points;
    
    // calculate the test score percentage
    test_score = 100 * ((float)your_points / maximum_points);
    
    // output to the screen!
    if ( test_score <= MAX_SCORE )
    {
        if ( test_score >= MIN_SCORE )
        {
            if ( test_score >= A_SCORE )
                cout << "Great job! Scored an A!!!" << endl;
            else if ( test_score >= B_SCORE )
                cout << "Very well done! Scored a B!!!" << endl;
            else if ( test_score >= C_SCORE )
                cout << "Good job! Scored a C!!!" << endl;
            else if ( test_score >= D_SCORE )
                cout << "Keep studying and do well next time! Scored a D." << endl;
            else
                cout << "Please come see professor during office hours for help! Scored an F. Don't give up please!" << endl;
            
            return 0;
        } // end condition: test_score >= MIN_SCORE
        else
        {
            cout << "ERROR: Score must be 0 or higher!" << endl;
            return 1;
        }
    } // end condition: test_score <= MAX_SCORE
    else
    {
        cout << "ERROR: Score cannot be higher than 100!" << endl;
        return 2;
    }
}

