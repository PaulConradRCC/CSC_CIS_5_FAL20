/* 
 * File:   math_functions.cpp
 * Author: pconrad
 *
 * Created on September 29, 2020, 10:47 AM
 */

#include <iostream>
#include <cmath>        // http://www.cplusplus.com/reference/cmath/
#include <iomanip>
using namespace std;

const int FIELD1_WIDTH = 10; // this is the field with the words sine, cosine, tangent etc.
const int FIELD2_WIDTH = 10;
const int DIGITS_PRECS = 5;

const double PI_DIV_180 = 3.14159265 / 180.0;
const double RAD_TO_DEG = 180.0 / 3.14159265;

int main() {

    double angle;
    
    // prompt the user to enter an angle in degrees
    cout << "Enter your angle in degrees: ";
    cin >> angle;

    // fixed and setprecision will affect all outputs until they are changed
    cout << fixed << setprecision(DIGITS_PRECS);
    
    // output the sine, cosine and tangent of the user entered angle.
    cout << setw(FIELD1_WIDTH) << "sine:" << setw(FIELD2_WIDTH) << sin(angle * PI_DIV_180) << endl;
    cout << setw(FIELD1_WIDTH) << "cosine:" << setw(FIELD2_WIDTH) << cos(angle * PI_DIV_180) << endl;
    cout << setw(FIELD1_WIDTH)<< "tangent:" << setw(FIELD2_WIDTH) << tan(angle * PI_DIV_180) << endl;
    
    // prompt the user to enter the rise of a slope and the run of the slope
    double rise, run;
    cout << "Enter the rise and run of a slope (separate with a space): ";
    cin >> rise >> run;
    
    double percent_grade = rise * 100.0 / run;
    double grade_angle = atan(percent_grade) * RAD_TO_DEG;
    
    cout << "The " << percent_grade << "% grade is a " << grade_angle << " degree slope." << endl;
    
    return 0;
}

