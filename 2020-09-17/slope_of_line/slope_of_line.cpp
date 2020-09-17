/* 
 * File:   slope_of_line.cpp
 * Author: pconrad
 *
 * Created on September 17, 2020, 10:37 AM
 */

#include <iostream>
using namespace std;

int main() {

    // declare our variables
    float x1, y1, x2, y2, slope;
    
    // prompt for the coordinates of Point #1
    cout << "Enter the x and y values for point #1, separate with a space: ";
    cin >> x1 >> y1;
    
    // prompt for the coordinates of Point #2
    cout << "Enter the x and y values for point #2, separate with a space: ";
    cin >> x2 >> y2;
    
    // compute the slope without order of operations, meaning, no ( ) ....
    // slope = y2 - y1 / x2 - x1; // this does not correctly compute because the division occurs first, but we
    // need to find the differences in the y values and x values respectively.
    slope = (y2 - y1) / (x2 - x1); // correctly computes since ( ) force us to compute the differences of x and y before division
    
    // output the result to the screen
    cout << "The slope of P1(" << x1 << ", " << y1 << ") and ";
    cout << " P2(" << x2 << ", " << y2 << ") is: ";
    cout << slope << endl;
    
    return 0;
}

