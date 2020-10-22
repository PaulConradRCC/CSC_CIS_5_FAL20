
/* 
 * File:   nested_loops.cpp
 * Author: pconrad
 *
 * Created on October 22, 2020, 10:59 AM
 */

#include <iostream>
using namespace std;

int main() {
    
    int rows, cols;
    
    //prompt
    cout << "Enter the number of rows and columns of a matrix: ";
    cin >> rows >> cols;
    
    for(int rw=1; rw <= rows; rw++ ) // outer loop
        for(int cl=1; cl <= cols; cl++ ) // inner loop
            cout << "Row: " << rw << ", Col: " << cl << endl; 

    return 0;
}

