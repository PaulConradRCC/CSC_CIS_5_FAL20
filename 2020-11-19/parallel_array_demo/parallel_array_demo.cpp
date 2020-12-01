/* 
 * File:   parallel_array_demo.cpp
 * Author: pconrad
 *
 * Created on November 19, 2020, 12:23 PM
 */

/* 
 * Demonstrate the following matrix
 * 
 * StudentID   Name   GPA    (StudentID as integer, Name as String, GPA as double)
 * 123456      Bill   4.00
 * 234567      Sally  4.15
 * 345671      James  3.98
 * 122211      Amy    3.95
 * 345678      Eric   3.75
 * 
 */

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

const int ARRAY_SIZE = 5;
const int STUDENTID_FIELD = 10;
const int NAME_FIELD = 15;
const int GPA_FIELD = 4;
const int DEC_PREC = 2;

int main(int argc, char** argv) {

    // our parallel array     index:   0        1         2       3       4
    int StudentID[ARRAY_SIZE] = { 123456,  234567,   345671, 122211, 345678 };
    string Name[ARRAY_SIZE] =   { "Bill", "Sally",  "James",  "Amy", "Eric" };
    double GPA[ARRAY_SIZE] =    {   4.00,    4.15,     3.98,   3.95,   3.75 };
    
    // output the data from our parallel arrays
    cout << fixed << setprecision(DEC_PREC);
    
    cout << setw(STUDENTID_FIELD) << "Student ID";
    cout << setw(NAME_FIELD) << "Name";
    cout << "     " << setw(GPA_FIELD) << "GPA" << endl;
    
    for(int i=0; i<ARRAY_SIZE; i++)
    {
        cout << setw(STUDENTID_FIELD) << StudentID[i];
        cout << setw(NAME_FIELD) << Name[i];
        cout << "     " << setw(GPA_FIELD) << GPA[i] << endl;
    }
    
    return 0;
}

