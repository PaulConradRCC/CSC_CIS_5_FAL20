/* 
 * File:   formatted_output_examples.cpp
 * Author: pconrad
 *
 * Created on September 24, 2020, 10:53 AM
 */

#include <iostream>
#include <iomanip>
using namespace std;

const int FIELD1=15;
const int FIELD2=12;
const int FIELD3=10;

const int PREC=1; // precision

int main() {

    int x=100, y=750000, z=12345;
	
    cout << "         1         2         3         4" << endl;
    cout << "1234567890123456789012345678901234567890" << endl << endl;

    cout << setw(FIELD1) << x << ", " << setw(FIELD2) << y << ", " << setw(FIELD3) << z << endl << endl;

    // setprecision WITHOUT fixed
    float fx = 12348.9123;
	
    cout << "         1         2         3         4" << endl;
    cout << "1234567890123456789012345678901234567890" << endl << endl;

    cout << setw(FIELD1) << setprecision(PREC) << fx << endl;
    cout << setw(FIELD1) << setprecision(PREC+1) << fx << endl;
    cout << setw(FIELD1) << setprecision(PREC+2) << fx << endl;
    cout << setw(FIELD1) << setprecision(PREC+3) << fx << endl;
    cout << setw(FIELD1) << setprecision(PREC+4) << fx << endl;
    
    // fixed with setprecision
    cout << "         1         2         3         4" << endl;
    cout << "1234567890123456789012345678901234567890" << endl << endl;

    cout << setw(FIELD1) << fixed << setprecision(PREC) << fx << endl;
    cout << setw(FIELD1) << fixed << setprecision(PREC+1) << fx << endl;
    cout << setw(FIELD1) << fixed << setprecision(PREC+2) << fx << endl;
    cout << setw(FIELD1) << fixed << setprecision(PREC+3) << fx << endl;
    cout << setw(FIELD1) << fixed << setprecision(PREC+4) << fx << endl << endl;

    return 0;
}

